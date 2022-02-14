
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
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct uart_port*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct uart_port *VAR_11, unsigned int VAR_12)
{
 uint8_t VAR_13 = 0;

 if (VAR_12 & VAR_0)
  VAR_13 |= VAR_6;
 if (VAR_12 & VAR_4)
  VAR_13 |= VAR_10;
 if (VAR_12 & VAR_2)
  VAR_13 |= VAR_8;
 if (VAR_12 & VAR_3)
  VAR_13 |= VAR_9;
 if (VAR_12 & VAR_1)
  VAR_13 |= VAR_7;

 FUNC_0(VAR_11, VAR_5, VAR_13);
}
