
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct uart_port {int lock; scalar_t__ membase; } ;
struct men_z135_port {int automode; } ;
struct ktermios {int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
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
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct men_z135_port* FUNC_5 (struct uart_port*) ;
 scalar_t__ FUNC_6 (struct ktermios*) ;
 int FUNC_7 (struct ktermios*,unsigned int,unsigned int) ;
 unsigned int FUNC_8 (struct uart_port*,struct ktermios*,struct ktermios*,int ,int) ;
 int FUNC_9 (struct uart_port*,int,unsigned int) ;

__attribute__((used)) static void FUNC_10(struct uart_port *VAR_26,
    struct ktermios *VAR_27,
    struct ktermios *VAR_28)
{
 struct men_z135_port *VAR_29 = FUNC_5(VAR_26);
 unsigned int VAR_30;
 u32 VAR_31;
 u32 VAR_32;
 u32 VAR_33;
 u8 VAR_34;

 VAR_31 = FUNC_1(VAR_26->membase + VAR_7);
 VAR_34 = FUNC_0(VAR_31);


 switch (VAR_27->c_cflag & VAR_3) {
 case 131:
  VAR_34 |= VAR_20;
  break;
 case 130:
  VAR_34 |= VAR_21;
  break;
 case 129:
  VAR_34 |= VAR_22;
  break;
 case 128:
  VAR_34 |= VAR_23;
  break;
 }


 if (VAR_27->c_cflag & VAR_4)
  VAR_34 |= VAR_11 << VAR_18;


 if (VAR_27->c_cflag & VAR_24) {
  VAR_34 |= VAR_13 << VAR_14;

  if (VAR_27->c_cflag & VAR_25)
   VAR_34 |= VAR_16 << VAR_17;
  else
   VAR_34 |= VAR_15 << VAR_17;
 } else
  VAR_34 |= VAR_12 << VAR_14;

 VAR_31 |= VAR_8;
 if (VAR_27->c_cflag & VAR_2) {
  VAR_31 |= VAR_10;
  VAR_29->automode = 1;
  VAR_27->c_cflag &= ~VAR_0;
 } else {
  VAR_31 &= ~VAR_10;
  VAR_29->automode = 0;
 }

 VAR_27->c_cflag &= ~VAR_1;

 VAR_31 |= VAR_34 << VAR_9;
 FUNC_2(VAR_31, VAR_26->membase + VAR_7);

 VAR_33 = FUNC_1(VAR_26->membase + VAR_19);
 if (VAR_33 == 0)
  VAR_33 = VAR_5;

 VAR_30 = FUNC_8(VAR_26, VAR_27, VAR_28, 0, VAR_33 / 16);

 FUNC_3(&VAR_26->lock);
 if (FUNC_6(VAR_27))
  FUNC_7(VAR_27, VAR_30, VAR_30);

 VAR_32 = VAR_33 / (4 * VAR_30);
 FUNC_2(VAR_32, VAR_26->membase + VAR_6);

 FUNC_9(VAR_26, VAR_27->c_cflag, VAR_30);
 FUNC_4(&VAR_26->lock);
}
