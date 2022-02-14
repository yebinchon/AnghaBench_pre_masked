
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_sp_vport_update_params {int update_approx_mcast_flg; int* bins; } ;
struct qed_hwfn {int dummy; } ;
struct qed_filter_mcast {scalar_t__ opcode; int num_mc_addrs; int * mac; } ;
typedef int sp_params ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct qed_sp_vport_update_params*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_sp_vport_update_params*) ;

void FUNC_3(struct qed_hwfn *VAR_1,
       struct qed_filter_mcast *VAR_2)
{
 struct qed_sp_vport_update_params VAR_3;
 int VAR_4;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.update_approx_mcast_flg = 1;

 if (VAR_2->opcode == VAR_0) {
  for (VAR_4 = 0; VAR_4 < VAR_2->num_mc_addrs; VAR_4++) {
   u32 VAR_5;

   VAR_5 = FUNC_1(VAR_2->mac[VAR_4]);
   VAR_3.bins[VAR_5 / 32] |= 1 << (VAR_5 % 32);
  }
 }

 FUNC_2(VAR_1, &VAR_3);
}
