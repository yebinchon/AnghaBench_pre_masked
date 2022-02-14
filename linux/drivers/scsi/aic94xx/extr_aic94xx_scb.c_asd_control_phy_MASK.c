
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sas_phy_linkrates {int maximum_linkrate; int minimum_linkrate; } ;
struct asd_sas_phy {size_t id; TYPE_1__* ha; } ;
struct asd_phy_desc {int max_sata_lrate; int max_sas_lrate; int min_sata_lrate; int min_sas_lrate; } ;
struct asd_ha_struct {TYPE_2__* phys; } ;
struct asd_ascb {int dummy; } ;
typedef enum phy_func { ____Placeholder_phy_func } phy_func ;
struct TYPE_4__ {struct asd_phy_desc* phy_desc; } ;
struct TYPE_3__ {struct asd_ha_struct* lldd_ha; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;

 struct asd_ascb* FUNC_0 (struct asd_ha_struct*,int*,int ) ;
 int FUNC_1 (struct asd_ascb*) ;
 int FUNC_2 (struct asd_ascb*,size_t,int ) ;
 int FUNC_3 (struct asd_ha_struct*,struct asd_ascb*,int) ;
 int * VAR_4 ;

int FUNC_4(struct asd_sas_phy *VAR_5, enum phy_func VAR_6, void *VAR_7)
{
 struct asd_ha_struct *VAR_8 = VAR_5->ha->lldd_ha;
 struct asd_phy_desc *VAR_9 = VAR_8->phys[VAR_5->id].phy_desc;
 struct asd_ascb *VAR_10;
 struct sas_phy_linkrates *VAR_11;
 int VAR_12 = 1;

 switch (VAR_6) {
 case 130:
 case 129:
  return -VAR_1;
 case 128:
  VAR_11 = VAR_7;
  if (VAR_11->minimum_linkrate) {
   VAR_9->min_sas_lrate = VAR_11->minimum_linkrate;
   VAR_9->min_sata_lrate = VAR_11->minimum_linkrate;
  }
  if (VAR_11->maximum_linkrate) {
   VAR_9->max_sas_lrate = VAR_11->maximum_linkrate;
   VAR_9->max_sata_lrate = VAR_11->maximum_linkrate;
  }
  VAR_6 = VAR_3;
  break;
 default:
  break;
 }

 VAR_10 = FUNC_0(VAR_8, &VAR_12, VAR_2);
 if (!VAR_10)
  return -VAR_0;

 FUNC_2(VAR_10, VAR_5->id, VAR_4[VAR_6]);
 VAR_12 = FUNC_3(VAR_8, VAR_10 , 1);
 if (VAR_12)
  FUNC_1(VAR_10);

 return VAR_12;
}
