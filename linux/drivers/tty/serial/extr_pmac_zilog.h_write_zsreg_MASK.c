
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct uart_pmac_port {int control_reg; } ;


 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static inline void FUNC_1(struct uart_pmac_port *VAR_0, u8 VAR_1, u8 VAR_2)
{
 if (VAR_1 != 0)
  FUNC_0(VAR_1, VAR_0->control_reg);
 FUNC_0(VAR_2, VAR_0->control_reg);
}
