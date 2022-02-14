
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct uart_port {int iotype; scalar_t__ membase; } ;




 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct uart_port *VAR_0, u32 VAR_1,
      u32 VAR_2)
{
 switch (VAR_0->iotype) {
 case 129:
  FUNC_1(VAR_1, VAR_0->membase + VAR_2);
  break;
 case 128:
  FUNC_0(VAR_1, VAR_0->membase + VAR_2);
  break;
 }
}
