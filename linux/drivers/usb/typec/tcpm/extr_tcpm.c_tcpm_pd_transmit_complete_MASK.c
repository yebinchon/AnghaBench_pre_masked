
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpm_port {int tx_status; int tx_complete; } ;
typedef enum tcpm_transmit_status { ____Placeholder_tcpm_transmit_status } tcpm_transmit_status ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct tcpm_port*,char*,int) ;

void FUNC_2(struct tcpm_port *VAR_0,
          enum tcpm_transmit_status VAR_1)
{
 FUNC_1(VAR_0, "PD TX complete, status: %u", VAR_1);
 VAR_0->tx_status = VAR_1;
 FUNC_0(&VAR_0->tx_complete);
}
