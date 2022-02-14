
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {unsigned long uartclk; scalar_t__ membase; struct mid8250* private_data; } ;
struct mid8250 {TYPE_1__* board; } ;
struct ktermios {int dummy; } ;
struct TYPE_2__ {unsigned long freq; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (unsigned long,unsigned long,unsigned long,unsigned long,unsigned long*,unsigned long*) ;
 unsigned long FUNC_2 (unsigned long) ;
 int FUNC_3 (struct uart_port*,struct ktermios*,struct ktermios*) ;
 unsigned int FUNC_4 (struct ktermios*) ;
 int FUNC_5 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct uart_port *VAR_3,
    struct ktermios *VAR_4,
    struct ktermios *VAR_5)
{
 unsigned int VAR_6 = FUNC_4(VAR_4);
 struct mid8250 *VAR_7 = VAR_3->private_data;
 unsigned short VAR_8 = 16;
 unsigned long VAR_9 = VAR_6 * VAR_8;
 unsigned long VAR_10 = FUNC_0(24) - 1;
 unsigned long VAR_11, VAR_12;


 VAR_9 = VAR_9 ? VAR_9 : 9600 * 16;

 if (VAR_7->board->freq < VAR_9) {

  if (VAR_7->board->freq > VAR_6)
   VAR_8 = VAR_7->board->freq / VAR_6;
  else
   VAR_8 = 1;
  VAR_9 = VAR_6 * VAR_8;
 } else {

  VAR_9 *= FUNC_2(VAR_7->board->freq / VAR_9);
 }

 FUNC_1(VAR_9, VAR_7->board->freq, VAR_10, VAR_10, &VAR_11, &VAR_12);
 VAR_3->uartclk = VAR_9 * 16 / VAR_8;

 FUNC_5(VAR_8, VAR_3->membase + VAR_2);
 FUNC_5(VAR_11, VAR_3->membase + VAR_1);
 FUNC_5(VAR_12, VAR_3->membase + VAR_0);

 FUNC_3(VAR_3, VAR_4, VAR_5);
}
