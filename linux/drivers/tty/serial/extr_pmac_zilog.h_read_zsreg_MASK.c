
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct uart_pmac_port {int control_reg; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static inline u8 FUNC_2(struct uart_pmac_port *VAR_0, u8 VAR_1)
{
 if (VAR_1 != 0)
  FUNC_1(VAR_1, VAR_0->control_reg);
 return FUNC_0(VAR_0->control_reg);
}
