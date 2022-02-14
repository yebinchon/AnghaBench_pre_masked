
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {TYPE_2__* phba; } ;
struct lpfc_nodelist {int nlp_rpi; int nlp_DID; TYPE_1__* phba; struct lpfc_nodelist* active_rrqs_xri_bitmap; int nlp_usg_map; int kref; int nlp_flag; int nlp_listp; } ;
struct TYPE_5__ {scalar_t__ sli_rev; int active_rrq_pool; int nlp_mem_pool; } ;
struct TYPE_4__ {int cfg_rrq_xri_bitmap_sz; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct lpfc_vport*,int ,char*,int ,int ,int ) ;
 int FUNC_3 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_4 (struct lpfc_vport*,int ,int ,char*,int,int ,int ,int ,int ,struct lpfc_nodelist*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int) ;
 void* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct lpfc_nodelist*,int ,int) ;

struct lpfc_nodelist *
FUNC_9(struct lpfc_vport *VAR_6, uint32_t VAR_7)
{
 struct lpfc_nodelist *VAR_8;
 int VAR_9 = VAR_4;

 if (VAR_6->phba->sli_rev == VAR_5) {
  VAR_9 = FUNC_5(VAR_6->phba);
  if (VAR_9 == VAR_4)
   return ((void*)0);
 }

 VAR_8 = FUNC_7(VAR_6->phba->nlp_mem_pool, VAR_0);
 if (!VAR_8) {
  if (VAR_6->phba->sli_rev == VAR_5)
   FUNC_6(VAR_6->phba, VAR_9);
  return ((void*)0);
 }

 FUNC_8(VAR_8, 0, sizeof (struct lpfc_nodelist));

 FUNC_3(VAR_6, VAR_8, VAR_7);
 FUNC_0(&VAR_8->nlp_listp);
 if (VAR_6->phba->sli_rev == VAR_5) {
  VAR_8->nlp_rpi = VAR_9;
  FUNC_4(VAR_6, VAR_1, VAR_2,
     "0007 rpi:%x DID:%x flg:%x refcnt:%d "
     "map:%x x%px\n", VAR_8->nlp_rpi, VAR_8->nlp_DID,
     VAR_8->nlp_flag,
     FUNC_1(&VAR_8->kref),
     VAR_8->nlp_usg_map, VAR_8);

  VAR_8->active_rrqs_xri_bitmap =
    FUNC_7(VAR_6->phba->active_rrq_pool,
           VAR_0);
  if (VAR_8->active_rrqs_xri_bitmap)
   FUNC_8(VAR_8->active_rrqs_xri_bitmap, 0,
          VAR_8->phba->cfg_rrq_xri_bitmap_sz);
 }



 FUNC_2(VAR_6, VAR_3,
  "node init:       did:x%x",
  VAR_8->nlp_DID, 0, 0);

 return VAR_8;
}
