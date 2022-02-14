
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_hba {int dummy; } ;
struct lpfc_cq_event {int cqe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lpfc_hba*,int ,int ,char*) ;
 struct lpfc_cq_event* FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (int *,void*,int) ;

inline struct lpfc_cq_event *
FUNC_3(struct lpfc_hba *VAR_2, void *VAR_3, int VAR_4)
{
 struct lpfc_cq_event *VAR_5;


 VAR_5 = FUNC_1(VAR_2);
 if (!VAR_5) {
  FUNC_0(VAR_2, VAR_0, VAR_1,
    "0602 Failed to alloc CQ_EVENT entry\n");
  return ((void*)0);
 }


 FUNC_2(&VAR_5->cqe, VAR_3, VAR_4);
 return VAR_5;
}
