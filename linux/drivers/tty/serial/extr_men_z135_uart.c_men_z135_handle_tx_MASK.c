
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int tx; } ;
struct uart_port {TYPE_3__ icount; scalar_t__ membase; scalar_t__ x_char; TYPE_1__* state; } ;
struct men_z135_port {TYPE_2__* mdev; struct uart_port port; } ;
struct circ_buf {int head; int tail; int * buf; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {struct circ_buf xmit; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int *,char*,int,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (scalar_t__,int *,int) ;
 int FUNC_5 (struct men_z135_port*,int ,int ) ;
 int FUNC_6 (struct men_z135_port*,int ,int ) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (struct circ_buf*) ;
 scalar_t__ FUNC_9 (struct circ_buf*) ;
 scalar_t__ FUNC_10 (struct uart_port*) ;
 int FUNC_11 (struct uart_port*) ;

__attribute__((used)) static void FUNC_12(struct men_z135_port *VAR_8)
{
 struct uart_port *VAR_9 = &VAR_8->port;
 struct circ_buf *VAR_10 = &VAR_9->state->xmit;
 u32 VAR_11;
 u32 VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;

 if (FUNC_9(VAR_10))
  goto out;

 if (FUNC_10(VAR_9))
  goto out;

 if (VAR_9->x_char)
  goto out;


 VAR_13 = FUNC_8(VAR_10);
 if (VAR_13 <= 0)
  goto out;

 VAR_12 = FUNC_2(VAR_9->membase + VAR_3);
 VAR_11 = (VAR_12 >> 16) & 0x3ff;
 VAR_12 &= 0x3ff;

 if (VAR_11 > VAR_1)
  VAR_11 = VAR_1;

 VAR_15 = VAR_1 - VAR_11;
 if (VAR_15 <= 0) {
  FUNC_1(&VAR_8->mdev->dev,
   "Not enough room in TX FIFO have %d, need %d\n",
   VAR_15, VAR_13);
  goto irq_en;
 }




 if (VAR_7 && VAR_13 >= 3 && FUNC_0(VAR_12))
  VAR_14 = 4 - FUNC_0(VAR_12);
 else if (VAR_13 > VAR_15)
  VAR_14 = VAR_15;
 else
  VAR_14 = VAR_13;

 if (VAR_14 <= 0)
  goto irq_en;

 VAR_16 = VAR_10->head & (VAR_5 - 1);
 VAR_17 = VAR_10->tail & (VAR_5 - 1);

 VAR_18 = ((VAR_16 >= VAR_17) ? VAR_16 : VAR_5) - VAR_17;
 VAR_14 = FUNC_7(VAR_14, VAR_18);

 FUNC_4(VAR_9->membase + VAR_4, &VAR_10->buf[VAR_10->tail], VAR_14);
 VAR_10->tail = (VAR_10->tail + VAR_14) & (VAR_5 - 1);

 FUNC_3(VAR_14 & 0x3ff, VAR_9->membase + VAR_3);

 VAR_9->icount.tx += VAR_14;

 if (FUNC_8(VAR_10) < VAR_6)
  FUNC_11(VAR_9);

irq_en:
 if (!FUNC_9(VAR_10))
  FUNC_6(VAR_8, VAR_0, VAR_2);
 else
  FUNC_5(VAR_8, VAR_0, VAR_2);

out:
 return;

}
