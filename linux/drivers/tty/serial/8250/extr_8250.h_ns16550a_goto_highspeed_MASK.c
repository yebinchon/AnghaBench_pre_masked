
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_8250_port {int dummy; } ;


 int FUNC_0 (unsigned char) ;
 unsigned char FUNC_1 (struct uart_8250_port*,int) ;
 int FUNC_2 (struct uart_8250_port*,int,unsigned char) ;

__attribute__((used)) static inline int FUNC_3(struct uart_8250_port *VAR_0)
{
 unsigned char VAR_1;

 VAR_1 = FUNC_1(VAR_0, 0x04);

 if (((VAR_1) & 0x30) == 0x10) {

  return 0;
 } else {
  VAR_1 &= ~0xB0;
  VAR_1 |= 0x10;
  FUNC_2(VAR_0, 0x04, VAR_1);
 }
 return 1;
}
