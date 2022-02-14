
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int overrun; int frame; int parity; int brk; } ;
struct uart_port {unsigned int read_status_mask; TYPE_1__ icount; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (struct uart_port*) ;

__attribute__((used)) static int FUNC_1(struct uart_port *VAR_7,
        unsigned int *VAR_8,
        unsigned int *VAR_9)
{
 int VAR_10 = 0;


 if (*VAR_9 & VAR_0) {
  *VAR_9 &= ~(VAR_1 | VAR_3);
  VAR_7->icount.brk++;
  VAR_10 = FUNC_0(VAR_7);
  if (VAR_10)
   return VAR_10;
 } else if (*VAR_9 & VAR_3)
  VAR_7->icount.parity++;
 else if (*VAR_9 & VAR_1)
  VAR_7->icount.frame++;
 if (*VAR_9 & VAR_2)
  VAR_7->icount.overrun++;


 *VAR_9 &= VAR_7->read_status_mask;
 if (*VAR_9 & VAR_0)
  *VAR_8 = VAR_4;
 else if (*VAR_9 & VAR_3)
  *VAR_8 = VAR_6;
 else if (*VAR_9 & VAR_1)
  *VAR_8 = VAR_5;

 return VAR_10;
}
