
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hisi_sas_cq {int tasklet; } ;
struct hisi_hba {int cq_nvecs; struct hisi_sas_cq* cq; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct hisi_hba *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->cq_nvecs; VAR_1++) {
  struct hisi_sas_cq *VAR_2 = &VAR_0->cq[VAR_1];

  FUNC_0(&VAR_2->tasklet);
 }
}
