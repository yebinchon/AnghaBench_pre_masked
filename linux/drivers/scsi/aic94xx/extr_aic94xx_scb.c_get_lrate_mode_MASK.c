
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sas_phy {int minimum_linkrate; int maximum_linkrate; void* minimum_linkrate_hw; void* maximum_linkrate_hw; void* negotiated_linkrate; } ;
struct TYPE_4__ {int oob_mode; void* linkrate; struct sas_phy* phy; } ;
struct asd_phy {TYPE_2__ sas_phy; TYPE_1__* phy_desc; } ;
struct TYPE_3__ {int min_sas_lrate; int max_sas_lrate; } ;





 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_0(struct asd_phy *VAR_7, u8 VAR_8)
{
 struct sas_phy *VAR_9 = VAR_7->sas_phy.phy;

 switch (VAR_8 & 7) {
 case 128:

  VAR_7->sas_phy.linkrate = VAR_2;
  VAR_7->sas_phy.phy->negotiated_linkrate = VAR_2;
  break;
 case 129:
  VAR_7->sas_phy.linkrate = VAR_1;
  VAR_7->sas_phy.phy->negotiated_linkrate = VAR_1;
  break;
 case 130:
  VAR_7->sas_phy.linkrate = VAR_0;
  VAR_7->sas_phy.phy->negotiated_linkrate = VAR_0;
  break;
 }
 VAR_9->negotiated_linkrate = VAR_7->sas_phy.linkrate;
 VAR_9->maximum_linkrate_hw = VAR_1;
 VAR_9->minimum_linkrate_hw = VAR_0;
 VAR_9->maximum_linkrate = VAR_7->phy_desc->max_sas_lrate;
 VAR_9->minimum_linkrate = VAR_7->phy_desc->min_sas_lrate;

 if (VAR_8 & VAR_3)
  VAR_7->sas_phy.oob_mode = VAR_4;
 else if (VAR_8 & VAR_5)
  VAR_7->sas_phy.oob_mode = VAR_6;
}
