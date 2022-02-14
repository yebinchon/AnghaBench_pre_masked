
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long regshift; scalar_t__ membase; } ;
struct tegra_uart_port {TYPE_1__ uport; } ;


 unsigned long FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline unsigned long FUNC_1(struct tegra_uart_port *VAR_0,
  unsigned long VAR_1)
{
 return FUNC_0(VAR_0->uport.membase + (VAR_1 << VAR_0->uport.regshift));
}
