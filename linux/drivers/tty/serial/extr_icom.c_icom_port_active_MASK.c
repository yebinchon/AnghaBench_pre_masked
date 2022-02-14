
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icom_port {int port; scalar_t__ int_reg; scalar_t__ global_reg; } ;
struct icom_adapter {scalar_t__ version; scalar_t__ base_addr; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct icom_port *VAR_1, struct icom_adapter *VAR_2, int VAR_3)
{
 if (VAR_2->version == VAR_0) {
  VAR_1->global_reg = VAR_2->base_addr + 0x4000;
  VAR_1->int_reg = VAR_2->base_addr +
      0x4004 + 2 - 2 * VAR_3;
 } else {
  VAR_1->global_reg = VAR_2->base_addr + 0x8000;
  if (VAR_1->port < 2)
   VAR_1->int_reg = VAR_2->base_addr +
       0x8004 + 2 - 2 * VAR_1->port;
  else
   VAR_1->int_reg = VAR_2->base_addr +
       0x8024 + 2 - 2 * (VAR_1->port - 2);
 }
}
