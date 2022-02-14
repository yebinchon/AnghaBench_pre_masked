
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct tty_driver {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* install ) (struct tty_driver*,struct tty_struct*) ;} ;


 int FUNC_0 (struct tty_driver*,struct tty_struct*) ;
 int FUNC_1 (struct tty_driver*,struct tty_struct*) ;

__attribute__((used)) static int FUNC_2(struct tty_driver *VAR_0,
      struct tty_struct *VAR_1)
{
 return VAR_0->ops->install ? VAR_0->ops->install(VAR_0, VAR_1) :
  FUNC_1(VAR_0, VAR_1);
}
