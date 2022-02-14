
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int state_initialized; } ;
struct TYPE_2__ {struct kobject* parent; } ;
struct cdev {TYPE_1__ kobj; } ;


 int FUNC_0 (int) ;

void FUNC_1(struct cdev *VAR_0, struct kobject *VAR_1)
{
 FUNC_0(!VAR_1->state_initialized);
 VAR_0->kobj.parent = VAR_1;
}
