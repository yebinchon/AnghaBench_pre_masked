
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct tb_cm {int hotplug_active; } ;
struct tb {TYPE_1__* root_switch; int dev; } ;
struct TYPE_9__ {int no_nvm_upgrade; int dev; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 struct tb_cm* FUNC_4 (struct tb*) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_1__* FUNC_7 (struct tb*,int *,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_10(struct tb *VAR_1)
{
 struct tb_cm *VAR_2 = FUNC_4(VAR_1);
 int VAR_3;

 VAR_1->root_switch = FUNC_7(VAR_1, &VAR_1->dev, 0);
 if (FUNC_0(VAR_1->root_switch))
  return FUNC_1(VAR_1->root_switch);






 VAR_1->root_switch->no_nvm_upgrade = 1;

 VAR_3 = FUNC_8(VAR_1->root_switch);
 if (VAR_3) {
  FUNC_9(VAR_1->root_switch);
  return VAR_3;
 }


 VAR_3 = FUNC_6(VAR_1->root_switch);
 if (VAR_3) {
  FUNC_9(VAR_1->root_switch);
  return VAR_3;
 }


 FUNC_5(VAR_1->root_switch);

 FUNC_3(VAR_1->root_switch);

 FUNC_2(&VAR_1->root_switch->dev, ((void*)0),
         VAR_0);


 VAR_2->hotplug_active = 1;
 return 0;
}
