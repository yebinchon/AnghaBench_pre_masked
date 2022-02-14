
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sas_phy {void* minimum_linkrate; void* maximum_linkrate; void* minimum_linkrate_hw; void* maximum_linkrate_hw; void* negotiated_linkrate; } ;
struct TYPE_2__ {void* linkrate; struct sas_phy* phy; } ;
struct pm8001_phy {TYPE_1__ sas_phy; } ;






 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;

void FUNC_0(struct pm8001_phy *VAR_4, u8 VAR_5)
{
 struct sas_phy *VAR_6 = VAR_4->sas_phy.phy;

 switch (VAR_5) {
 case 131:
  VAR_4->sas_phy.linkrate = VAR_0;
  VAR_4->sas_phy.phy->negotiated_linkrate = VAR_0;
  break;
 case 128:
  VAR_4->sas_phy.linkrate = VAR_3;
  VAR_4->sas_phy.phy->negotiated_linkrate = VAR_3;
  break;
 case 129:
  VAR_4->sas_phy.linkrate = VAR_2;
  VAR_4->sas_phy.phy->negotiated_linkrate = VAR_2;
  break;
 case 130:
  VAR_4->sas_phy.linkrate = VAR_1;
  VAR_4->sas_phy.phy->negotiated_linkrate = VAR_1;
  break;
 }
 VAR_6->negotiated_linkrate = VAR_4->sas_phy.linkrate;
 VAR_6->maximum_linkrate_hw = VAR_3;
 VAR_6->minimum_linkrate_hw = VAR_1;
 VAR_6->maximum_linkrate = VAR_3;
 VAR_6->minimum_linkrate = VAR_1;
}
