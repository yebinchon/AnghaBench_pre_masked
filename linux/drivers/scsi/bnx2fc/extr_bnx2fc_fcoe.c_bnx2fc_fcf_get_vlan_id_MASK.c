
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fcoe_fcf_device {int vlan_id; } ;
struct fcoe_ctlr_device {int dummy; } ;
struct fcoe_ctlr {int dummy; } ;
struct bnx2fc_interface {int vlan_id; } ;


 struct fcoe_ctlr* FUNC_0 (struct fcoe_ctlr_device*) ;
 struct bnx2fc_interface* FUNC_1 (struct fcoe_ctlr*) ;
 struct fcoe_ctlr_device* FUNC_2 (struct fcoe_fcf_device*) ;

__attribute__((used)) static void FUNC_3(struct fcoe_fcf_device *VAR_0)
{
 struct fcoe_ctlr_device *VAR_1 =
  FUNC_2(VAR_0);
 struct fcoe_ctlr *VAR_2 = FUNC_0(VAR_1);
 struct bnx2fc_interface *VAR_3 = FUNC_1(VAR_2);

 VAR_0->vlan_id = VAR_3->vlan_id;
}
