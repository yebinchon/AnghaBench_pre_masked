
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hisi_sas_phy {int * works; struct hisi_hba* hisi_hba; } ;
struct hisi_hba {int wq; } ;
typedef enum hisi_sas_phy_event { ____Placeholder_hisi_sas_phy_event } hisi_sas_phy_event ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;

bool FUNC_2(struct hisi_sas_phy *VAR_1,
    enum hisi_sas_phy_event VAR_2)
{
 struct hisi_hba *VAR_3 = VAR_1->hisi_hba;

 if (FUNC_0(VAR_2 >= VAR_0))
  return 0;

 return FUNC_1(VAR_3->wq, &VAR_1->works[VAR_2]);
}
