
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hisi_sas_phy {int timer; } ;
struct hisi_hba {int n_phy; scalar_t__ wq; struct hisi_sas_phy* phy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(struct hisi_hba *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->n_phy; VAR_1++) {
  struct hisi_sas_phy *VAR_2 = &VAR_0->phy[VAR_1];

  FUNC_0(&VAR_2->timer);
 }

 if (VAR_0->wq)
  FUNC_1(VAR_0->wq);
}
