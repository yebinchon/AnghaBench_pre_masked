
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tty_struct {scalar_t__ index; TYPE_2__* driver; } ;
struct tty_audit_buf {scalar_t__ dev; unsigned int icanon; scalar_t__ valid; scalar_t__ data; int mutex; } ;
typedef scalar_t__ dev_t ;
struct TYPE_6__ {TYPE_1__* signal; } ;
struct TYPE_5__ {scalar_t__ type; scalar_t__ subtype; int minor_start; int major; } ;
struct TYPE_4__ {int audit_tty; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (struct tty_audit_buf*) ;
 int FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (struct tty_struct*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_4 (int ) ;
 scalar_t__ VAR_4 ;
 TYPE_3__* VAR_5 ;
 int FUNC_5 (scalar_t__,void const*,size_t) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct tty_audit_buf* FUNC_8 () ;
 int FUNC_9 (struct tty_audit_buf*) ;
 scalar_t__ FUNC_10 (int) ;

void FUNC_11(struct tty_struct *VAR_6, const void *VAR_7, size_t VAR_8)
{
 struct tty_audit_buf *VAR_9;
 unsigned int VAR_10 = !!FUNC_2(VAR_6);
 unsigned int VAR_11;
 dev_t VAR_12;

 VAR_11 = FUNC_4(VAR_5->signal->audit_tty);
 if (~VAR_11 & VAR_0)
  return;

 if (FUNC_10(VAR_8 == 0))
  return;

 if (VAR_6->driver->type == VAR_4
     && VAR_6->driver->subtype == VAR_3)
  return;

 if ((~VAR_11 & VAR_1) && VAR_10 && !FUNC_1(VAR_6))
  return;

 VAR_9 = FUNC_8();
 if (FUNC_0(VAR_9))
  return;

 FUNC_6(&VAR_9->mutex);
 VAR_12 = FUNC_3(VAR_6->driver->major, VAR_6->driver->minor_start) + VAR_6->index;
 if (VAR_9->dev != VAR_12 || VAR_9->icanon != VAR_10) {
  FUNC_9(VAR_9);
  VAR_9->dev = VAR_12;
  VAR_9->icanon = VAR_10;
 }
 do {
  size_t VAR_13;

  VAR_13 = VAR_2 - VAR_9->valid;
  if (VAR_13 > VAR_8)
   VAR_13 = VAR_8;
  FUNC_5(VAR_9->data + VAR_9->valid, VAR_7, VAR_13);
  VAR_9->valid += VAR_13;
  VAR_7 += VAR_13;
  VAR_8 -= VAR_13;
  if (VAR_9->valid == VAR_2)
   FUNC_9(VAR_9);
 } while (VAR_8 != 0);
 FUNC_7(&VAR_9->mutex);
}
