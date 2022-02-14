
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int count; TYPE_1__* link; TYPE_2__* driver; int flags; int ctrl_lock; scalar_t__ packet; int write_wait; int read_wait; } ;
struct file {int dummy; } ;
struct TYPE_4__ {scalar_t__ subtype; } ;
struct TYPE_3__ {scalar_t__ driver_data; int write_wait; int read_wait; int flags; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_2__* VAR_4 ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct tty_struct*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct tty_struct *VAR_5, struct file *VAR_6)
{
 FUNC_0(!VAR_5);
 if (VAR_5->driver->subtype == VAR_0)
  FUNC_1(VAR_5->count > 1);
 else {
  if (FUNC_8(VAR_5))
   return;
  if (VAR_5->count > 2)
   return;
 }
 FUNC_5(VAR_1, &VAR_5->flags);
 FUNC_10(&VAR_5->read_wait);
 FUNC_10(&VAR_5->write_wait);
 FUNC_6(&VAR_5->ctrl_lock);
 VAR_5->packet = 0;
 FUNC_7(&VAR_5->ctrl_lock);

 if (!VAR_5->link)
  return;
 FUNC_5(VAR_2, &VAR_5->link->flags);
 FUNC_10(&VAR_5->link->read_wait);
 FUNC_10(&VAR_5->link->write_wait);
 if (VAR_5->driver->subtype == VAR_0) {
  FUNC_5(VAR_2, &VAR_5->flags);
  FUNC_9(VAR_5->link);
 }
}
