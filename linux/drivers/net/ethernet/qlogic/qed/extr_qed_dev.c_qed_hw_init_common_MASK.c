
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct qed_qm_info {int pf_rl_en; int pf_wfq_en; int qm_port_params; int vport_wfq_en; int vport_rl_en; int max_phys_tcs_per_port; } ;
struct qed_qm_common_rt_init_params {int pf_rl_en; int pf_wfq_en; int port_params; int vport_wfq_en; int vport_rl_en; int max_phys_tcs_per_port; int max_ports_per_engine; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {scalar_t__ rel_pf_id; struct qed_dev* cdev; TYPE_2__* mcp_info; struct qed_qm_info qm_info; } ;
struct qed_dev {int num_ports_in_engine; } ;
typedef int params ;
struct TYPE_3__ {scalar_t__ bandwidth_min; scalar_t__ bandwidth_max; } ;
struct TYPE_4__ {TYPE_1__ func_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct qed_dev*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (struct qed_dev*) ;
 scalar_t__ FUNC_2 (struct qed_dev*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct qed_qm_common_rt_init_params*,int ,int) ;
 int FUNC_4 (struct qed_hwfn*) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_ptt*,scalar_t__) ;
 int FUNC_6 (struct qed_hwfn*) ;
 int FUNC_7 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_8 (struct qed_dev*) ;
 int FUNC_9 (struct qed_hwfn*,struct qed_ptt*,int ,int ,int) ;
 int FUNC_10 (struct qed_hwfn*,struct qed_qm_common_rt_init_params*) ;
 scalar_t__ FUNC_11 (struct qed_hwfn*,scalar_t__) ;
 int FUNC_12 (struct qed_hwfn*,struct qed_ptt*,int ,int) ;

__attribute__((used)) static int FUNC_13(struct qed_hwfn *VAR_12,
         struct qed_ptt *VAR_13, int VAR_14)
{
 struct qed_qm_info *VAR_15 = &VAR_12->qm_info;
 struct qed_qm_common_rt_init_params VAR_16;
 struct qed_dev *VAR_17 = VAR_12->cdev;
 u8 VAR_18, VAR_19;
 u16 VAR_20, VAR_21;
 u32 VAR_22;
 int VAR_23 = 0;

 FUNC_8(VAR_17);


 FUNC_6(VAR_12);

 if (VAR_12->mcp_info) {
  if (VAR_12->mcp_info->func_info.bandwidth_max)
   VAR_15->pf_rl_en = 1;
  if (VAR_12->mcp_info->func_info.bandwidth_min)
   VAR_15->pf_wfq_en = 1;
 }

 FUNC_3(&VAR_16, 0, sizeof(VAR_16));
 VAR_16.max_ports_per_engine = VAR_12->cdev->num_ports_in_engine;
 VAR_16.max_phys_tcs_per_port = VAR_15->max_phys_tcs_per_port;
 VAR_16.pf_rl_en = VAR_15->pf_rl_en;
 VAR_16.pf_wfq_en = VAR_15->pf_wfq_en;
 VAR_16.vport_rl_en = VAR_15->vport_rl_en;
 VAR_16.vport_wfq_en = VAR_15->vport_wfq_en;
 VAR_16.port_params = VAR_15->qm_port_params;

 FUNC_10(VAR_12, &VAR_16);

 FUNC_4(VAR_12);

 FUNC_7(VAR_12, VAR_13);

 VAR_23 = FUNC_9(VAR_12, VAR_13, VAR_6, VAR_0, VAR_14);
 if (VAR_23)
  return VAR_23;

 FUNC_12(VAR_12, VAR_13, VAR_9, 0);
 FUNC_12(VAR_12, VAR_13, VAR_5, 1);

 if (FUNC_2(VAR_12->cdev)) {
  VAR_20 = FUNC_0(VAR_12->cdev);
  for (VAR_21 = 0; VAR_21 < VAR_20; VAR_21++) {
   FUNC_5(VAR_12, VAR_13, VAR_21);
   FUNC_12(VAR_12, VAR_13, VAR_7, 0x0);
   FUNC_12(VAR_12, VAR_13, VAR_8, 0x0);
  }

  FUNC_5(VAR_12, VAR_13, VAR_12->rel_pf_id);
 }

 VAR_19 = FUNC_1(VAR_17) ? VAR_4 : VAR_3;
 for (VAR_18 = 0; VAR_18 < VAR_19; VAR_18++) {
  VAR_22 = FUNC_11(VAR_12, VAR_18);
  FUNC_5(VAR_12, VAR_13, (u16) VAR_22);
  FUNC_12(VAR_12, VAR_13, VAR_1, 0x1);
  FUNC_12(VAR_12, VAR_13, VAR_2, 0x0);
  FUNC_12(VAR_12, VAR_13, VAR_10, 0x1);
  FUNC_12(VAR_12, VAR_13, VAR_11, 0x0);
 }

 FUNC_5(VAR_12, VAR_13, VAR_12->rel_pf_id);

 return VAR_23;
}
