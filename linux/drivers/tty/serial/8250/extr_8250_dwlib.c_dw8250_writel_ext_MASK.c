
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {scalar_t__ iotype; scalar_t__ membase; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct uart_port *VAR_1, int VAR_2, u32 VAR_3)
{
 if (VAR_1->iotype == VAR_0)
  FUNC_0(VAR_3, VAR_1->membase + VAR_2);
 else
  FUNC_1(VAR_3, VAR_1->membase + VAR_2);
}
