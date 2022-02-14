
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tx; } ;
struct uart_port {scalar_t__ membase; TYPE_1__ icount; TYPE_2__* state; } ;
struct circ_buf {unsigned char* buf; size_t tail; } ;
struct TYPE_4__ {struct circ_buf xmit; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct uart_port*) ;
 unsigned long FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct circ_buf*) ;
 scalar_t__ FUNC_3 (struct circ_buf*) ;
 int FUNC_4 (struct uart_port*) ;
 int FUNC_5 (unsigned char,scalar_t__) ;
 int FUNC_6 (unsigned long,scalar_t__) ;

__attribute__((used)) static inline void FUNC_7(struct uart_port *VAR_5)
{
 struct circ_buf *VAR_6 = &VAR_5->state->xmit;
 unsigned char VAR_7;
 unsigned long VAR_8;

 while (!FUNC_3(VAR_6)) {
  VAR_7 = VAR_6->buf[VAR_6->tail];
  FUNC_5(VAR_7, VAR_5->membase + VAR_0);


  while (((VAR_8 = FUNC_1(VAR_5->membase + VAR_2)) &
     VAR_1) !=
     VAR_1)
   ;

  VAR_6->tail = (VAR_6->tail + 1) & (VAR_3 - 1);
  VAR_5->icount.tx++;

  FUNC_6(VAR_8 | VAR_1,
         VAR_5->membase + VAR_2);
 }

 if (FUNC_2(VAR_6) < VAR_4)
  FUNC_4(VAR_5);

 if (FUNC_3(VAR_6))
  FUNC_0(VAR_5);
}
