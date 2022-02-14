
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_qm_common_rt_init_params {int pf_wfq_en; int vport_wfq_en; int pf_rl_en; int vport_rl_en; int port_params; int max_phys_tcs_per_port; int max_ports_per_engine; } ;
struct qed_hwfn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct qed_hwfn*,int ,int) ;
 int FUNC_1 (struct qed_hwfn*,int ,int ,int ) ;
 int FUNC_2 (struct qed_hwfn*,int ,int ,int ) ;
 int FUNC_3 (struct qed_hwfn*,int) ;
 int FUNC_4 (struct qed_hwfn*,int) ;
 int FUNC_5 (struct qed_hwfn*,int) ;
 int FUNC_6 (struct qed_hwfn*,int) ;

int FUNC_7(struct qed_hwfn *VAR_13,
     struct qed_qm_common_rt_init_params *VAR_14)
{

 u32 VAR_15 = (VAR_2 <<
      VAR_7) |
     (VAR_0 << VAR_5) |
     (VAR_14->pf_wfq_en <<
      VAR_9) |
     (VAR_14->vport_wfq_en <<
      VAR_12) |
     (VAR_14->pf_rl_en <<
      VAR_8) |
     (VAR_14->vport_rl_en <<
      VAR_11) |
     (VAR_1 <<
      VAR_6) |
     (VAR_3 <<
      VAR_10);

 FUNC_0(VAR_13, VAR_4, VAR_15);


 FUNC_3(VAR_13, VAR_14->pf_rl_en);


 FUNC_4(VAR_13, VAR_14->pf_wfq_en);


 FUNC_5(VAR_13, VAR_14->vport_rl_en);


 FUNC_6(VAR_13, VAR_14->vport_wfq_en);


 FUNC_2(VAR_13,
          VAR_14->max_ports_per_engine,
          VAR_14->max_phys_tcs_per_port,
          VAR_14->port_params);


 FUNC_1(VAR_13,
          VAR_14->max_ports_per_engine,
          VAR_14->max_phys_tcs_per_port,
          VAR_14->port_params);

 return 0;
}
