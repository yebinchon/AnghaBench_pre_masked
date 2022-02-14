
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct tty_driver {struct tty_struct** ttys; TYPE_1__* ops; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct tty_struct* (* lookup ) (struct tty_driver*,struct file*,int) ;} ;


 int VAR_0 ;
 struct tty_struct* FUNC_0 (int ) ;
 int FUNC_1 (struct tty_struct*) ;
 struct tty_struct* FUNC_2 (struct tty_driver*,struct file*,int) ;
 int FUNC_3 (struct tty_struct*) ;

__attribute__((used)) static struct tty_struct *FUNC_4(struct tty_driver *VAR_1,
  struct file *VAR_2, int VAR_3)
{
 struct tty_struct *VAR_4;

 if (VAR_1->ops->lookup)
  if (!VAR_2)
   VAR_4 = FUNC_0(-VAR_0);
  else
   VAR_4 = VAR_1->ops->lookup(VAR_1, VAR_2, VAR_3);
 else
  VAR_4 = VAR_1->ttys[VAR_3];

 if (!FUNC_1(VAR_4))
  FUNC_3(VAR_4);
 return VAR_4;
}
