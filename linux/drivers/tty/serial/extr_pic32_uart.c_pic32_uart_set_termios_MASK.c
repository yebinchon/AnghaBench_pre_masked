
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int uartclk; int lock; } ;
struct pic32_sport {scalar_t__ hw_flow_ctrl; } ;
struct ktermios {int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int FUNC_2 (struct uart_port*) ;
 int FUNC_3 (struct uart_port*) ;
 int FUNC_4 (struct pic32_sport*,int ,unsigned int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct pic32_sport* FUNC_7 (struct uart_port*) ;
 scalar_t__ FUNC_8 (struct ktermios*) ;
 int FUNC_9 (struct ktermios*,unsigned int,unsigned int) ;
 unsigned int FUNC_10 (struct uart_port*,struct ktermios*,struct ktermios*,int ,int) ;
 int FUNC_11 (struct uart_port*,unsigned int) ;
 int FUNC_12 (struct uart_port*,int,unsigned int) ;

__attribute__((used)) static void FUNC_13(struct uart_port *VAR_14,
       struct ktermios *VAR_15,
       struct ktermios *VAR_16)
{
 struct pic32_sport *VAR_17 = FUNC_7(VAR_14);
 unsigned int VAR_18;
 unsigned int VAR_19;
 unsigned long VAR_20;

 FUNC_5(&VAR_14->lock, VAR_20);


 FUNC_2(VAR_14);


 if (VAR_15->c_cflag & VAR_3)
  FUNC_4(VAR_17, FUNC_1(VAR_7),
     VAR_11);
 else
  FUNC_4(VAR_17, FUNC_0(VAR_7),
     VAR_11);


 if (VAR_15->c_cflag & VAR_4) {
  if (VAR_15->c_cflag & VAR_5) {
   FUNC_4(VAR_17, FUNC_1(VAR_7),
     VAR_9);
   FUNC_4(VAR_17, FUNC_0(VAR_7),
     VAR_8);
  } else {
   FUNC_4(VAR_17, FUNC_1(VAR_7),
     VAR_8);
   FUNC_4(VAR_17, FUNC_0(VAR_7),
     VAR_9);
  }
 } else {
  FUNC_4(VAR_17, FUNC_0(VAR_7),
     VAR_9 |
     VAR_8);
 }

 if ((VAR_15->c_cflag & VAR_1) && VAR_17->hw_flow_ctrl) {

  FUNC_4(VAR_17, FUNC_1(VAR_7),
     VAR_13);
  FUNC_4(VAR_17, FUNC_0(VAR_7),
     VAR_12);
  FUNC_4(VAR_17, FUNC_0(VAR_7),
     VAR_10);
 } else {

  FUNC_4(VAR_17, FUNC_0(VAR_7),
     VAR_13);
  FUNC_4(VAR_17, FUNC_0(VAR_7),
     VAR_12);
  FUNC_4(VAR_17, FUNC_0(VAR_7),
     VAR_10);
 }


 VAR_15->c_cflag |= VAR_2;


 VAR_15->c_cflag &= ~VAR_0;


 VAR_18 = FUNC_10(VAR_14, VAR_15, VAR_16, 0, VAR_14->uartclk / 16);
 VAR_19 = FUNC_11(VAR_14, VAR_18) - 1;
 FUNC_4(VAR_17, VAR_6, VAR_19);
 FUNC_12(VAR_14, VAR_15->c_cflag, VAR_18);

 if (FUNC_8(VAR_15))
  FUNC_9(VAR_15, VAR_18, VAR_18);


 FUNC_3(VAR_14);

 FUNC_6(&VAR_14->lock, VAR_20);
}
