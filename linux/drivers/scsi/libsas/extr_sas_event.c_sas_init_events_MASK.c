
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_ha_struct {int notify_phy_event; int notify_port_event; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct sas_ha_struct *VAR_2)
{
 VAR_2->notify_port_event = VAR_1;
 VAR_2->notify_phy_event = VAR_0;

 return 0;
}
