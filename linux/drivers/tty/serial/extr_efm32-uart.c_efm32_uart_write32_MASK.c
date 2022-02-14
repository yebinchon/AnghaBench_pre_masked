
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {unsigned int membase; } ;
struct efm32_uart_port {TYPE_1__ port; } ;


 int FUNC_0 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct efm32_uart_port *VAR_0,
  u32 VAR_1, unsigned VAR_2)
{
 FUNC_0(VAR_1, VAR_0->port.membase + VAR_2);
}
