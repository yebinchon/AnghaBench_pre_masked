
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct uart_port {scalar_t__ membase; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_1(struct uart_port *VAR_2)
{
 u32 VAR_3;
 u16 VAR_4;

 VAR_3 = FUNC_0(VAR_2->membase + VAR_0);
 VAR_4 = (VAR_3 >> 16) & 0x3ff;

 if (VAR_4 == 0)
  return VAR_1;
 else
  return 0;
}
