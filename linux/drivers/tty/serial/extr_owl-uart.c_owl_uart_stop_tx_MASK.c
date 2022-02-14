
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_5)
{
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_0);
 VAR_6 &= ~(VAR_2 | VAR_1);
 FUNC_1(VAR_5, VAR_6, VAR_0);

 VAR_6 = FUNC_0(VAR_5, VAR_3);
 VAR_6 |= VAR_4;
 FUNC_1(VAR_5, VAR_6, VAR_3);
}
