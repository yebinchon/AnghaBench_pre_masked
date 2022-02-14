
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct file {TYPE_1__* f_op; } ;
struct TYPE_2__ {scalar_t__ write; } ;


 int VAR_0 ;
 int FUNC_0 (struct tty_struct*,int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_2, struct file *VAR_3)
{





 if (VAR_3->f_op->write == VAR_1)
  return 0;

 return FUNC_0(VAR_2, VAR_0);
}
