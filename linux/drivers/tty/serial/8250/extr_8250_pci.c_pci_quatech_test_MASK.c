
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct uart_8250_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct uart_8250_port*) ;
 int FUNC_1 (struct uart_8250_port*,int) ;

__attribute__((used)) static int FUNC_2(struct uart_8250_port *VAR_9)
{
 u8 VAR_10, VAR_11;

 VAR_11 = FUNC_0(VAR_9);
 FUNC_1(VAR_9, VAR_11 & VAR_1);
 VAR_10 = FUNC_0(VAR_9) & 0xC0;
 if (VAR_10 != VAR_5)
  return -VAR_0;
 FUNC_1(VAR_9, (VAR_11 & VAR_1)|VAR_2);
 VAR_10 = FUNC_0(VAR_9) & 0xC0;
 if (VAR_10 != VAR_6)
  return -VAR_0;
 FUNC_1(VAR_9, (VAR_11 & VAR_1)|VAR_3);
 VAR_10 = FUNC_0(VAR_9) & 0xC0;
 if (VAR_10 != VAR_7)
  return -VAR_0;
 FUNC_1(VAR_9, (VAR_11 & VAR_1)|VAR_4);
 VAR_10 = FUNC_0(VAR_9) & 0xC0;
 if (VAR_10 != VAR_8)
  return -VAR_0;

 FUNC_1(VAR_9, VAR_11);
 return 0;
}
