
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sas_phy_linkrates {scalar_t__ minimum_linkrate; scalar_t__ maximum_linkrate; } ;
struct asd_sas_phy {TYPE_1__* phy; } ;
struct hisi_sas_phy {struct asd_sas_phy sas_phy; } ;
struct hisi_hba {TYPE_2__* hw; struct hisi_sas_phy* phy; } ;
typedef enum sas_linkrate { ____Placeholder_sas_linkrate } sas_linkrate ;
struct TYPE_4__ {int (* phy_set_linkrate ) (struct hisi_hba*,int,struct sas_phy_linkrates*) ;} ;
struct TYPE_3__ {int maximum_linkrate; int minimum_linkrate; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct hisi_hba*,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct hisi_hba*,int,struct sas_phy_linkrates*) ;

__attribute__((used)) static int FUNC_3(struct hisi_hba *VAR_3, int VAR_4,
   struct sas_phy_linkrates *VAR_5)
{
 struct sas_phy_linkrates VAR_6;

 struct hisi_sas_phy *VAR_7 = &VAR_3->phy[VAR_4];
 struct asd_sas_phy *VAR_8 = &VAR_7->sas_phy;
 enum sas_linkrate VAR_9, VAR_10;

 if (VAR_5->minimum_linkrate > VAR_1)
  return -VAR_0;

 if (VAR_5->maximum_linkrate == VAR_2) {
  VAR_10 = VAR_8->phy->maximum_linkrate;
  VAR_9 = VAR_5->minimum_linkrate;
 } else if (VAR_5->minimum_linkrate == VAR_2) {
  VAR_10 = VAR_5->maximum_linkrate;
  VAR_9 = VAR_8->phy->minimum_linkrate;
 } else
  return -VAR_0;

 VAR_6.maximum_linkrate = VAR_10;
 VAR_6.minimum_linkrate = VAR_9;

 VAR_8->phy->maximum_linkrate = VAR_10;
 VAR_8->phy->minimum_linkrate = VAR_9;

 FUNC_0(VAR_3, VAR_4, 0);
 FUNC_1(100);
 VAR_3->hw->phy_set_linkrate(VAR_3, VAR_4, &VAR_6);
 FUNC_0(VAR_3, VAR_4, 1);

 return 0;
}
