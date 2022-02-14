
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_8__ {void* lo; scalar_t__ hi; } ;
struct rdma_register_tid_ramrod_data {TYPE_4__ dif_error_addr; scalar_t__ flags2; TYPE_4__ pbl_base; TYPE_4__ va; int length_lo; scalar_t__ length_hi; int pd; int key; void* itid; scalar_t__ flags1; scalar_t__ flags; } ;
struct TYPE_7__ {struct rdma_register_tid_ramrod_data rdma_register_tid; } ;
struct qed_spq_entry {TYPE_3__ ramrod; } ;
struct qed_sp_init_data {int comp_mode; int opaque_fid; } ;
struct qed_rdma_register_tid_in_params {int itid; int pbl_two_level; int zbva; int phy_mr; int tid_type; int dma_mr; int page_size_log; int remote_read; int remote_write; int remote_atomic; int local_write; int local_read; int mw_bind; int pbl_page_size_log; int length; scalar_t__ fbo; int dif_error_addr; scalar_t__ dif_enabled; int pbl_ptr; int vaddr; int pd; int key; } ;
struct TYPE_5__ {int opaque_fid; } ;
struct qed_hwfn {TYPE_2__* p_rdma_info; TYPE_1__ hw_info; } ;
typedef int init_data ;
typedef enum rdma_tid_type { ____Placeholder_rdma_tid_type } rdma_tid_type ;
struct TYPE_6__ {scalar_t__ last_tid; int proto; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__,int ) ;
 int FUNC_2 (struct qed_hwfn*,char*,scalar_t__) ;
 int FUNC_3 (struct qed_hwfn*,int ,char*,int) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_4 (scalar_t__,int ,int) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct qed_sp_init_data*,int ,int) ;
 int FUNC_8 (struct qed_hwfn*,struct qed_spq_entry*) ;
 int FUNC_9 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_10 (struct qed_hwfn*,struct qed_spq_entry*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_11(void *VAR_22,
        struct qed_rdma_register_tid_in_params *VAR_23)
{
 struct qed_hwfn *VAR_24 = (struct qed_hwfn *)VAR_22;
 struct rdma_register_tid_ramrod_data *VAR_25;
 struct qed_sp_init_data VAR_26;
 struct qed_spq_entry *VAR_27;
 enum rdma_tid_type VAR_28;
 u8 VAR_29;
 int VAR_30;

 FUNC_3(VAR_24, VAR_1, "itid = %08x\n", VAR_23->itid);


 FUNC_7(&VAR_26, 0, sizeof(VAR_26));
 VAR_26.opaque_fid = VAR_24->hw_info.opaque_fid;
 VAR_26.comp_mode = VAR_2;

 VAR_30 = FUNC_9(VAR_24, &VAR_27, VAR_3,
     VAR_24->p_rdma_info->proto, &VAR_26);
 if (VAR_30) {
  FUNC_3(VAR_24, VAR_1, "rc = %d\n", VAR_30);
  return VAR_30;
 }

 if (VAR_24->p_rdma_info->last_tid < VAR_23->itid)
  VAR_24->p_rdma_info->last_tid = VAR_23->itid;

 VAR_25 = &VAR_27->ramrod.rdma_register_tid;

 VAR_25->flags = 0;
 FUNC_4(VAR_25->flags,
    VAR_16,
    VAR_23->pbl_two_level);

 FUNC_4(VAR_25->flags,
    VAR_17, VAR_23->zbva);

 FUNC_4(VAR_25->flags,
    VAR_11, VAR_23->phy_mr);


 if (!(VAR_23->tid_type == 130) && !(VAR_23->dma_mr))
  FUNC_4(VAR_25->flags,
     VAR_9,
     VAR_23->page_size_log - 12);

 FUNC_4(VAR_25->flags,
    VAR_13,
    VAR_23->remote_read);

 FUNC_4(VAR_25->flags,
    VAR_14,
    VAR_23->remote_write);

 FUNC_4(VAR_25->flags,
    VAR_12,
    VAR_23->remote_atomic);

 FUNC_4(VAR_25->flags,
    VAR_8,
    VAR_23->local_write);

 FUNC_4(VAR_25->flags,
    VAR_7, VAR_23->local_read);

 FUNC_4(VAR_25->flags,
    VAR_6,
    VAR_23->mw_bind);

 FUNC_4(VAR_25->flags1,
    VAR_10,
    VAR_23->pbl_page_size_log - 12);

 FUNC_4(VAR_25->flags2,
    VAR_5, VAR_23->dma_mr);

 switch (VAR_23->tid_type) {
 case 128:
  VAR_28 = VAR_21;
  break;
 case 130:
  VAR_28 = VAR_19;
  break;
 case 129:
  VAR_28 = VAR_20;
  break;
 default:
  VAR_30 = -VAR_0;
  FUNC_3(VAR_24, VAR_1, "rc = %d\n", VAR_30);
  FUNC_8(VAR_24, VAR_27);
  return VAR_30;
 }
 FUNC_4(VAR_25->flags1,
    VAR_15, VAR_28);

 VAR_25->itid = FUNC_6(VAR_23->itid);
 VAR_25->key = VAR_23->key;
 VAR_25->pd = FUNC_5(VAR_23->pd);
 VAR_25->length_hi = (u8)(VAR_23->length >> 32);
 VAR_25->length_lo = FUNC_0(VAR_23->length);
 if (VAR_23->zbva) {



  VAR_25->va.hi = 0;
  VAR_25->va.lo = FUNC_6(VAR_23->fbo);
 } else {
  FUNC_1(VAR_25->va, VAR_23->vaddr);
 }
 FUNC_1(VAR_25->pbl_base, VAR_23->pbl_ptr);


 if (VAR_23->dif_enabled) {
  FUNC_4(VAR_25->flags2,
     VAR_4, 1);
  FUNC_1(VAR_25->dif_error_addr,
          VAR_23->dif_error_addr);
 }

 VAR_30 = FUNC_10(VAR_24, VAR_27, &VAR_29);
 if (VAR_30)
  return VAR_30;

 if (VAR_29 != VAR_18) {
  FUNC_2(VAR_24, "fw_return_code = %d\n", VAR_29);
  return -VAR_0;
 }

 FUNC_3(VAR_24, VAR_1, "Register TID, rc = %d\n", VAR_30);
 return VAR_30;
}
