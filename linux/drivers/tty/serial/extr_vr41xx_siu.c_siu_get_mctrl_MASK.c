
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct uart_port {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct uart_port*,int ) ;

__attribute__((used)) static unsigned int FUNC_1(struct uart_port *VAR_9)
{
 uint8_t VAR_10;
 unsigned int VAR_11 = 0;

 VAR_10 = FUNC_0(VAR_9, VAR_4);
 if (VAR_10 & VAR_6)
  VAR_11 |= VAR_0;
 if (VAR_10 & VAR_8)
  VAR_11 |= VAR_3;
 if (VAR_10 & VAR_7)
  VAR_11 |= VAR_2;
 if (VAR_10 & VAR_5)
  VAR_11 |= VAR_1;

 return VAR_11;
}
