
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ flags1; } ;
struct TYPE_12__ {TYPE_4__ tdif_context; } ;
union type1_task_context {TYPE_5__ roce_ctx; } ;
typedef int u8 ;
typedef scalar_t__ u64 ;
typedef size_t u32 ;
struct qed_ptt {int dummy; } ;
struct TYPE_8__ {size_t val; } ;
struct qed_ilt_client_cfg {TYPE_1__ p_size; struct qed_ilt_cli_blk* pf_blks; } ;
struct qed_ilt_cli_blk {size_t start_line; int real_size_in_page; } ;
struct qed_hwfn {int b_rdma_enabled_in_prs; TYPE_7__* p_cxt_mngr; int rdma_prs_search_reg; TYPE_3__* cdev; } ;
typedef int ilt_hw_entry ;
typedef enum qed_cxt_elem_type { ____Placeholder_qed_cxt_elem_type } qed_cxt_elem_type ;
typedef int dma_addr_t ;
struct TYPE_14__ {size_t pf_start_line; int mutex; TYPE_6__* ilt_shadow; struct qed_ilt_client_cfg* clients; } ;
struct TYPE_13__ {int p_phys; int size; void* p_virt; } ;
struct TYPE_10__ {TYPE_2__* pdev; } ;
struct TYPE_9__ {int dev; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (struct qed_hwfn*) ;
 int FUNC_2 (struct qed_hwfn*,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t FUNC_3 (size_t) ;
 size_t VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;



 int FUNC_4 (scalar_t__,int ,int) ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 int VAR_17 ;
 size_t FUNC_5 (struct qed_hwfn*) ;
 void* FUNC_6 (int *,int ,int*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct qed_hwfn*,struct qed_ptt*,scalar_t__,size_t,int,int *) ;
 struct qed_ptt* FUNC_10 (struct qed_hwfn*) ;
 int FUNC_11 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_12 (struct qed_hwfn*,struct qed_ptt*,int ,int) ;

int
FUNC_13(struct qed_hwfn *VAR_18,
     enum qed_cxt_elem_type VAR_19, u32 VAR_20)
{
 u32 VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
 struct qed_ilt_client_cfg *VAR_27;
 struct qed_ilt_cli_blk *VAR_28;
 struct qed_ptt *VAR_29;
 dma_addr_t VAR_30;
 u64 VAR_31;
 void *VAR_32;
 int VAR_33 = 0;

 switch (VAR_19) {
 case 130:
  VAR_27 = &VAR_18->p_cxt_mngr->clients[VAR_5];
  VAR_23 = FUNC_1(VAR_18);
  VAR_28 = &VAR_27->pf_blks[VAR_0];
  break;
 case 129:
  VAR_27 = &VAR_18->p_cxt_mngr->clients[VAR_7];
  VAR_23 = VAR_16;
  VAR_28 = &VAR_27->pf_blks[VAR_15];
  break;
 case 128:
  VAR_27 = &VAR_18->p_cxt_mngr->clients[VAR_6];
  VAR_23 = FUNC_5(VAR_18);
  VAR_28 = &VAR_27->pf_blks[FUNC_0(VAR_14)];
  break;
 default:
  FUNC_2(VAR_18, "-EINVALID elem type = %d", VAR_19);
  return -VAR_2;
 }


 VAR_24 = VAR_27->p_size.val;
 VAR_25 = FUNC_3(VAR_24) / VAR_23;
 VAR_26 = VAR_28->start_line + (VAR_20 / VAR_25);
 VAR_22 = VAR_26 - VAR_18->p_cxt_mngr->pf_start_line;







 FUNC_7(&VAR_18->p_cxt_mngr->mutex);

 if (VAR_18->p_cxt_mngr->ilt_shadow[VAR_22].p_virt)
  goto out0;

 VAR_29 = FUNC_10(VAR_18);
 if (!VAR_29) {
  FUNC_2(VAR_18,
     "QED_TIME_OUT on ptt acquire - dynamic allocation");
  VAR_33 = -VAR_1;
  goto out0;
 }

 VAR_32 = FUNC_6(&VAR_18->cdev->pdev->dev,
        VAR_28->real_size_in_page, &VAR_30,
        VAR_4);
 if (!VAR_32) {
  VAR_33 = -VAR_3;
  goto out1;
 }







 if (VAR_19 == 128) {
  u32 VAR_34;
  u8 *VAR_35 = (u8 *)VAR_32;
  union type1_task_context *VAR_36;

  for (VAR_34 = 0; VAR_34 < VAR_25; VAR_34++) {
   VAR_36 = (union type1_task_context *)VAR_35;
   FUNC_4(VAR_36->roce_ctx.tdif_context.flags1,
      VAR_17, 0xf);
   VAR_35 += FUNC_5(VAR_18);
  }
 }

 VAR_18->p_cxt_mngr->ilt_shadow[VAR_22].p_virt = VAR_32;
 VAR_18->p_cxt_mngr->ilt_shadow[VAR_22].p_phys = VAR_30;
 VAR_18->p_cxt_mngr->ilt_shadow[VAR_22].size =
     VAR_28->real_size_in_page;


 VAR_21 = VAR_13 +
     (VAR_26 * VAR_11 * VAR_8);

 VAR_31 = 0;
 FUNC_4(VAR_31, VAR_10, 1ULL);
 FUNC_4(VAR_31,
    VAR_9,
    (VAR_18->p_cxt_mngr->ilt_shadow[VAR_22].p_phys >> 12));


 FUNC_9(VAR_18, VAR_29, (u64) (uintptr_t)&VAR_31,
     VAR_21, sizeof(VAR_31) / sizeof(u32),
     ((void*)0));

 if (VAR_19 == 130) {
  u32 VAR_37 = (1 + (VAR_20 / VAR_25)) *
      VAR_25;


  FUNC_12(VAR_18, VAR_29, VAR_12,
         VAR_37 - 1);

  if (!VAR_18->b_rdma_enabled_in_prs) {

   FUNC_12(VAR_18, VAR_29, VAR_18->rdma_prs_search_reg, 1);
   VAR_18->b_rdma_enabled_in_prs = 1;
  }
 }

out1:
 FUNC_11(VAR_18, VAR_29);
out0:
 FUNC_8(&VAR_18->p_cxt_mngr->mutex);

 return VAR_33;
}
