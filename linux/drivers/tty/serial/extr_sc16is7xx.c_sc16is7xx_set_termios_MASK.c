
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int read_status_mask; int ignore_status_mask; int uartclk; int dev; } ;
struct sc16is7xx_port {int efr_lock; int regmap; } ;
struct ktermios {int c_cflag; int c_iflag; unsigned int* c_cc; } ;


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
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 size_t VAR_34 ;
 size_t VAR_35 ;
 struct sc16is7xx_port* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct uart_port*,int ,unsigned int) ;
 int FUNC_5 (struct uart_port*,int) ;
 int FUNC_6 (struct uart_port*,struct ktermios*,struct ktermios*,int,int) ;
 int FUNC_7 (struct uart_port*,int,int) ;

__attribute__((used)) static void FUNC_8(struct uart_port *VAR_36,
      struct ktermios *VAR_37,
      struct ktermios *VAR_38)
{
 struct sc16is7xx_port *VAR_39 = FUNC_0(VAR_36->dev);
 unsigned int VAR_40, VAR_41 = 0;
 int VAR_42;


 VAR_37->c_cflag &= ~VAR_1;


 switch (VAR_37->c_cflag & VAR_4) {
 case 131:
  VAR_40 = VAR_23;
  break;
 case 130:
  VAR_40 = VAR_24;
  break;
 case 129:
  VAR_40 = VAR_25;
  break;
 case 128:
  VAR_40 = VAR_26;
  break;
 default:
  VAR_40 = VAR_26;
  VAR_37->c_cflag &= ~VAR_4;
  VAR_37->c_cflag |= 128;
  break;
 }


 if (VAR_37->c_cflag & VAR_10) {
  VAR_40 |= VAR_20;
  if (!(VAR_37->c_cflag & VAR_12))
   VAR_40 |= VAR_19;
 }


 if (VAR_37->c_cflag & VAR_5)
  VAR_40 |= VAR_22;


 VAR_36->read_status_mask = VAR_30;
 if (VAR_37->c_iflag & VAR_7)
  VAR_36->read_status_mask |= VAR_31 |
       VAR_29;
 if (VAR_37->c_iflag & (VAR_0 | VAR_11))
  VAR_36->read_status_mask |= VAR_27;


 VAR_36->ignore_status_mask = 0;
 if (VAR_37->c_iflag & VAR_6)
  VAR_36->ignore_status_mask |= VAR_27;
 if (!(VAR_37->c_cflag & VAR_2))
  VAR_36->ignore_status_mask |= VAR_28;


 FUNC_1(&VAR_39->efr_lock);

 FUNC_4(VAR_36, VAR_21,
        VAR_18);


 FUNC_3(VAR_39->regmap, 1);
 FUNC_4(VAR_36, VAR_33, VAR_37->c_cc[VAR_34]);
 FUNC_4(VAR_36, VAR_32, VAR_37->c_cc[VAR_35]);
 if (VAR_37->c_cflag & VAR_3)
  VAR_41 |= VAR_13 |
   VAR_14;
 if (VAR_37->c_iflag & VAR_9)
  VAR_41 |= VAR_17;
 if (VAR_37->c_iflag & VAR_8)
  VAR_41 |= VAR_16;

 FUNC_4(VAR_36, VAR_15, VAR_41);
 FUNC_3(VAR_39->regmap, 0);


 FUNC_4(VAR_36, VAR_21, VAR_40);

 FUNC_2(&VAR_39->efr_lock);


 VAR_42 = FUNC_6(VAR_36, VAR_37, VAR_38,
      VAR_36->uartclk / 16 / 4 / 0xffff,
      VAR_36->uartclk / 16);


 VAR_42 = FUNC_5(VAR_36, VAR_42);


 FUNC_7(VAR_36, VAR_37->c_cflag, VAR_42);
}
