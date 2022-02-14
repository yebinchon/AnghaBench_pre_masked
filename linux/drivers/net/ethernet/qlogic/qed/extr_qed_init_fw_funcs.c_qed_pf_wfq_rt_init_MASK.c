
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef size_t u16 ;
struct qed_qm_pf_rt_init_params {size_t num_pf_pqs; size_t num_vf_pqs; int pf_id; int max_phys_tcs_per_port; int pf_wfq; struct init_qm_pq_params* pq_params; } ;
struct qed_hwfn {int dummy; } ;
struct init_qm_pq_params {int tc_id; int port_id; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct qed_hwfn*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct qed_hwfn*,scalar_t__,int) ;
 int FUNC_4 (struct qed_hwfn*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct qed_hwfn *VAR_8,

         struct qed_qm_pf_rt_init_params *VAR_9)
{
 u16 VAR_10 = VAR_9->num_pf_pqs + VAR_9->num_vf_pqs;
 struct init_qm_pq_params *VAR_11 = VAR_9->pq_params;
 u32 VAR_12, VAR_13;
 u8 VAR_14;
 u16 VAR_15;

 VAR_12 = FUNC_2(VAR_9->pf_wfq);
 if (!VAR_12 || VAR_12 > VAR_6) {
  FUNC_0(VAR_8, "Invalid PF WFQ weight configuration\n");
  return -1;
 }

 for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++) {
  VAR_14 = FUNC_4(VAR_8,
       VAR_11[VAR_15].port_id,
       VAR_11[VAR_15].tc_id,
       VAR_9->max_phys_tcs_per_port);
  VAR_13 =
   (VAR_9->pf_id < VAR_0 ?
    VAR_2 :
    VAR_1) +
   VAR_14 * VAR_0 +
   (VAR_9->pf_id % VAR_0);
  FUNC_1(VAR_8,
     VAR_13, (u32)VAR_5);
 }

 FUNC_3(VAR_8,
       VAR_3 + VAR_9->pf_id,
       VAR_7 | (u32)VAR_5);
 FUNC_3(VAR_8, VAR_4 + VAR_9->pf_id,
       VAR_12);

 return 0;
}
