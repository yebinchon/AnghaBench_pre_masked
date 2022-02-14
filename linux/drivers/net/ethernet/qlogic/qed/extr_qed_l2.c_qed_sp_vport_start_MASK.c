
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_sp_vport_start_params {int only_untagged; int max_buffers_per_cqe; int tpa_mode; int remove_inner_vlan; int mtu; int vport_id; } ;
struct qed_hwfn {int cdev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_sp_vport_start_params*) ;
 int FUNC_2 (struct qed_hwfn*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct qed_hwfn *VAR_0,
         struct qed_sp_vport_start_params *VAR_1)
{
 if (FUNC_0(VAR_0->cdev)) {
  return FUNC_2(VAR_0, VAR_1->vport_id,
          VAR_1->mtu,
          VAR_1->remove_inner_vlan,
          VAR_1->tpa_mode,
          VAR_1->max_buffers_per_cqe,
          VAR_1->only_untagged);
 }

 return FUNC_1(VAR_0, VAR_1);
}
