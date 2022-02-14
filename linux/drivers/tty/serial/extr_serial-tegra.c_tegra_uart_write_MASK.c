
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long regshift; scalar_t__ membase; } ;
struct tegra_uart_port {TYPE_1__ uport; } ;


 int FUNC_0 (unsigned int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct tegra_uart_port *VAR_0, unsigned VAR_1,
 unsigned long VAR_2)
{
 FUNC_0(VAR_1, VAR_0->uport.membase + (VAR_2 << VAR_0->uport.regshift));
}
