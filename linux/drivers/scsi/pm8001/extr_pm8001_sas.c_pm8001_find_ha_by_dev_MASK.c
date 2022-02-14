
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sas_ha_struct {struct pm8001_hba_info* lldd_ha; } ;
struct pm8001_hba_info {int dummy; } ;
struct domain_device {TYPE_1__* port; } ;
struct TYPE_2__ {struct sas_ha_struct* ha; } ;



__attribute__((used)) static
struct pm8001_hba_info *FUNC_0(struct domain_device *VAR_0)
{
 struct sas_ha_struct *VAR_1 = VAR_0->port->ha;
 struct pm8001_hba_info *VAR_2 = VAR_1->lldd_ha;
 return VAR_2;
}
