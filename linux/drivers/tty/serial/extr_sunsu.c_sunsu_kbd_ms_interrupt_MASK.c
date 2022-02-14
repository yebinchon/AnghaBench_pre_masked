
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_sunsu_port {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int FUNC_0 (struct uart_sunsu_port*,int) ;
 int FUNC_1 (struct uart_sunsu_port*,int ) ;
 unsigned char FUNC_2 (struct uart_sunsu_port*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_6, void *VAR_7)
{
 struct uart_sunsu_port *VAR_8 = VAR_7;

 if (!(FUNC_1(VAR_8, VAR_1) & VAR_2)) {
  unsigned char VAR_9 = FUNC_2(VAR_8, VAR_3);

  if ((VAR_9 & VAR_5) || (VAR_9 & VAR_4))
   FUNC_0(VAR_8, (VAR_9 & VAR_4) != 0);
 }

 return VAR_0;
}
