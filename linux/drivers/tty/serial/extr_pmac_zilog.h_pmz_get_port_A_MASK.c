
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_pmac_port {int flags; struct uart_pmac_port* mate; } ;


 int VAR_0 ;

__attribute__((used)) static inline struct uart_pmac_port *FUNC_0(struct uart_pmac_port *VAR_1)
{
 if (VAR_1->flags & VAR_0)
  return VAR_1;
 return VAR_1->mate;
}
