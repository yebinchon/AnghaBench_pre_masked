
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sas_ha_struct {struct hisi_hba* lldd_ha; } ;
struct hisi_hba {TYPE_1__* hw; } ;
struct asd_sas_phy {int id; struct sas_ha_struct* ha; } ;
typedef enum phy_func { ____Placeholder_phy_func } phy_func ;
struct TYPE_2__ {int (* get_events ) (struct hisi_hba*,int) ;int (* phy_hard_reset ) (struct hisi_hba*,int) ;} ;


 int VAR_0 ;






 int FUNC_0 (struct hisi_hba*,int,int) ;
 int FUNC_1 (struct hisi_hba*,int,void*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct hisi_hba*,int) ;
 int FUNC_4 (struct hisi_hba*,int) ;

__attribute__((used)) static int FUNC_5(struct asd_sas_phy *VAR_1, enum phy_func VAR_2,
    void *VAR_3)
{
 struct sas_ha_struct *VAR_4 = VAR_1->ha;
 struct hisi_hba *VAR_5 = VAR_4->lldd_ha;
 int VAR_6 = VAR_1->id;

 switch (VAR_2) {
 case 131:
  VAR_5->hw->phy_hard_reset(VAR_5, VAR_6);
  break;

 case 130:
  FUNC_0(VAR_5, VAR_6, 0);
  FUNC_2(100);
  FUNC_0(VAR_5, VAR_6, 1);
  break;

 case 133:
  FUNC_0(VAR_5, VAR_6, 0);
  break;

 case 128:
  return FUNC_1(VAR_5, VAR_6, VAR_3);
 case 132:
  if (VAR_5->hw->get_events) {
   VAR_5->hw->get_events(VAR_5, VAR_6);
   break;
  }

 case 129:
 default:
  return -VAR_0;
 }
 return 0;
}
