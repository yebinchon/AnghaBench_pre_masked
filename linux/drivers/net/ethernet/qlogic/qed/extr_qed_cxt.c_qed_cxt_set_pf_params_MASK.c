
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct qed_iscsi_pf_params {int num_cons; int num_tasks; } ;
struct qed_fcoe_pf_params {int num_cons; int num_tasks; } ;
struct qed_eth_pf_params {int num_cons; int num_arfs_filters; int num_vf_cons; } ;
struct TYPE_6__ {struct qed_iscsi_pf_params iscsi_pf_params; struct qed_fcoe_pf_params fcoe_pf_params; struct qed_eth_pf_params eth_pf_params; int rdma_pf_params; } ;
struct TYPE_4__ {int personality; } ;
struct qed_hwfn {int cdev; TYPE_3__ pf_params; TYPE_2__* p_cxt_mngr; TYPE_1__ hw_info; scalar_t__ using_ll2; } ;
struct TYPE_5__ {int arfs_count; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;






 int FUNC_1 (struct qed_hwfn*,int ,int,int ) ;
 int FUNC_2 (struct qed_hwfn*,int ,int ,int ,int ,int) ;
 int FUNC_3 (struct qed_hwfn*,int *,int) ;

int FUNC_4(struct qed_hwfn *VAR_8, u32 VAR_9)
{

 u32 VAR_10 = 1;

 if (VAR_8->using_ll2)
  VAR_10 += 4;
 FUNC_1(VAR_8, VAR_2, VAR_10, 0);

 switch (VAR_8->hw_info.personality) {
 case 131:
 case 132:
 case 130:
 {
   FUNC_3(VAR_8,
            &VAR_8->
            pf_params.rdma_pf_params,
            VAR_9);

 }

 case 133:
 {
  struct qed_eth_pf_params *VAR_11 =
      &VAR_8->pf_params.eth_pf_params;

  if (!VAR_11->num_vf_cons)
   VAR_11->num_vf_cons =
       VAR_1;
  FUNC_1(VAR_8, VAR_3,
         VAR_11->num_cons,
         VAR_11->num_vf_cons);
  VAR_8->p_cxt_mngr->arfs_count = VAR_11->num_arfs_filters;
  break;
 }
 case 129:
 {
  struct qed_fcoe_pf_params *VAR_12;

  VAR_12 = &VAR_8->pf_params.fcoe_pf_params;

  if (VAR_12->num_cons && VAR_12->num_tasks) {
   FUNC_1(VAR_8,
          VAR_4,
          VAR_12->num_cons,
          0);

   FUNC_2(VAR_8, VAR_4,
          VAR_6, 0,
          VAR_12->num_tasks, 1);
  } else {
   FUNC_0(VAR_8->cdev,
    "Fcoe personality used without setting params!\n");
  }
  break;
 }
 case 128:
 {
  struct qed_iscsi_pf_params *VAR_13;

  VAR_13 = &VAR_8->pf_params.iscsi_pf_params;

  if (VAR_13->num_cons && VAR_13->num_tasks) {
   FUNC_1(VAR_8,
          VAR_5,
          VAR_13->num_cons,
          0);

   FUNC_2(VAR_8,
          VAR_5,
          VAR_7,
          0,
          VAR_13->num_tasks,
          1);
  } else {
   FUNC_0(VAR_8->cdev,
    "Iscsi personality used without setting params!\n");
  }
  break;
 }
 default:
  return -VAR_0;
 }

 return 0;
}
