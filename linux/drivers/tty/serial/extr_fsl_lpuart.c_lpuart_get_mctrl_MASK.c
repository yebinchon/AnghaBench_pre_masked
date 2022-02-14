
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ membase; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char FUNC_0 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_1(struct uart_port *VAR_5)
{
 unsigned int VAR_6 = 0;
 unsigned char VAR_7;

 VAR_7 = FUNC_0(VAR_5->membase + VAR_2);
 if (VAR_7 & VAR_4)
  VAR_6 |= VAR_0;

 if (VAR_7 & VAR_3)
  VAR_6 |= VAR_1;

 return VAR_6;
}
