
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {TYPE_2__* ops; int flags; TYPE_1__* link; scalar_t__ packet; int port; int write_wait; int read_wait; } ;
struct file {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_4__ {scalar_t__ write; } ;
struct TYPE_3__ {scalar_t__ ctrl_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (struct tty_struct*,int) ;
 int FUNC_1 (struct file*,int *,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct tty_struct*) ;
 scalar_t__ FUNC_5 (struct file*) ;
 int FUNC_6 (struct tty_struct*) ;
 scalar_t__ FUNC_7 (struct tty_struct*) ;

__attribute__((used)) static __poll_t FUNC_8(struct tty_struct *VAR_8, struct file *VAR_9,
       poll_table *VAR_10)
{
 __poll_t VAR_11 = 0;

 FUNC_1(VAR_9, &VAR_8->read_wait, VAR_10);
 FUNC_1(VAR_9, &VAR_8->write_wait, VAR_10);
 if (FUNC_0(VAR_8, 1))
  VAR_11 |= VAR_1 | VAR_4;
 else {
  FUNC_3(VAR_8->port);
  if (FUNC_0(VAR_8, 1))
   VAR_11 |= VAR_1 | VAR_4;
 }
 if (VAR_8->packet && VAR_8->link->ctrl_status)
  VAR_11 |= VAR_3 | VAR_1 | VAR_4;
 if (FUNC_2(VAR_6, &VAR_8->flags))
  VAR_11 |= VAR_0;
 if (FUNC_5(VAR_9))
  VAR_11 |= VAR_0;
 if (VAR_8->ops->write && !FUNC_6(VAR_8) &&
   FUNC_4(VAR_8) < VAR_7 &&
   FUNC_7(VAR_8) > 0)
  VAR_11 |= VAR_2 | VAR_5;
 return VAR_11;
}
