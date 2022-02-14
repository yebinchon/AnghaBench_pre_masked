
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct uart_port {unsigned long uartclk; int status; scalar_t__ membase; int private_data; } ;
struct lpss8250 {TYPE_1__* board; } ;
struct ktermios {int c_cflag; } ;
struct TYPE_2__ {unsigned long freq; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (unsigned long,unsigned long,unsigned long,unsigned long,unsigned long*,unsigned long*) ;
 unsigned long FUNC_2 (unsigned long) ;
 int FUNC_3 (struct uart_port*,struct ktermios*,struct ktermios*) ;
 struct lpss8250* FUNC_4 (int ) ;
 unsigned int FUNC_5 (struct ktermios*) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct uart_port *VAR_7, struct ktermios *VAR_8,
       struct ktermios *VAR_9)
{
 unsigned int VAR_10 = FUNC_5(VAR_8);
 struct lpss8250 *VAR_11 = FUNC_4(VAR_7->private_data);
 unsigned long VAR_12 = VAR_11->board->freq, VAR_13 = VAR_10 * 16;
 unsigned long VAR_14 = FUNC_0(15) - 1;
 unsigned long VAR_15, VAR_16;
 u32 VAR_17;


 VAR_13 = VAR_13 ? VAR_13 : 9600 * 16;


 VAR_13 *= FUNC_2(VAR_12 / VAR_13);







 FUNC_1(VAR_13, VAR_12, VAR_14, VAR_14, &VAR_15, &VAR_16);
 VAR_7->uartclk = VAR_13;


 VAR_17 = (VAR_15 << VAR_2) | (VAR_16 << VAR_3);
 FUNC_6(VAR_17, VAR_7->membase + VAR_0);
 VAR_17 |= VAR_1 | VAR_4;
 FUNC_6(VAR_17, VAR_7->membase + VAR_0);

 VAR_7->status &= ~VAR_6;
 if (VAR_8->c_cflag & VAR_5)
  VAR_7->status |= VAR_6;

 FUNC_3(VAR_7, VAR_8, VAR_9);
}
