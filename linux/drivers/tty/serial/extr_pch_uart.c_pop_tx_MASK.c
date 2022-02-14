
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dev; TYPE_1__* state; } ;
struct eg20t_port {struct uart_port port; } ;
struct circ_buf {size_t tail; int * buf; int head; } ;
struct TYPE_2__ {struct circ_buf xmit; } ;


 int FUNC_0 (int ,size_t,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int,int,int ) ;
 int VAR_1 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct eg20t_port*,int *,int) ;
 scalar_t__ FUNC_4 (struct circ_buf*) ;
 scalar_t__ FUNC_5 (struct uart_port*) ;

__attribute__((used)) static int FUNC_6(struct eg20t_port *VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 struct uart_port *VAR_5 = &VAR_2->port;
 struct circ_buf *VAR_6 = &VAR_5->state->xmit;

 if (FUNC_5(VAR_5) || FUNC_4(VAR_6) || VAR_4 >= VAR_3)
  goto pop_tx_end;

 do {
  int VAR_7 =
      FUNC_0(VAR_6->head, VAR_6->tail, VAR_0);
  int VAR_8 = FUNC_2(VAR_3 - VAR_4, VAR_7);
  FUNC_3(VAR_2, &VAR_6->buf[VAR_6->tail], VAR_8);
  VAR_6->tail = (VAR_6->tail + VAR_8) & (VAR_0 - 1);
  VAR_4 += VAR_8;
 } while (!FUNC_4(VAR_6) && VAR_4 < VAR_3);

pop_tx_end:
 FUNC_1(VAR_2->port.dev, "%d characters. Remained %d characters.(%lu)\n",
   VAR_4, VAR_3 - VAR_4, VAR_1);

 return VAR_4;
}
