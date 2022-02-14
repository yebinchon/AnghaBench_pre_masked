
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long tx; } ;
struct uart_port {TYPE_1__ icount; } ;
struct circ_buf {unsigned long tail; int head; scalar_t__ buf; } ;


 unsigned long FUNC_0 (int ,unsigned long,int) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_1 (scalar_t__) ;
 unsigned long FUNC_2 (unsigned long,unsigned long,unsigned long*) ;
 int FUNC_3 (struct circ_buf*) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_2, struct circ_buf *VAR_3)
{
 while (!FUNC_3(VAR_3)) {
  unsigned long VAR_4 = FUNC_1(VAR_3->buf + VAR_3->tail);
  unsigned long VAR_5, VAR_6, VAR_7;

  VAR_5 = FUNC_0(VAR_3->head, VAR_3->tail,
          VAR_1);
  VAR_6 = FUNC_2(VAR_4, VAR_5, &VAR_7);
  if (VAR_6 != VAR_0)
   break;
  VAR_3->tail = (VAR_3->tail + VAR_7) & (VAR_1 - 1);
  VAR_2->icount.tx += VAR_7;
 }
}
