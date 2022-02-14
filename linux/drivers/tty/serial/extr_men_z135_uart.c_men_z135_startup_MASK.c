
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {scalar_t__ membase; } ;
struct men_z135_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct men_z135_port*) ;
 int VAR_5 ;
 int VAR_6 ;
 struct men_z135_port* FUNC_3 (struct uart_port*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_4(struct uart_port *VAR_8)
{
 struct men_z135_port *VAR_9 = FUNC_3(VAR_8);
 int VAR_10;
 u32 VAR_11 = 0;

 VAR_10 = FUNC_2(VAR_9);
 if (VAR_10)
  return -VAR_0;

 VAR_11 = FUNC_0(VAR_8->membase + VAR_2);


 VAR_11 |= VAR_1 & ~VAR_3;
 VAR_11 &= ~(0xff << 16);
 VAR_11 |= (VAR_7 << 16);
 VAR_11 |= (VAR_6 << 20);

 FUNC_1(VAR_11, VAR_8->membase + VAR_2);

 if (VAR_5)
  FUNC_1(VAR_5, VAR_8->membase + VAR_4);

 return 0;
}
