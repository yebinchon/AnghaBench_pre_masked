
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct uart_port {unsigned long uartclk; scalar_t__ membase; } ;
struct TYPE_2__ {int clk; } ;
struct qcom_geni_serial_port {unsigned int baud; int loopback; TYPE_1__ se; } ;
struct ktermios {int c_cflag; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (TYPE_1__*) ;
 unsigned long FUNC_4 (unsigned int,int,unsigned int*) ;
 int FUNC_5 (struct uart_port*) ;
 int FUNC_6 (struct uart_port*) ;
 int FUNC_7 (scalar_t__) ;
 struct qcom_geni_serial_port* FUNC_8 (struct uart_port*,struct uart_port*) ;
 int FUNC_9 (struct uart_port*) ;
 unsigned int FUNC_10 (struct uart_port*,struct ktermios*,struct ktermios*,int,int) ;
 int FUNC_11 (struct uart_port*,int,unsigned int) ;
 int FUNC_12 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_13(struct uart_port *VAR_28,
    struct ktermios *VAR_29, struct ktermios *VAR_30)
{
 unsigned int VAR_31;
 u32 VAR_32;
 u32 VAR_33;
 u32 VAR_34;
 u32 VAR_35;
 u32 VAR_36;
 u32 VAR_37;
 unsigned int VAR_38;
 u32 VAR_39;
 struct qcom_geni_serial_port *VAR_40 = FUNC_8(VAR_28, VAR_28);
 unsigned long VAR_41;
 u32 VAR_42, VAR_43;

 FUNC_6(VAR_28);

 VAR_31 = FUNC_10(VAR_28, VAR_29, VAR_30, 300, 4000000);
 VAR_40->baud = VAR_31;

 VAR_43 = VAR_25;

 VAR_42 = FUNC_3(&VAR_40->se);
 if (FUNC_0(VAR_42) >= 2 && FUNC_1(VAR_42) >= 5)
  VAR_43 /= 2;

 VAR_41 = FUNC_4(VAR_31, VAR_43, &VAR_38);
 if (!VAR_41)
  goto out_restart_rx;

 VAR_28->uartclk = VAR_41;
 FUNC_2(VAR_40->se.clk, VAR_41);
 VAR_39 = VAR_13;
 VAR_39 |= VAR_38 << VAR_0;


 VAR_33 = FUNC_7(VAR_28->membase + VAR_20);
 VAR_34 = FUNC_7(VAR_28->membase + VAR_18);
 VAR_35 = FUNC_7(VAR_28->membase + VAR_16);
 VAR_36 = FUNC_7(VAR_28->membase + VAR_15);
 if (VAR_29->c_cflag & VAR_7) {
  VAR_33 |= VAR_27;
  VAR_35 |= VAR_26;
  VAR_34 |= VAR_9;
  VAR_36 |= VAR_9;
  if (VAR_29->c_cflag & VAR_8) {
   VAR_34 |= VAR_11;
   VAR_36 |= VAR_11;
  } else if (VAR_29->c_cflag & VAR_1) {
   VAR_34 |= VAR_12;
   VAR_36 |= VAR_12;
  } else {
   VAR_34 |= VAR_10;
   VAR_36 |= VAR_10;
  }
 } else {
  VAR_33 &= ~VAR_27;
  VAR_35 &= ~VAR_26;
  VAR_34 &= ~VAR_9;
  VAR_36 &= ~VAR_9;
 }


 switch (VAR_29->c_cflag & VAR_3) {
 case 131:
  VAR_32 = 5;
  break;
 case 130:
  VAR_32 = 6;
  break;
 case 129:
  VAR_32 = 7;
  break;
 case 128:
 default:
  VAR_32 = 8;
  break;
 }


 if (VAR_29->c_cflag & VAR_4)
  VAR_37 = VAR_23;
 else
  VAR_37 = VAR_22;


 if (VAR_29->c_cflag & VAR_2)
  VAR_33 &= ~VAR_24;
 else
  VAR_33 |= VAR_24;

 if (VAR_31)
  FUNC_11(VAR_28, VAR_29->c_cflag, VAR_31);

 if (!FUNC_9(VAR_28))
  FUNC_12(VAR_40->loopback,
    VAR_28->membase + VAR_14);
 FUNC_12(VAR_33, VAR_28->membase + VAR_20);
 FUNC_12(VAR_34, VAR_28->membase + VAR_18);
 FUNC_12(VAR_35, VAR_28->membase + VAR_16);
 FUNC_12(VAR_36, VAR_28->membase + VAR_15);
 FUNC_12(VAR_32, VAR_28->membase + VAR_21);
 FUNC_12(VAR_32, VAR_28->membase + VAR_17);
 FUNC_12(VAR_37, VAR_28->membase + VAR_19);
 FUNC_12(VAR_39, VAR_28->membase + VAR_5);
 FUNC_12(VAR_39, VAR_28->membase + VAR_6);
out_restart_rx:
 FUNC_5(VAR_28);
}
