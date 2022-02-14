
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_identify {void* target_port_protocols; void* initiator_port_protocols; int sas_address; } ;
struct sas_rphy {struct sas_identify identify; } ;
struct hpsa_sas_port {int sas_address; } ;


 void* VAR_0 ;
 int FUNC_0 (struct sas_rphy*) ;

__attribute__((used)) static int
 FUNC_1(struct hpsa_sas_port *VAR_1,
    struct sas_rphy *VAR_2)
{
 struct sas_identify *VAR_3;

 VAR_3 = &VAR_2->identify;
 VAR_3->sas_address = VAR_1->sas_address;
 VAR_3->initiator_port_protocols = VAR_0;
 VAR_3->target_port_protocols = VAR_0;

 return FUNC_0(VAR_2);
}
