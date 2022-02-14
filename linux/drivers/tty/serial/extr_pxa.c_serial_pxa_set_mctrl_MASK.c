
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_pxa_port {unsigned char mcr; } ;
struct uart_port {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 int FUNC_0 (struct uart_pxa_port*,int ,unsigned char) ;

__attribute__((used)) static void FUNC_1(struct uart_port *VAR_11, unsigned int VAR_12)
{
 struct uart_pxa_port *VAR_13 = (struct uart_pxa_port *)VAR_11;
 unsigned char VAR_14 = 0;

 if (VAR_12 & VAR_4)
  VAR_14 |= VAR_10;
 if (VAR_12 & VAR_0)
  VAR_14 |= VAR_6;
 if (VAR_12 & VAR_2)
  VAR_14 |= VAR_8;
 if (VAR_12 & VAR_3)
  VAR_14 |= VAR_9;
 if (VAR_12 & VAR_1)
  VAR_14 |= VAR_7;

 VAR_14 |= VAR_13->mcr;

 FUNC_0(VAR_13, VAR_5, VAR_14);
}
