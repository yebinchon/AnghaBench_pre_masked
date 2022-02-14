
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int iotype; int handle_irq; int serial_out; int serial_in; } ;
struct uart_8250_port {int cur_iotype; int dl_write; int dl_read; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 struct uart_8250_port* FUNC_0 (struct uart_port*) ;

__attribute__((used)) static void FUNC_1(struct uart_port *VAR_19)
{
 struct uart_8250_port *VAR_20 = FUNC_0(VAR_19);

 VAR_20->dl_read = VAR_4;
 VAR_20->dl_write = VAR_5;

 switch (VAR_19->iotype) {
 case 132:
  VAR_19->serial_in = VAR_6;
  VAR_19->serial_out = VAR_7;
  break;

 case 131:
  VAR_19->serial_in = VAR_16;
  VAR_19->serial_out = VAR_17;
  break;

 case 130:
  VAR_19->serial_in = VAR_10;
  VAR_19->serial_out = VAR_11;
  break;

 case 129:
  VAR_19->serial_in = VAR_12;
  VAR_19->serial_out = VAR_13;
  break;

 case 128:
  VAR_19->serial_in = VAR_14;
  VAR_19->serial_out = VAR_15;
  break;
 default:
  VAR_19->serial_in = VAR_8;
  VAR_19->serial_out = VAR_9;
  break;
 }

 VAR_20->cur_iotype = VAR_19->iotype;
 VAR_19->handle_irq = VAR_18;
}
