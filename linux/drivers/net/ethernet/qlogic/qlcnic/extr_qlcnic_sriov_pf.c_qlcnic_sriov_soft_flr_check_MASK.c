
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_vf_info {int state; } ;
struct qlcnic_bc_trans {struct qlcnic_bc_hdr* req_hdr; } ;
struct qlcnic_bc_hdr {scalar_t__ cmd_op; scalar_t__ op_type; } ;
struct qlcnic_adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qlcnic_adapter*,struct qlcnic_bc_trans*,struct qlcnic_vf_info*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

bool FUNC_2(struct qlcnic_adapter *VAR_3,
     struct qlcnic_bc_trans *VAR_4,
     struct qlcnic_vf_info *VAR_5)
{
 struct qlcnic_bc_hdr *VAR_6 = VAR_4->req_hdr;

 if ((VAR_6->cmd_op == VAR_0) &&
     (VAR_6->op_type == VAR_1) &&
      FUNC_1(VAR_2, &VAR_5->state)) {
  FUNC_0(VAR_3, VAR_4, VAR_5);
  return 1;
 }

 return 0;
}
