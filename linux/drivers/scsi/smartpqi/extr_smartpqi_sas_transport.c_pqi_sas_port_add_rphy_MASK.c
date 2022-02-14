
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sas_identify {void* target_port_protocols; void* initiator_port_protocols; int sas_address; } ;
struct sas_rphy {struct sas_identify identify; } ;
struct pqi_sas_port {TYPE_1__* device; int sas_address; } ;
struct TYPE_2__ {scalar_t__ is_expander_smp_device; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct sas_rphy*) ;

__attribute__((used)) static int FUNC_1(struct pqi_sas_port *VAR_2,
 struct sas_rphy *VAR_3)
{
 struct sas_identify *VAR_4;

 VAR_4 = &VAR_3->identify;
 VAR_4->sas_address = VAR_2->sas_address;

 if (VAR_2->device &&
  VAR_2->device->is_expander_smp_device) {
  VAR_4->initiator_port_protocols = VAR_0;
  VAR_4->target_port_protocols = VAR_0;
 } else {
  VAR_4->initiator_port_protocols = VAR_1;
  VAR_4->target_port_protocols = VAR_1;
 }

 return FUNC_0(VAR_3);
}
