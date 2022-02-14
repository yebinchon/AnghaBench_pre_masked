
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {int lock; int read_status_mask; } ;
struct owl_uart_port {int dummy; } ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (struct owl_uart_port*,unsigned int) ;
 int FUNC_1 (struct uart_port*,int ) ;
 int FUNC_2 (struct uart_port*,int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct owl_uart_port* FUNC_5 (struct uart_port*) ;
 scalar_t__ FUNC_6 (struct ktermios*) ;
 int FUNC_7 (struct ktermios*,unsigned int,unsigned int) ;
 unsigned int FUNC_8 (struct uart_port*,struct ktermios*,struct ktermios*,int,int) ;
 int FUNC_9 (struct uart_port*,int,unsigned int) ;

__attribute__((used)) static void FUNC_10(struct uart_port *VAR_23,
     struct ktermios *VAR_24,
     struct ktermios *VAR_25)
{
 struct owl_uart_port *VAR_26 = FUNC_5(VAR_23);
 unsigned int VAR_27;
 u32 VAR_28;
 unsigned long VAR_29;

 FUNC_3(&VAR_23->lock, VAR_29);

 VAR_28 = FUNC_1(VAR_23, VAR_5);

 VAR_28 &= ~VAR_11;
 switch (VAR_24->c_cflag & VAR_2) {
 case 131:
  VAR_28 |= VAR_7;
  break;
 case 130:
  VAR_28 |= VAR_8;
  break;
 case 129:
  VAR_28 |= VAR_9;
  break;
 case 128:
 default:
  VAR_28 |= VAR_10;
  break;
 }

 if (VAR_24->c_cflag & VAR_3)
  VAR_28 |= VAR_18;
 else
  VAR_28 &= ~VAR_18;

 VAR_28 &= ~VAR_14;
 if (VAR_24->c_cflag & VAR_21) {
  if (VAR_24->c_cflag & VAR_0) {
   if (VAR_24->c_cflag & VAR_22)
    VAR_28 |= VAR_13;
   else
    VAR_28 |= VAR_17;
  } else if (VAR_24->c_cflag & VAR_22)
   VAR_28 |= VAR_16;
  else
   VAR_28 |= VAR_12;
 } else
  VAR_28 |= VAR_15;

 if (VAR_24->c_cflag & VAR_1)
  VAR_28 |= VAR_6;
 else
  VAR_28 &= ~VAR_6;

 FUNC_2(VAR_23, VAR_28, VAR_5);

 VAR_27 = FUNC_8(VAR_23, VAR_24, VAR_25, 9600, 3200000);
 FUNC_0(VAR_26, VAR_27);


 if (FUNC_6(VAR_24))
  FUNC_7(VAR_24, VAR_27, VAR_27);

 VAR_23->read_status_mask |= VAR_19;
 if (VAR_24->c_iflag & VAR_4)
  VAR_23->read_status_mask |= VAR_20;

 FUNC_9(VAR_23, VAR_24->c_cflag, VAR_27);

 FUNC_4(&VAR_23->lock, VAR_29);
}
