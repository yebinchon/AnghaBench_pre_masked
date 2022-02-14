
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {int regshift; scalar_t__ membase; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_1(struct uart_port *VAR_0, int VAR_1)
{
 return FUNC_0(VAR_0->membase + (VAR_1 << VAR_0->regshift));
}
