
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct qlcnic_vport {int vlan_mode; int pvid; } ;
struct qlcnic_vf_info {struct qlcnic_adapter* adapter; struct qlcnic_vport* vp; } ;
struct qlcnic_sriov {int num_allowed_vlans; } ;
struct TYPE_4__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_2__ rsp; } ;
struct qlcnic_bc_trans {struct qlcnic_vf_info* vf; } ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct TYPE_3__ {struct qlcnic_sriov* sriov; } ;




 scalar_t__ FUNC_0 (struct qlcnic_adapter*) ;

__attribute__((used)) static int FUNC_1(struct qlcnic_bc_trans *VAR_0,
           struct qlcnic_cmd_args *VAR_1)
{
 struct qlcnic_vf_info *VAR_2 = VAR_0->vf;
 struct qlcnic_vport *VAR_3 = VAR_2->vp;
 u8 VAR_4 = VAR_3->vlan_mode;
 struct qlcnic_adapter *VAR_5;
 struct qlcnic_sriov *VAR_6;

 VAR_5 = VAR_2->adapter;
 VAR_6 = VAR_5->ahw->sriov;

 VAR_1->rsp.arg[0] |= 1 << 25;




 if (FUNC_0(VAR_5) && VAR_4 == 128)
  return 0;

 switch (VAR_4) {
 case 129:
  VAR_1->rsp.arg[1] = VAR_4 | 1 << 8;
  VAR_1->rsp.arg[2] = VAR_6->num_allowed_vlans << 16;
  break;
 case 128:
  VAR_1->rsp.arg[1] = VAR_4 | 1 << 8 | VAR_3->pvid << 16;
  break;
 }

 return 0;
}
