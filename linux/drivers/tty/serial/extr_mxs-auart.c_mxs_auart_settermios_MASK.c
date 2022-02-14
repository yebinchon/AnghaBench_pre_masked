
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {int uartclk; int ignore_status_mask; int read_status_mask; } ;
struct mxs_auart_port {int dev; int flags; } ;
struct ktermios {unsigned int c_cflag; int c_iflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;




 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int,unsigned int) ;
 unsigned int FUNC_5 (int,int ) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 unsigned int VAR_29 ;
 int VAR_30 ;
 unsigned int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 scalar_t__ FUNC_6 (struct uart_port*,unsigned int) ;
 scalar_t__ FUNC_7 (struct mxs_auart_port*) ;
 int FUNC_8 (int ,char*) ;
 scalar_t__ FUNC_9 (struct mxs_auart_port*) ;
 scalar_t__ FUNC_10 (struct mxs_auart_port*) ;
 int FUNC_11 (struct uart_port*) ;
 int FUNC_12 (struct mxs_auart_port*) ;
 int FUNC_13 (struct mxs_auart_port*) ;
 int FUNC_14 (struct mxs_auart_port*) ;
 int FUNC_15 (struct uart_port*) ;
 int FUNC_16 (int,struct mxs_auart_port*,int ) ;
 int FUNC_17 (struct mxs_auart_port*,int ) ;
 int FUNC_18 (int,struct mxs_auart_port*,int ) ;
 int FUNC_19 (int ,int *) ;
 scalar_t__ FUNC_20 (int ,int *) ;
 struct mxs_auart_port* FUNC_21 (struct uart_port*) ;
 unsigned int FUNC_22 (struct uart_port*,struct ktermios*,struct ktermios*,unsigned int,unsigned int) ;
 int FUNC_23 (struct uart_port*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_24(struct uart_port *VAR_35,
     struct ktermios *VAR_36,
     struct ktermios *VAR_37)
{
 struct mxs_auart_port *VAR_38 = FUNC_21(VAR_35);
 u32 VAR_39, VAR_40, VAR_41, VAR_42;
 unsigned int VAR_43, VAR_44, VAR_45, VAR_46;

 VAR_43 = VAR_36->c_cflag;

 VAR_40 = VAR_11;
 VAR_41 = FUNC_17(VAR_38, VAR_32);


 switch (VAR_43 & VAR_22) {
 case 131:
  VAR_39 = 0;
  break;
 case 130:
  VAR_39 = 1;
  break;
 case 129:
  VAR_39 = 2;
  break;
 case 128:
  VAR_39 = 3;
  break;
 default:
  return;
 }

 VAR_40 |= FUNC_2(VAR_39);


 if (VAR_43 & VAR_29) {
  VAR_40 |= VAR_12;
  if ((VAR_43 & VAR_31) == 0)
   VAR_40 |= VAR_10;
  if (VAR_43 & VAR_19)
   VAR_40 |= VAR_13;
 }

 VAR_35->read_status_mask = VAR_16;

 if (VAR_36->c_iflag & VAR_26)
  VAR_35->read_status_mask |= VAR_17;
 if (VAR_36->c_iflag & (VAR_24 | VAR_18 | VAR_30))
  VAR_35->read_status_mask |= VAR_15;




 VAR_35->ignore_status_mask = 0;
 if (VAR_36->c_iflag & VAR_25)
  VAR_35->ignore_status_mask |= VAR_17;
 if (VAR_36->c_iflag & VAR_24) {
  VAR_35->ignore_status_mask |= VAR_15;




  if (VAR_36->c_iflag & VAR_25)
   VAR_35->ignore_status_mask |= VAR_16;
 }




 if (VAR_43 & VAR_20)
  VAR_41 |= VAR_4;
 else
  VAR_41 &= ~VAR_4;


 if (VAR_43 & VAR_23)
  VAR_40 |= VAR_14;


 VAR_41 &= ~(VAR_0 | VAR_2);
 if (VAR_43 & VAR_21) {






  if (FUNC_10(VAR_38)
    && FUNC_20(VAR_28, &VAR_38->flags)) {
   if (!FUNC_13(VAR_38))

    VAR_41 |= VAR_5 | VAR_3
           | VAR_1;
  }


  VAR_41 |= VAR_2;
  if (FUNC_3())
   VAR_41 |= VAR_0;
 }


 if (FUNC_9(VAR_38)) {
  VAR_44 = FUNC_22(VAR_35, VAR_36, VAR_37,
       VAR_35->uartclk * 4 / 0x3FFFFF,
       VAR_35->uartclk / 16);
  VAR_42 = VAR_35->uartclk * 4 / VAR_44;
 } else {
  VAR_45 = FUNC_5(VAR_35->uartclk * 32,
     VAR_8);
  VAR_46 = VAR_35->uartclk * 32 / VAR_9;
  VAR_44 = FUNC_22(VAR_35, VAR_36, VAR_37, VAR_45, VAR_46);
  VAR_42 = FUNC_4(VAR_35->uartclk * 32, VAR_44);
 }

 VAR_40 |= FUNC_0(VAR_42 & 0x3F);
 VAR_40 |= FUNC_1(VAR_42 >> 6);
 FUNC_18(VAR_40, VAR_38, VAR_34);

 FUNC_18(VAR_41, VAR_38, VAR_32);

 FUNC_23(VAR_35, VAR_36->c_cflag, VAR_44);


 if (FUNC_7(VAR_38) &&
  !FUNC_19(VAR_27, &VAR_38->flags)) {
  if (!FUNC_14(VAR_38)) {

   FUNC_16(VAR_7 | VAR_6,
    VAR_38, VAR_33);
  } else {
   FUNC_12(VAR_38);
   FUNC_8(VAR_38->dev, "We can not start up the DMA.\n");
  }
 }


 if (FUNC_6(VAR_35, VAR_36->c_cflag))
  FUNC_15(VAR_35);
 else
  FUNC_11(VAR_35);
}
