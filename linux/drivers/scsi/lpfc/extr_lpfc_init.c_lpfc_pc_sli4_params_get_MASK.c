
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int uint32_t ;
struct lpfc_pc_sli4_params {scalar_t__ sge_supp_len; void* sgl_pp_align; void* sgl_pages_max; void* hdr_pp_align; void* hdr_size; void* hdr_pages_max; void* rqe_size; void* rq_pages_max; void* wqe_size; void* wq_pages_max; void* mq_elem_cnt; void* mqe_size; void* mq_pages_max; void* cqe_size; void* cq_pages_max; void* eqe_size; void* eq_pages_max; void* loopbk_scope; void* rq_db_window; void* if_page_sz; int proto_types; void* featurelevel_2; void* featurelevel_1; void* sli_family; void* sli_rev; void* if_type; } ;
struct TYPE_11__ {scalar_t__ sge_supp_len; int word3; } ;
struct TYPE_14__ {TYPE_10__ sli4_params; } ;
struct lpfc_mqe {TYPE_3__ un; } ;
struct TYPE_13__ {struct lpfc_pc_sli4_params pc_sli4_params; int intr_enable; } ;
struct lpfc_hba {TYPE_2__ sli4_hba; } ;
struct TYPE_12__ {struct lpfc_mqe mqe; } ;
struct TYPE_15__ {TYPE_1__ u; } ;
typedef TYPE_4__ LPFC_MBOXQ_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,TYPE_10__*) ;
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
 int FUNC_1 (struct lpfc_hba*,TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (struct lpfc_hba*,TYPE_4__*,int ) ;
 int FUNC_4 (struct lpfc_hba*,TYPE_4__*,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_24 ;
 int VAR_25 ;

int
FUNC_6(struct lpfc_hba *VAR_26, LPFC_MBOXQ_t *VAR_27)
{
 int VAR_28;
 struct lpfc_mqe *VAR_29;
 struct lpfc_pc_sli4_params *VAR_30;
 uint32_t VAR_31;

 VAR_28 = 0;
 VAR_29 = &VAR_27->u.mqe;


 FUNC_2(VAR_27);
 if (!VAR_26->sli4_hba.intr_enable)
  VAR_28 = FUNC_3(VAR_26, VAR_27, VAR_1);
 else {
  VAR_31 = FUNC_1(VAR_26, VAR_27);
  VAR_28 = FUNC_4(VAR_26, VAR_27, VAR_31);
 }

 if (FUNC_5(VAR_28))
  return 1;

 VAR_30 = &VAR_26->sli4_hba.pc_sli4_params;
 VAR_30->if_type = FUNC_0(VAR_12, &VAR_29->un.sli4_params);
 VAR_30->sli_rev = FUNC_0(VAR_23, &VAR_29->un.sli4_params);
 VAR_30->sli_family = FUNC_0(VAR_22, &VAR_29->un.sli4_params);
 VAR_30->featurelevel_1 = FUNC_0(VAR_6,
          &VAR_29->un.sli4_params);
 VAR_30->featurelevel_2 = FUNC_0(VAR_7,
          &VAR_29->un.sli4_params);
 VAR_30->proto_types = VAR_29->un.sli4_params.word3;
 VAR_30->sge_supp_len = VAR_29->un.sli4_params.sge_supp_len;
 VAR_30->if_page_sz = FUNC_0(VAR_11, &VAR_29->un.sli4_params);
 VAR_30->rq_db_window = FUNC_0(VAR_17, &VAR_29->un.sli4_params);
 VAR_30->loopbk_scope = FUNC_0(VAR_13, &VAR_29->un.sli4_params);
 VAR_30->eq_pages_max = FUNC_0(VAR_4, &VAR_29->un.sli4_params);
 VAR_30->eqe_size = FUNC_0(VAR_5, &VAR_29->un.sli4_params);
 VAR_30->cq_pages_max = FUNC_0(VAR_2, &VAR_29->un.sli4_params);
 VAR_30->cqe_size = FUNC_0(VAR_3, &VAR_29->un.sli4_params);
 VAR_30->mq_pages_max = FUNC_0(VAR_15, &VAR_29->un.sli4_params);
 VAR_30->mqe_size = FUNC_0(VAR_16, &VAR_29->un.sli4_params);
 VAR_30->mq_elem_cnt = FUNC_0(VAR_14, &VAR_29->un.sli4_params);
 VAR_30->wq_pages_max = FUNC_0(VAR_24, &VAR_29->un.sli4_params);
 VAR_30->wqe_size = FUNC_0(VAR_25, &VAR_29->un.sli4_params);
 VAR_30->rq_pages_max = FUNC_0(VAR_18, &VAR_29->un.sli4_params);
 VAR_30->rqe_size = FUNC_0(VAR_19, &VAR_29->un.sli4_params);
 VAR_30->hdr_pages_max = FUNC_0(VAR_8, &VAR_29->un.sli4_params);
 VAR_30->hdr_size = FUNC_0(VAR_10, &VAR_29->un.sli4_params);
 VAR_30->hdr_pp_align = FUNC_0(VAR_9, &VAR_29->un.sli4_params);
 VAR_30->sgl_pages_max = FUNC_0(VAR_20, &VAR_29->un.sli4_params);
 VAR_30->sgl_pp_align = FUNC_0(VAR_21, &VAR_29->un.sli4_params);


 if (VAR_30->sge_supp_len > VAR_0)
  VAR_30->sge_supp_len = VAR_0;

 return VAR_28;
}
