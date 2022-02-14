
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {unsigned int uartclk; int read_status_mask; int ignore_status_mask; int lock; } ;
struct ktermios {int c_cflag; int c_iflag; } ;


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
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned int VAR_17 ;
 int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 unsigned int VAR_29 ;
 unsigned int VAR_30 ;
 unsigned int VAR_31 ;
 unsigned int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 unsigned int VAR_37 ;
 unsigned int FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*,int ,unsigned int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (struct ktermios*) ;
 int FUNC_5 (struct ktermios*,unsigned int,unsigned int) ;
 unsigned int FUNC_6 (struct uart_port*,struct ktermios*,struct ktermios*,int ,int ) ;
 int FUNC_7 (struct uart_port*,int,unsigned int) ;

__attribute__((used)) static void FUNC_8(struct uart_port *VAR_38,
        struct ktermios *VAR_39,
        struct ktermios *VAR_40)
{
 unsigned int VAR_41, VAR_42;
 unsigned int VAR_43 = 0, VAR_44;
 unsigned long VAR_45;


 VAR_41 = FUNC_6(VAR_38, VAR_39, VAR_40, 0, VAR_15);

 VAR_42 = VAR_38->uartclk / VAR_41;


 switch (VAR_39->c_cflag & VAR_3) {
 case 131:
  VAR_43 |= VAR_23;
  break;
 case 130:
  VAR_43 |= VAR_24;
  break;
 case 129:
  VAR_43 |= VAR_25;
  break;
 case 128:
 default:
  VAR_43 |= VAR_26;
  break;
 }


 VAR_43 &= ~(VAR_31 | VAR_32);
 if (VAR_39->c_cflag & VAR_4)
  VAR_43 |= VAR_32;
 else
  VAR_43 |= VAR_31;


 VAR_43 &= ~VAR_29;
 VAR_39->c_cflag &= ~VAR_1;
 if (VAR_39->c_cflag & VAR_8) {
  VAR_43 |= VAR_30;
  if (VAR_39->c_cflag & VAR_10)
   VAR_43 |= VAR_28;
  else
   VAR_43 |= VAR_27;
 }

 FUNC_2(&VAR_38->lock, VAR_45);


 FUNC_7(VAR_38, VAR_39->c_cflag, VAR_41);

 VAR_38->read_status_mask = VAR_35;
 if (VAR_39->c_iflag & VAR_7)
  VAR_38->read_status_mask |= VAR_34 | VAR_36;
 if (VAR_39->c_iflag & (VAR_5 | VAR_0 | VAR_9))
  VAR_38->read_status_mask |= VAR_33;


 VAR_38->ignore_status_mask = 0;
 if (VAR_39->c_iflag & VAR_6)
  VAR_38->ignore_status_mask |= VAR_36 | VAR_34;
 if (VAR_39->c_iflag & VAR_5) {
  VAR_38->ignore_status_mask |= VAR_33;




  if (VAR_39->c_iflag & VAR_6)
   VAR_38->ignore_status_mask |= VAR_35;
 }


 VAR_44 = FUNC_0(VAR_38, VAR_21);
 VAR_44 &= ~(VAR_13 | VAR_12 | VAR_37);
 if (VAR_39->c_cflag & VAR_2) {
  VAR_44 |= VAR_13;
  VAR_44 |= VAR_12;
  VAR_44 |= VAR_37;
 }


 FUNC_1(VAR_38, VAR_16, VAR_42 & VAR_17);


 FUNC_1(VAR_38, VAR_18,
     (VAR_42 & VAR_19) >> VAR_20);
 FUNC_1(VAR_38, VAR_22, VAR_43);
 VAR_44 |= VAR_14 | VAR_11;
 FUNC_1(VAR_38, VAR_21, VAR_44);

 FUNC_3(&VAR_38->lock, VAR_45);


 if (FUNC_4(VAR_39))
  FUNC_5(VAR_39, VAR_41, VAR_41);
}
