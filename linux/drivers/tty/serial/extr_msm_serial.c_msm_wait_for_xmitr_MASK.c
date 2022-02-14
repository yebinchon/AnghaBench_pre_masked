
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*,int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline void FUNC_3(struct uart_port *VAR_6)
{
 unsigned int VAR_7 = 500000;

 while (!(FUNC_0(VAR_6, VAR_4) & VAR_5)) {
  if (FUNC_0(VAR_6, VAR_2) & VAR_3)
   break;
  FUNC_2(1);
  if (!VAR_7--)
   break;
 }
 FUNC_1(VAR_6, VAR_1, VAR_0);
}
