
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
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (struct uart_port*,int ) ;

__attribute__((used)) static unsigned int FUNC_1(struct uart_port *VAR_9)
{
 unsigned int VAR_10 = VAR_5 | VAR_7;
 u32 VAR_11, VAR_12;

 VAR_12 = FUNC_0(VAR_9, VAR_0);
 VAR_11 = FUNC_0(VAR_9, VAR_2);
 if (VAR_11 & VAR_4)
  VAR_10 |= VAR_8;
 if ((VAR_11 & VAR_3) || !(VAR_12 & VAR_1))
  VAR_10 |= VAR_6;
 return VAR_10;
}
