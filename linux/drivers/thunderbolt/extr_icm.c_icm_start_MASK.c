
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct tb {TYPE_1__* root_switch; int dev; } ;
struct icm {int (* set_uuid ) (struct tb*) ;int rpm; int can_upgrade_nvm; scalar_t__ safe_mode; } ;
struct TYPE_7__ {int no_nvm_upgrade; int rpm; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct tb*) ;
 struct icm* FUNC_3 (struct tb*) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (struct tb*,int *,int ) ;
 TYPE_1__* FUNC_6 (struct tb*,int *,int ) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(struct tb *VAR_0)
{
 struct icm *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 if (VAR_1->safe_mode)
  VAR_0->root_switch = FUNC_6(VAR_0, &VAR_0->dev, 0);
 else
  VAR_0->root_switch = FUNC_5(VAR_0, &VAR_0->dev, 0);
 if (FUNC_0(VAR_0->root_switch))
  return FUNC_1(VAR_0->root_switch);

 VAR_0->root_switch->no_nvm_upgrade = !VAR_1->can_upgrade_nvm;
 VAR_0->root_switch->rpm = VAR_1->rpm;

 if (VAR_1->set_uuid)
  VAR_1->set_uuid(VAR_0);

 VAR_2 = FUNC_4(VAR_0->root_switch);
 if (VAR_2) {
  FUNC_7(VAR_0->root_switch);
  VAR_0->root_switch = ((void*)0);
 }

 return VAR_2;
}
