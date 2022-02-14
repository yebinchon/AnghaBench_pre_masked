
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct TYPE_6__ {int val; } ;
struct qed_ilt_client_cfg {TYPE_1__ p_size; struct qed_ilt_cli_blk* pf_blks; } ;
struct qed_ilt_cli_blk {int start_line; } ;
struct qed_hwfn {TYPE_5__* p_cxt_mngr; TYPE_3__* cdev; } ;
typedef int ilt_hw_entry ;
typedef enum qed_cxt_elem_type { ____Placeholder_qed_cxt_elem_type } qed_cxt_elem_type ;
struct TYPE_10__ {int pf_start_line; TYPE_4__* ilt_shadow; struct qed_ilt_client_cfg* clients; } ;
struct TYPE_9__ {scalar_t__ size; scalar_t__ p_phys; int * p_virt; } ;
struct TYPE_8__ {TYPE_2__* pdev; } ;
struct TYPE_7__ {int dev; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (struct qed_hwfn*) ;
 int FUNC_2 (struct qed_hwfn*,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;



 size_t VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (struct qed_hwfn*) ;
 int FUNC_5 (int *,scalar_t__,int *,scalar_t__) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_ptt*,scalar_t__,int,int,int *) ;
 struct qed_ptt* FUNC_7 (struct qed_hwfn*) ;
 int FUNC_8 (struct qed_hwfn*,struct qed_ptt*) ;

__attribute__((used)) static int
FUNC_9(struct qed_hwfn *VAR_12,
         enum qed_cxt_elem_type VAR_13,
         u32 VAR_14, u32 VAR_15)
{
 u32 VAR_16, VAR_17, VAR_18, VAR_19;
 u32 VAR_20, VAR_21, VAR_22, VAR_23;
 struct qed_ilt_client_cfg *VAR_24;
 struct qed_ilt_cli_blk *VAR_25;
 u32 VAR_26 = VAR_14 + VAR_15;
 struct qed_ptt *VAR_27;
 u64 VAR_28 = 0;
 u32 VAR_29;

 switch (VAR_13) {
 case 130:
  VAR_24 = &VAR_12->p_cxt_mngr->clients[VAR_3];
  VAR_21 = FUNC_1(VAR_12);
  VAR_25 = &VAR_24->pf_blks[VAR_0];
  break;
 case 129:
  VAR_24 = &VAR_12->p_cxt_mngr->clients[VAR_5];
  VAR_21 = VAR_11;
  VAR_25 = &VAR_24->pf_blks[VAR_10];
  break;
 case 128:
  VAR_24 = &VAR_12->p_cxt_mngr->clients[VAR_4];
  VAR_21 = FUNC_4(VAR_12);
  VAR_25 = &VAR_24->pf_blks[FUNC_0(VAR_9)];
  break;
 default:
  FUNC_2(VAR_12, "-EINVALID elem type = %d", VAR_13);
  return -VAR_2;
 }


 VAR_22 = VAR_24->p_size.val;
 VAR_23 = FUNC_3(VAR_22) / VAR_21;
 VAR_16 = VAR_25->start_line + (VAR_14 / VAR_23);
 VAR_17 = VAR_25->start_line + (VAR_26 / VAR_23);
 if (((VAR_26 + 1) / VAR_23) != (VAR_26 / VAR_23))
  VAR_17--;

 VAR_18 = VAR_16 - VAR_12->p_cxt_mngr->pf_start_line;
 VAR_19 = VAR_17 - VAR_12->p_cxt_mngr->pf_start_line;

 VAR_27 = FUNC_7(VAR_12);
 if (!VAR_27) {
  FUNC_2(VAR_12,
     "QED_TIME_OUT on ptt acquire - dynamic allocation");
  return -VAR_1;
 }

 for (VAR_29 = VAR_18; VAR_29 < VAR_19; VAR_29++) {
  if (!VAR_12->p_cxt_mngr->ilt_shadow[VAR_29].p_virt)
   continue;

  FUNC_5(&VAR_12->cdev->pdev->dev,
      VAR_12->p_cxt_mngr->ilt_shadow[VAR_29].size,
      VAR_12->p_cxt_mngr->ilt_shadow[VAR_29].p_virt,
      VAR_12->p_cxt_mngr->ilt_shadow[VAR_29].p_phys);

  VAR_12->p_cxt_mngr->ilt_shadow[VAR_29].p_virt = ((void*)0);
  VAR_12->p_cxt_mngr->ilt_shadow[VAR_29].p_phys = 0;
  VAR_12->p_cxt_mngr->ilt_shadow[VAR_29].size = 0;


  VAR_20 = VAR_8 +
      ((VAR_16++) * VAR_7 *
       VAR_6);




  FUNC_6(VAR_12, VAR_27,
      (u64) (uintptr_t) &VAR_28,
      VAR_20,
      sizeof(VAR_28) / sizeof(u32),
      ((void*)0));
 }

 FUNC_8(VAR_12, VAR_27);

 return 0;
}
