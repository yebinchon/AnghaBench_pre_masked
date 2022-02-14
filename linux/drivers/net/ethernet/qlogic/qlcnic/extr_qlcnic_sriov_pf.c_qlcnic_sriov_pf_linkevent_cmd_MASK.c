
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_vf_info {struct qlcnic_adapter* adapter; } ;
struct TYPE_2__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_1__ rsp; } ;
struct qlcnic_bc_trans {struct qlcnic_vf_info* vf; } ;
struct qlcnic_adapter {int dummy; } ;


 int FUNC_0 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;
 int FUNC_1 (struct qlcnic_vf_info*,struct qlcnic_cmd_args*) ;

__attribute__((used)) static int FUNC_2(struct qlcnic_bc_trans *VAR_0,
      struct qlcnic_cmd_args *VAR_1)
{
 struct qlcnic_vf_info *VAR_2 = VAR_0->vf;
 struct qlcnic_adapter *VAR_3 = VAR_2->adapter;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_1);
 if (VAR_4) {
  VAR_1->rsp.arg[0] |= (0x6 << 25);
  return VAR_4;
 }

 VAR_4 = FUNC_0(VAR_3, VAR_1);
 return VAR_4;
}
