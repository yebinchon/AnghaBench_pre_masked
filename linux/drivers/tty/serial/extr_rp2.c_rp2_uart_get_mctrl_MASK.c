
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {int dummy; } ;
struct rp2_uart_port {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 struct rp2_uart_port* FUNC_0 (struct uart_port*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_2(struct uart_port *VAR_9)
{
 struct rp2_uart_port *VAR_10 = FUNC_0(VAR_9);
 u32 VAR_11;

 VAR_11 = FUNC_1(VAR_10->base + VAR_0);
 return ((VAR_11 & VAR_2) ? VAR_5 : 0) |
        ((VAR_11 & VAR_3) ? VAR_7 : 0) |
        ((VAR_11 & VAR_1) ? VAR_6 : 0) |
        ((VAR_11 & VAR_4) ? VAR_8 : 0);
}
