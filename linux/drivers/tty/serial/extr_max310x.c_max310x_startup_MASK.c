
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; int delay_rts_after_send; int delay_rts_before_send; } ;
struct uart_port {TYPE_2__ rs485; int dev; } ;
struct max310x_port {TYPE_1__* devtype; } ;
struct TYPE_3__ {int (* power ) (struct uart_port*,int) ;} ;


 unsigned int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int ,unsigned int,unsigned int) ;
 struct max310x_port* FUNC_3 (int ) ;
 int FUNC_4 (struct uart_port*,int ) ;
 int FUNC_5 (struct uart_port*,int ,unsigned int,unsigned int) ;
 int FUNC_6 (struct uart_port*,int ,unsigned int) ;
 int FUNC_7 (struct uart_port*,int) ;

__attribute__((used)) static int FUNC_8(struct uart_port *VAR_15)
{
 struct max310x_port *VAR_16 = FUNC_3(VAR_15->dev);
 unsigned int VAR_17;

 VAR_16->devtype->power(VAR_15, 1);


 FUNC_5(VAR_15, VAR_7,
       VAR_8, 0);


 VAR_17 = VAR_12 | VAR_10;
 FUNC_6(VAR_15, VAR_11, VAR_17);
 FUNC_5(VAR_15, VAR_11,
       VAR_10, 0);


 VAR_17 = (FUNC_2(VAR_15->rs485.delay_rts_before_send, 0U, 15U) << 4) |
  FUNC_2(VAR_15->rs485.delay_rts_after_send, 0U, 15U);
 FUNC_6(VAR_15, VAR_1, VAR_17);

 if (VAR_15->rs485.flags & VAR_13) {
  FUNC_5(VAR_15, VAR_7,
        VAR_8,
        VAR_8);

  if (!(VAR_15->rs485.flags & VAR_14))
   FUNC_5(VAR_15, VAR_11,
         VAR_9,
         VAR_9);
 }



 FUNC_6(VAR_15, VAR_0,
      FUNC_1(48) | FUNC_0(96));


 FUNC_4(VAR_15, VAR_3);


 VAR_17 = VAR_5 | VAR_6;
 FUNC_6(VAR_15, VAR_2, VAR_17 | VAR_4);

 return 0;
}
