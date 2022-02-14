
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {int read_status_mask; int ignore_status_mask; int lock; scalar_t__ membase; } ;
struct ktermios {unsigned int c_cflag; unsigned int c_iflag; } ;


 scalar_t__ VAR_0 ;
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
 unsigned int VAR_15 ;




 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 int FUNC_0 (struct uart_port*,unsigned int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 unsigned int FUNC_4 (struct uart_port*,struct ktermios*,struct ktermios*,int,int) ;
 int FUNC_5 (struct uart_port*,unsigned int,unsigned int) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct uart_port *VAR_22,
       struct ktermios *VAR_23,
       struct ktermios *VAR_24)
{
 unsigned int VAR_25, VAR_26, VAR_27;
 unsigned long VAR_28;
 u32 VAR_29;

 FUNC_2(&VAR_22->lock, VAR_28);

 VAR_25 = VAR_23->c_cflag;
 VAR_26 = VAR_23->c_iflag;

 VAR_29 = FUNC_1(VAR_22->membase + VAR_0);

 VAR_29 &= ~VAR_5;
 switch (VAR_25 & VAR_16) {
 case 128:
  VAR_29 |= VAR_4;
  break;
 case 129:
  VAR_29 |= VAR_3;
  break;
 case 130:
  VAR_29 |= VAR_2;
  break;
 case 131:
  VAR_29 |= VAR_1;
  break;
 }

 if (VAR_25 & VAR_20)
  VAR_29 |= VAR_7;
 else
  VAR_29 &= ~VAR_7;

 if (VAR_25 & VAR_21)
  VAR_29 |= VAR_9;
 else
  VAR_29 &= ~VAR_9;

 VAR_29 &= ~VAR_12;
 if (VAR_25 & VAR_17)
  VAR_29 |= VAR_11;
 else
  VAR_29 |= VAR_10;

 if (VAR_25 & VAR_15)
  VAR_29 &= ~VAR_13;
 else
  VAR_29 |= VAR_13;

 FUNC_6(VAR_29, VAR_22->membase + VAR_0);

 VAR_27 = FUNC_4(VAR_22, VAR_23, VAR_24, 50, 4000000);
 FUNC_0(VAR_22, VAR_27);

 VAR_22->read_status_mask = VAR_14;
 if (VAR_26 & VAR_19)
  VAR_22->read_status_mask |= VAR_8 |
       VAR_6;

 VAR_22->ignore_status_mask = 0;
 if (VAR_26 & VAR_18)
  VAR_22->ignore_status_mask |= VAR_8 |
         VAR_6;

 FUNC_5(VAR_22, VAR_23->c_cflag, VAR_27);
 FUNC_3(&VAR_22->lock, VAR_28);
}
