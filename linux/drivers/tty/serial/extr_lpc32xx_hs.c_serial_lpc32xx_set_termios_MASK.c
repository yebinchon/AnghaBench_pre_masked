
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct uart_port {int uartclk; int lock; int membase; } ;
struct ktermios {int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int FUNC_2 (int,unsigned int) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (struct ktermios*) ;
 int FUNC_7 (struct ktermios*,unsigned int,unsigned int) ;
 unsigned int FUNC_8 (struct uart_port*,struct ktermios*,struct ktermios*,int ,int) ;
 int FUNC_9 (struct uart_port*,int,unsigned int) ;
 int FUNC_10 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_11(struct uart_port *VAR_12,
           struct ktermios *VAR_13,
           struct ktermios *VAR_14)
{
 unsigned long VAR_15;
 unsigned int VAR_16, VAR_17;
 u32 VAR_18;


 VAR_13->c_cflag &= ~(VAR_5 | VAR_6 | VAR_10 | VAR_11);
 VAR_13->c_cflag |= VAR_4;

 VAR_13->c_cflag &= ~(VAR_7 | VAR_1 | VAR_0 | VAR_3);

 VAR_16 = FUNC_8(VAR_12, VAR_13, VAR_14, 0,
      VAR_12->uartclk / 14);

 VAR_17 = FUNC_2(VAR_12->uartclk, VAR_16);

 FUNC_4(&VAR_12->lock, VAR_15);


 VAR_18 = FUNC_3(FUNC_0(VAR_12->membase));
 if ((VAR_13->c_cflag & VAR_2) == 0)
  VAR_18 &= ~(VAR_9 | VAR_8);
 else
  VAR_18 |= VAR_9 | VAR_8;
 FUNC_10(VAR_18, FUNC_0(VAR_12->membase));

 FUNC_10(VAR_17, FUNC_1(VAR_12->membase));

 FUNC_9(VAR_12, VAR_13->c_cflag, VAR_16);

 FUNC_5(&VAR_12->lock, VAR_15);


 if (FUNC_6(VAR_13))
  FUNC_7(VAR_13, VAR_16, VAR_16);
}
