
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_5, unsigned int VAR_6)
{
 unsigned int VAR_7;

 VAR_7 = FUNC_0(VAR_5, VAR_3);

 if (!(VAR_6 & VAR_0)) {
  VAR_7 &= ~VAR_4;
  FUNC_1(VAR_5, VAR_7, VAR_3);
  FUNC_1(VAR_5, VAR_2, VAR_1);
 } else {
  VAR_7 |= VAR_4;
  FUNC_1(VAR_5, VAR_7, VAR_3);
 }
}
