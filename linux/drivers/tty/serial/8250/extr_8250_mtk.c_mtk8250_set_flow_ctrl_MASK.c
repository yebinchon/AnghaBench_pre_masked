
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {TYPE_2__* state; } ;
struct uart_8250_port {struct uart_port port; } ;
struct TYPE_3__ {int tty; } ;
struct TYPE_4__ {TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (struct uart_8250_port*,int) ;
 int FUNC_3 (struct uart_8250_port*,int) ;
 int FUNC_4 (struct uart_8250_port*,int ) ;
 int FUNC_5 (struct uart_8250_port*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct uart_8250_port *VAR_17, int VAR_18)
{
 struct uart_port *VAR_19 = &VAR_17->port;
 int VAR_20 = FUNC_4(VAR_17, VAR_11);

 FUNC_5(VAR_17, VAR_11, VAR_12);
 FUNC_5(VAR_17, VAR_9, VAR_10);
 FUNC_5(VAR_17, VAR_11, VAR_20);
 VAR_20 = FUNC_4(VAR_17, VAR_11);

 switch (VAR_18) {
 case 129:
  FUNC_5(VAR_17, VAR_4, VAR_3);
  FUNC_5(VAR_17, VAR_5, 0x00);
  FUNC_5(VAR_17, VAR_11, VAR_12);
  FUNC_5(VAR_17, VAR_9, FUNC_4(VAR_17, VAR_9) &
   (~(VAR_0 | VAR_1)));
  FUNC_5(VAR_17, VAR_11, VAR_20);
  FUNC_2(VAR_17, VAR_8 |
   VAR_7 | VAR_6);
  break;

 case 130:
  FUNC_5(VAR_17, VAR_4, VAR_3);
  FUNC_5(VAR_17, VAR_5, 0x00);
  FUNC_5(VAR_17, VAR_13, VAR_14);
  FUNC_5(VAR_17, VAR_11, VAR_12);


  FUNC_5(VAR_17, VAR_9, VAR_0 |
   (FUNC_4(VAR_17, VAR_9) &
   (~(VAR_0 | VAR_1))));

  FUNC_5(VAR_17, VAR_11, VAR_20);
  FUNC_2(VAR_17, VAR_8);
  FUNC_3(VAR_17, VAR_6 | VAR_7);
  break;

 case 128:
  FUNC_5(VAR_17, VAR_4, VAR_3);
  FUNC_5(VAR_17, VAR_5, 0x01);
  FUNC_5(VAR_17, VAR_11, VAR_12);


  FUNC_5(VAR_17, VAR_9, VAR_2 |
   (FUNC_4(VAR_17, VAR_9) &
   (~(VAR_0 | VAR_1))));

  FUNC_5(VAR_17, VAR_16, FUNC_0(VAR_19->state->port.tty));
  FUNC_5(VAR_17, VAR_15, FUNC_1(VAR_19->state->port.tty));
  FUNC_5(VAR_17, VAR_11, VAR_20);
  FUNC_2(VAR_17, VAR_6|VAR_7);
  FUNC_3(VAR_17, VAR_8);
  break;
 default:
  break;
 }
}
