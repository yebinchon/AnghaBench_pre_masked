
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct uart_port {scalar_t__ membase; } ;
struct pic32_sport {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 struct uart_port* FUNC_1 (struct pic32_sport*) ;

__attribute__((used)) static inline u32 FUNC_2(struct pic32_sport *VAR_0, u32 VAR_1)
{
 struct uart_port *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2->membase + VAR_1);
}
