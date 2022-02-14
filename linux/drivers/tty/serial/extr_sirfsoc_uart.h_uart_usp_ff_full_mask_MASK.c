
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {int fifosize; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(struct uart_port *VAR_0)
{
 u32 VAR_1;

 VAR_1 = FUNC_0(VAR_0->fifosize);
 return (1 << VAR_1);
}
