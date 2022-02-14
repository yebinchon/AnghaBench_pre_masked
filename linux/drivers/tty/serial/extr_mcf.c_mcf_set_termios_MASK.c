
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct uart_port {int lock; scalar_t__ membase; int dev; TYPE_1__ rs485; } ;
struct ktermios {int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 unsigned char VAR_12 ;
 unsigned char VAR_13 ;
 unsigned char VAR_14 ;
 unsigned char VAR_15 ;
 unsigned char VAR_16 ;
 unsigned char VAR_17 ;
 unsigned char VAR_18 ;
 unsigned char VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 unsigned int VAR_27 ;
 scalar_t__ VAR_28 ;
 unsigned int VAR_29 ;
 unsigned int VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 unsigned int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 unsigned int FUNC_3 (struct uart_port*,struct ktermios*,struct ktermios*,int ,int) ;
 int FUNC_4 (struct uart_port*,int,unsigned int) ;
 int FUNC_5 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct uart_port *VAR_37, struct ktermios *VAR_38,
 struct ktermios *VAR_39)
{
 unsigned long VAR_40;
 unsigned int VAR_41, VAR_42;



 unsigned char VAR_43, VAR_44;

 VAR_41 = FUNC_3(VAR_37, VAR_38, VAR_39, 0, 230400);




 VAR_42 = ((VAR_33 / VAR_41) + 16) / 32;


 VAR_43 = VAR_14 | VAR_13;
 VAR_44 = 0;

 switch (VAR_38->c_cflag & VAR_2) {
 case 131: VAR_43 |= VAR_4; break;
 case 130: VAR_43 |= VAR_5; break;
 case 129: VAR_43 |= VAR_6; break;
 case 128:
 default: VAR_43 |= VAR_7; break;
 }

 if (VAR_38->c_cflag & VAR_34) {
  if (VAR_38->c_cflag & VAR_0) {
   if (VAR_38->c_cflag & VAR_35)
    VAR_43 |= VAR_9;
   else
    VAR_43 |= VAR_12;
  } else {
   if (VAR_38->c_cflag & VAR_35)
    VAR_43 |= VAR_11;
   else
    VAR_43 |= VAR_8;
  }
 } else {
  VAR_43 |= VAR_10;
 }







 if (VAR_38->c_cflag & VAR_3)
  VAR_44 |= VAR_17;
 else
  VAR_44 |= VAR_16;

 if (VAR_38->c_cflag & VAR_1) {
  VAR_43 |= VAR_15;
  VAR_44 |= VAR_18;
 }

 FUNC_1(&VAR_37->lock, VAR_40);
 if (VAR_37->rs485.flags & VAR_36) {
  FUNC_0(VAR_37->dev, "Setting UART to RS485\n");
  VAR_44 |= VAR_19;
 }

 FUNC_4(VAR_37, VAR_38->c_cflag, VAR_41);
 FUNC_5(VAR_24, VAR_37->membase + VAR_22);
 FUNC_5(VAR_25, VAR_37->membase + VAR_22);
 FUNC_5(VAR_23, VAR_37->membase + VAR_22);
 FUNC_5(VAR_43, VAR_37->membase + VAR_32);
 FUNC_5(VAR_44, VAR_37->membase + VAR_32);
 FUNC_5((VAR_42 & 0xff00) >> 8, VAR_37->membase + VAR_20);
 FUNC_5((VAR_42 & 0xff), VAR_37->membase + VAR_21);



 FUNC_5(VAR_29 | VAR_30,
  VAR_37->membase + VAR_28);
 FUNC_5(VAR_26 | VAR_27,
  VAR_37->membase + VAR_22);
 FUNC_2(&VAR_37->lock, VAR_40);
}
