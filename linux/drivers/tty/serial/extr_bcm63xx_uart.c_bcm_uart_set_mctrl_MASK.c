
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_8, unsigned int VAR_9)
{
 unsigned int VAR_10;

 VAR_10 = FUNC_0(VAR_8, VAR_6);
 VAR_10 &= ~(VAR_5 | VAR_7);

 if (!(VAR_9 & VAR_0))
  VAR_10 |= VAR_5;
 if (!(VAR_9 & VAR_2))
  VAR_10 |= VAR_7;
 FUNC_1(VAR_8, VAR_10, VAR_6);

 VAR_10 = FUNC_0(VAR_8, VAR_4);
 if (VAR_9 & VAR_1)
  VAR_10 |= VAR_3;
 else
  VAR_10 &= ~VAR_3;
 FUNC_1(VAR_8, VAR_10, VAR_4);
}
