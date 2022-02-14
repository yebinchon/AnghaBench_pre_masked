
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_txx9_port {int dummy; } ;


 unsigned int FUNC_0 (struct uart_txx9_port*,int) ;
 int FUNC_1 (struct uart_txx9_port*,int,unsigned int) ;

__attribute__((used)) static inline void
FUNC_2(struct uart_txx9_port *VAR_0, int VAR_1, unsigned int VAR_2)
{
 FUNC_1(VAR_0, VAR_1, FUNC_0(VAR_0, VAR_1) & ~VAR_2);
}
