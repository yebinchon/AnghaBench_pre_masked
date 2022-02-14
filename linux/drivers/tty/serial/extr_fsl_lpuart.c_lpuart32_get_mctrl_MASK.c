
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_0 (struct uart_port*,int ) ;

__attribute__((used)) static unsigned int FUNC_1(struct uart_port *VAR_5)
{
 unsigned int VAR_6 = 0;
 unsigned long VAR_7;

 VAR_7 = FUNC_0(VAR_5, VAR_2);
 if (VAR_7 & VAR_4)
  VAR_6 |= VAR_0;

 if (VAR_7 & VAR_3)
  VAR_6 |= VAR_1;

 return VAR_6;
}
