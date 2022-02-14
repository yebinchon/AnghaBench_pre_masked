
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int dummy; } ;
struct cdev {int kobj; struct module* owner; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct module*) ;

void FUNC_2(struct cdev *VAR_0)
{
 if (VAR_0) {
  struct module *VAR_1 = VAR_0->owner;
  FUNC_0(&VAR_0->kobj);
  FUNC_1(VAR_1);
 }
}
