
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {int dummy; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct uart_port*,unsigned int) ;
 int FUNC_3 (struct uart_port*,unsigned int,int) ;

__attribute__((used)) static inline void FUNC_4(struct uart_port *VAR_0, int VAR_1,
       unsigned int VAR_2)
{
 unsigned long VAR_3;
 u32 VAR_4;

 FUNC_1(VAR_3);
 VAR_4 = FUNC_2(VAR_0, VAR_2);
 VAR_4 |= (1 << VAR_1);
 FUNC_3(VAR_0, VAR_2, VAR_4);
 FUNC_0(VAR_3);
}
