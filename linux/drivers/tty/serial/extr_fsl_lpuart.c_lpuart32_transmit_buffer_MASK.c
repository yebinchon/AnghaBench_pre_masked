
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int tx; } ;
struct TYPE_10__ {TYPE_2__ icount; scalar_t__ x_char; TYPE_1__* state; } ;
struct lpuart_port {unsigned long txfifo_size; TYPE_3__ port; } ;
struct circ_buf {size_t tail; scalar_t__* buf; } ;
struct TYPE_8__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned long FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (struct circ_buf*) ;
 scalar_t__ FUNC_5 (struct circ_buf*) ;
 int FUNC_6 (TYPE_3__*) ;

__attribute__((used)) static inline void FUNC_7(struct lpuart_port *VAR_6)
{
 struct circ_buf *VAR_7 = &VAR_6->port.state->xmit;
 unsigned long VAR_8;

 if (VAR_6->port.x_char) {
  FUNC_2(&VAR_6->port, VAR_6->port.x_char, VAR_0);
  VAR_6->port.icount.tx++;
  VAR_6->port.x_char = 0;
  return;
 }

 if (FUNC_3(&VAR_6->port)) {
  FUNC_1(&VAR_6->port);
  return;
 }

 VAR_8 = FUNC_0(&VAR_6->port, VAR_1);
 VAR_8 = VAR_8 >> VAR_3;
 VAR_8 &= VAR_2;
 while (!FUNC_5(VAR_7) && (VAR_8 < VAR_6->txfifo_size)) {
  FUNC_2(&VAR_6->port, VAR_7->buf[VAR_7->tail], VAR_0);
  VAR_7->tail = (VAR_7->tail + 1) & (VAR_4 - 1);
  VAR_6->port.icount.tx++;
  VAR_8 = FUNC_0(&VAR_6->port, VAR_1);
  VAR_8 = VAR_8 >> VAR_3;
  VAR_8 &= VAR_2;
 }

 if (FUNC_4(VAR_7) < VAR_5)
  FUNC_6(&VAR_6->port);

 if (FUNC_5(VAR_7))
  FUNC_1(&VAR_6->port);
}
