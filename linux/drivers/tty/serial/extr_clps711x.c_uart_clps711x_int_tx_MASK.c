
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int tx; } ;
struct uart_port {TYPE_2__ icount; scalar_t__ membase; int irq; scalar_t__ x_char; TYPE_1__* state; int dev; } ;
struct clps711x_port {int syscon; scalar_t__ tx_enabled; } ;
struct circ_buf {size_t tail; scalar_t__* buf; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct clps711x_port* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int*) ;
 scalar_t__ FUNC_3 (struct circ_buf*) ;
 scalar_t__ FUNC_4 (struct circ_buf*) ;
 scalar_t__ FUNC_5 (struct uart_port*) ;
 int FUNC_6 (struct uart_port*) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_6, void *VAR_7)
{
 struct uart_port *VAR_8 = VAR_7;
 struct clps711x_port *VAR_9 = FUNC_0(VAR_8->dev);
 struct circ_buf *VAR_10 = &VAR_8->state->xmit;

 if (VAR_8->x_char) {
  FUNC_7(VAR_8->x_char, VAR_8->membase + VAR_3);
  VAR_8->icount.tx++;
  VAR_8->x_char = 0;
  return VAR_0;
 }

 if (FUNC_4(VAR_10) || FUNC_5(VAR_8)) {
  if (VAR_9->tx_enabled) {
   FUNC_1(VAR_8->irq);
   VAR_9->tx_enabled = 0;
  }
  return VAR_0;
 }

 while (!FUNC_4(VAR_10)) {
  u32 VAR_11 = 0;

  FUNC_7(VAR_10->buf[VAR_10->tail], VAR_8->membase + VAR_3);
  VAR_10->tail = (VAR_10->tail + 1) & (VAR_4 - 1);
  VAR_8->icount.tx++;

  FUNC_2(VAR_9->syscon, VAR_1, &VAR_11);
  if (VAR_11 & VAR_2)
   break;
 }

 if (FUNC_3(VAR_10) < VAR_5)
  FUNC_6(VAR_8);

 return VAR_0;
}
