
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {scalar_t__ count; TYPE_1__* ops; int atomic_write_lock; } ;
struct TYPE_2__ {int (* write ) (struct tty_struct*,char*,int ) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct tty_struct*,char*,int ) ;
 int FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (struct tty_struct*) ;
 int FUNC_5 (struct tty_struct*) ;

void FUNC_6(struct tty_struct *VAR_0, char *VAR_1)
{
 if (VAR_0) {
  FUNC_0(&VAR_0->atomic_write_lock);
  FUNC_3(VAR_0);
  if (VAR_0->ops->write && VAR_0->count > 0)
   VAR_0->ops->write(VAR_0, VAR_1, FUNC_1(VAR_1));
  FUNC_4(VAR_0);
  FUNC_5(VAR_0);
 }
 return;
}
