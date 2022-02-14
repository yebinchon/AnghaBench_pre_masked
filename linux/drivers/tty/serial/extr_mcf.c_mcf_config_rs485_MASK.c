
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial_rs485 {int flags; } ;
struct uart_port {struct serial_rs485 rs485; scalar_t__ membase; int dev; } ;


 unsigned char VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 unsigned char FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned char,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct uart_port *VAR_3, struct serial_rs485 *VAR_4)
{
 unsigned char VAR_5, VAR_6;


 VAR_5 = FUNC_1(VAR_3->membase + VAR_1);
 VAR_6 = FUNC_1(VAR_3->membase + VAR_1);
 if (VAR_4->flags & VAR_2) {
  FUNC_0(VAR_3->dev, "Setting UART to RS485\n");

  VAR_6 |= VAR_0;
 } else {
  FUNC_0(VAR_3->dev, "Setting UART to RS232\n");
  VAR_6 &= ~VAR_0;
 }
 FUNC_2(VAR_5, VAR_3->membase + VAR_1);
 FUNC_2(VAR_6, VAR_3->membase + VAR_1);
 VAR_3->rs485 = *VAR_4;

 return 0;
}
