
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int shost; } ;
struct sas_ha_struct {int num_phys; TYPE_2__ core; struct asd_sas_phy** sas_phy; int eh_wait_q; int dev; } ;
struct asd_sas_phy {TYPE_1__* phy; scalar_t__ suspended; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,char*) ;
 int FUNC_1 (int *,char*) ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 (struct sas_ha_struct*) ;
 int FUNC_4 (struct sas_ha_struct*) ;
 int FUNC_5 (struct asd_sas_phy*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int,unsigned long const) ;

void FUNC_8(struct sas_ha_struct *VAR_1)
{
 const unsigned long VAR_2 = FUNC_2(25000);
 int VAR_3;







 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3)
  FUNC_0(VAR_1->dev, "waiting up to 25 seconds for %d phy%s to resume\n",
    VAR_3, VAR_3 > 1 ? "s" : "");
 FUNC_7(VAR_1->eh_wait_q, FUNC_3(VAR_1) == 0, VAR_2);
 for (VAR_3 = 0; VAR_3 < VAR_1->num_phys; VAR_3++) {
  struct asd_sas_phy *VAR_4 = VAR_1->sas_phy[VAR_3];

  if (VAR_4->suspended) {
   FUNC_1(&VAR_4->phy->dev, "resume timeout\n");
   FUNC_5(VAR_4, VAR_0);
  }
 }




 FUNC_6(VAR_1->core.shost);
 FUNC_4(VAR_1);
}
