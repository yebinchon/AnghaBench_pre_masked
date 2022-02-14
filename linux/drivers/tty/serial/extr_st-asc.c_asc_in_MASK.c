
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct uart_port {scalar_t__ membase; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_2(struct uart_port *VAR_0, u32 VAR_1)
{



 return FUNC_0(VAR_0->membase + VAR_1);

}
