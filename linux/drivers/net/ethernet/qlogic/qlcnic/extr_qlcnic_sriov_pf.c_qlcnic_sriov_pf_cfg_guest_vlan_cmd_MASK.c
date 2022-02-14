
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct qlcnic_vport {scalar_t__ vlan_mode; } ;
struct qlcnic_vf_info {struct qlcnic_vport* vp; struct qlcnic_adapter* adapter; } ;
struct TYPE_4__ {int* arg; } ;
struct TYPE_3__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_2__ rsp; TYPE_1__ req; } ;
struct qlcnic_bc_trans {struct qlcnic_vf_info* vf; } ;
struct qlcnic_adapter {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct qlcnic_adapter*,struct qlcnic_vf_info*,struct qlcnic_cmd_args*) ;
 int FUNC_1 (struct qlcnic_adapter*,struct qlcnic_vf_info*,struct qlcnic_cmd_args*) ;

__attribute__((used)) static int FUNC_2(struct qlcnic_bc_trans *VAR_2,
           struct qlcnic_cmd_args *VAR_3)
{
 struct qlcnic_vf_info *VAR_4 = VAR_2->vf;
 struct qlcnic_adapter *VAR_5 = VAR_4->adapter;
 struct qlcnic_vport *VAR_6 = VAR_4->vp;
 int VAR_7 = -VAR_0;
 u8 VAR_8;

 if (VAR_6->vlan_mode != VAR_1) {
  VAR_3->rsp.arg[0] |= 2 << 25;
  return VAR_7;
 }

 VAR_8 = VAR_3->req.arg[1] & 0xf;

 if (VAR_8)
  VAR_7 = FUNC_0(VAR_5, VAR_4, VAR_3);
 else
  VAR_7 = FUNC_1(VAR_5, VAR_4, VAR_3);

 VAR_3->rsp.arg[0] |= VAR_7 ? 2 << 25 : 1 << 25;
 return VAR_7;
}
