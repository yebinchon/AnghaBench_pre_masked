
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qede_dev {int accept_any_vlan; int cdev; TYPE_1__* ops; } ;
struct qed_update_vport_params {int accept_any_vlan; int update_accept_any_vlan_flg; scalar_t__ vport_id; } ;
struct TYPE_2__ {int (* vport_update ) (int ,struct qed_update_vport_params*) ;} ;


 int FUNC_0 (struct qede_dev*,char*,char*) ;
 int FUNC_1 (struct qede_dev*,char*,char*) ;
 int VAR_0 ;
 int FUNC_2 (int ,struct qed_update_vport_params*) ;
 int FUNC_3 (struct qed_update_vport_params*) ;
 struct qed_update_vport_params* FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct qede_dev *VAR_1, bool VAR_2)
{
 struct qed_update_vport_params *VAR_3;
 int VAR_4;


 if (VAR_1->accept_any_vlan == VAR_2)
  return 0;

 VAR_3 = FUNC_4(sizeof(*VAR_3));
 if (!VAR_3)
  return -VAR_0;

 VAR_3->vport_id = 0;
 VAR_3->accept_any_vlan = VAR_2;
 VAR_3->update_accept_any_vlan_flg = 1;

 VAR_4 = VAR_1->ops->vport_update(VAR_1->cdev, VAR_3);
 if (VAR_4) {
  FUNC_0(VAR_1, "Failed to %s accept-any-vlan\n",
         VAR_2 ? "enable" : "disable");
 } else {
  FUNC_1(VAR_1, "%s accept-any-vlan\n",
   VAR_2 ? "enabled" : "disabled");
  VAR_1->accept_any_vlan = VAR_2;
 }

 FUNC_3(VAR_3);
 return 0;
}
