
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isci_phy {int max_negotiated_speed; } ;
typedef enum sas_linkrate { ____Placeholder_sas_linkrate } sas_linkrate ;



enum sas_linkrate FUNC_0(struct isci_phy *VAR_0)
{
 return VAR_0->max_negotiated_speed;
}
