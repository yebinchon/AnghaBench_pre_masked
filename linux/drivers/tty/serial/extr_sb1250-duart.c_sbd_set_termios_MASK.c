
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int read_status_mask; int ignore_status_mask; int lock; } ;
struct sbd_port {scalar_t__ tx_stopped; } ;
struct ktermios {int c_cflag; int c_iflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_32 ;
 unsigned int VAR_33 ;
 unsigned int VAR_34 ;
 unsigned int VAR_35 ;
 unsigned int FUNC_1 (struct sbd_port*,int ) ;
 int FUNC_2 (struct sbd_port*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct sbd_port* FUNC_5 (struct uart_port*) ;
 unsigned int FUNC_6 (struct uart_port*,struct ktermios*,struct ktermios*,int,int) ;
 int FUNC_7 (struct uart_port*,int,unsigned int) ;
 int FUNC_8 (struct sbd_port*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_9(struct uart_port *VAR_36, struct ktermios *VAR_37,
       struct ktermios *VAR_38)
{
 struct sbd_port *VAR_39 = FUNC_5(VAR_36);
 unsigned int VAR_40 = 0, VAR_41 = 0, VAR_42 = 0;
 unsigned int VAR_43 = 0, VAR_44 = 0, VAR_45 = 0;
 unsigned int VAR_46, VAR_47, VAR_48;
 unsigned int VAR_49, VAR_50;
 unsigned int VAR_51;

 VAR_43 |= ~(VAR_14 | VAR_16 |
         VAR_8);
 VAR_44 |= ~VAR_21;
 VAR_45 |= ~VAR_10;


 switch (VAR_37->c_cflag & VAR_3) {
 case 131:
 case 130:

  VAR_43 |= VAR_14;
  break;
 case 129:
  VAR_40 |= VAR_32;
  break;
 case 128:
 default:
  VAR_40 |= VAR_33;
  break;
 }


 if (VAR_37->c_cflag & VAR_4)
  VAR_41 |= VAR_21;
 else
  VAR_41 |= VAR_20;
 if (VAR_37->c_cflag & VAR_24)
  VAR_40 |= VAR_34;
 else
  VAR_40 |= VAR_35;
 if (VAR_37->c_cflag & VAR_26)
  VAR_40 |= VAR_16;
 else
  VAR_40 |= VAR_15;

 VAR_49 = FUNC_6(VAR_36, VAR_37, VAR_38, 1200, 5000000);
 VAR_50 = FUNC_0(VAR_49);

 if (VAR_50 > VAR_9)
  VAR_50 = VAR_9;

 FUNC_7(VAR_36, VAR_37->c_cflag, VAR_49);

 VAR_36->read_status_mask = VAR_12;
 if (VAR_37->c_iflag & VAR_7)
  VAR_36->read_status_mask |= VAR_11 |
        VAR_13;
 if (VAR_37->c_iflag & (VAR_5 | VAR_0 | VAR_25))
  VAR_36->read_status_mask |= VAR_17;

 VAR_36->ignore_status_mask = 0;
 if (VAR_37->c_iflag & VAR_6)
  VAR_36->ignore_status_mask |= VAR_11 |
          VAR_13;
 if (VAR_37->c_iflag & VAR_5) {
  VAR_36->ignore_status_mask |= VAR_17;
  if (VAR_37->c_iflag & VAR_6)
   VAR_36->ignore_status_mask |= VAR_12;
 }

 if (VAR_37->c_cflag & VAR_1)
  VAR_51 = VAR_19;
 else
  VAR_51 = VAR_18;

 if (VAR_37->c_cflag & VAR_2)
  VAR_42 |= VAR_10;
 else
  VAR_42 &= ~VAR_10;

 FUNC_3(&VAR_36->lock);

 if (VAR_39->tx_stopped)
  VAR_51 |= VAR_22;
 else
  VAR_51 |= VAR_23;

 VAR_46 = FUNC_1(VAR_39, VAR_30) & VAR_43;
 VAR_47 = FUNC_1(VAR_39, VAR_31) & VAR_44;
 VAR_48 = FUNC_1(VAR_39, VAR_27) & VAR_45;

 if (!VAR_39->tx_stopped)
  FUNC_2(VAR_39);
 FUNC_8(VAR_39, VAR_29, VAR_22 | VAR_18);

 FUNC_8(VAR_39, VAR_30, VAR_40 | VAR_46);
 FUNC_8(VAR_39, VAR_31, VAR_41 | VAR_47);
 FUNC_8(VAR_39, VAR_28, VAR_50);
 FUNC_8(VAR_39, VAR_27, VAR_42 | VAR_48);

 FUNC_8(VAR_39, VAR_29, VAR_51);

 FUNC_4(&VAR_36->lock);
}
