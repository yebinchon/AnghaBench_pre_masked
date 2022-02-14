
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct asd_sas_phy {TYPE_1__* phy; } ;
struct hisi_sas_phy {struct asd_sas_phy sas_phy; } ;
struct hisi_hba {int n_phy; struct hisi_sas_phy* phy; } ;
struct TYPE_2__ {int enabled; } ;


 int FUNC_0 (struct hisi_hba*,int,int) ;

__attribute__((used)) static void FUNC_1(struct hisi_hba *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->n_phy; VAR_1++) {
  struct hisi_sas_phy *VAR_2 = &VAR_0->phy[VAR_1];
  struct asd_sas_phy *VAR_3 = &VAR_2->sas_phy;

  if (!VAR_3->phy->enabled)
   continue;

  FUNC_0(VAR_0, VAR_1, 1);
 }
}
