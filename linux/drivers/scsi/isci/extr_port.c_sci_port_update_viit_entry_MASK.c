
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sci_sas_address {int high; int low; } ;
struct isci_port {int physical_port_index; TYPE_1__* viit_registers; } ;
struct TYPE_2__ {int status; int reserved; int initiator_sas_address_lo; int initiator_sas_address_hi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct isci_port*,struct sci_sas_address*) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void FUNC_2(struct isci_port *VAR_4)
{
 struct sci_sas_address VAR_5;

 FUNC_0(VAR_4, &VAR_5);

 FUNC_1(VAR_5.high,
  &VAR_4->viit_registers->initiator_sas_address_hi);
 FUNC_1(VAR_5.low,
  &VAR_4->viit_registers->initiator_sas_address_lo);


 FUNC_1(0, &VAR_4->viit_registers->reserved);


 FUNC_1(VAR_0 |
        VAR_2 |
        ((1 << VAR_4->physical_port_index) << VAR_1) |
        VAR_3,
        &VAR_4->viit_registers->status);
}
