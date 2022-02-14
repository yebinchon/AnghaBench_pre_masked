
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
 int FUNC_0 (struct uart_8250_port*) ;
 scalar_t__ FUNC_1 (struct uart_8250_port*) ;
 int FUNC_2 (struct uart_8250_port*,int) ;

__attribute__((used)) static int FUNC_3(struct uart_8250_port *VAR_5)
{
 u8 VAR_6, VAR_7, VAR_8;
 unsigned long VAR_9;

 if (FUNC_1(VAR_5) < 0)
  return 1843200;

 VAR_6 = FUNC_0(VAR_5);

 FUNC_2(VAR_5, VAR_6 & ~VAR_4);
 VAR_7 = FUNC_0(VAR_5);
 if (VAR_7 & VAR_4) {
  VAR_9 = 1843200;
  goto out;
 }
 FUNC_2(VAR_5, VAR_6 | VAR_4);
 VAR_7 = FUNC_0(VAR_5);
 if (!(VAR_7 & VAR_4)) {
  VAR_9 = 1843200;
  goto out;
 }
 VAR_7 &= VAR_4;
 if (VAR_7 == VAR_2) {
  VAR_9 = 3685400;
  VAR_8 = VAR_2;
 } else if (VAR_7 == VAR_3) {
  VAR_9 = 7372800;
  VAR_8 = VAR_3;
 } else if (VAR_7 == VAR_4) {
  VAR_9 = 14745600;
  VAR_8 = VAR_4;
 } else {
  VAR_9 = 1843200;
  VAR_8 = VAR_1;
 }
 VAR_6 &= ~VAR_0;
 VAR_6 |= VAR_8;

out:
 FUNC_2(VAR_5, VAR_6);
 return VAR_9;
}
