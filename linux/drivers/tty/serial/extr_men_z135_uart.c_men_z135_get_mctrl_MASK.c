
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct uart_port {scalar_t__ membase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_1(struct uart_port *VAR_9)
{
 unsigned int VAR_10 = 0;
 u8 VAR_11;

 VAR_11 = FUNC_0(VAR_9->membase + VAR_4 + 1);

 if (VAR_11 & VAR_0)
  VAR_10 |= VAR_6;
 if (VAR_11 & VAR_2)
  VAR_10 |= VAR_7;
 if (VAR_11 & VAR_3)
  VAR_10 |= VAR_8;
 if (VAR_11 & VAR_1)
  VAR_10 |= VAR_5;

 return VAR_10;
}
