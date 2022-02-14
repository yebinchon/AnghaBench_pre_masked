
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sas_phy {int negotiated_linkrate; } ;
struct asd_sas_phy {struct sas_phy* phy; } ;
struct hisi_sas_phy {int enable; int lock; struct asd_sas_phy sas_phy; } ;
struct hisi_hba {TYPE_1__* hw; struct hisi_sas_phy* phy; } ;
struct TYPE_2__ {int (* phy_disable ) (struct hisi_hba*,int) ;int (* phy_start ) (struct hisi_hba*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct hisi_hba*,int) ;
 int FUNC_3 (struct hisi_hba*,int) ;

void FUNC_4(struct hisi_hba *VAR_2, int VAR_3, int VAR_4)
{
 struct hisi_sas_phy *VAR_5 = &VAR_2->phy[VAR_3];
 struct asd_sas_phy *VAR_6 = &VAR_5->sas_phy;
 struct sas_phy *VAR_7 = VAR_6->phy;
 unsigned long VAR_8;

 FUNC_0(&VAR_5->lock, VAR_8);

 if (VAR_4) {

  if (!VAR_5->enable)
   VAR_7->negotiated_linkrate = VAR_0;
  VAR_2->hw->phy_start(VAR_2, VAR_3);
 } else {
  VAR_7->negotiated_linkrate = VAR_1;
  VAR_2->hw->phy_disable(VAR_2, VAR_3);
 }
 VAR_5->enable = VAR_4;
 FUNC_1(&VAR_5->lock, VAR_8);
}
