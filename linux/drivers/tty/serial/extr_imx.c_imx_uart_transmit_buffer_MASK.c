
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int tx; } ;
struct TYPE_8__ {int x_char; TYPE_2__ icount; TYPE_1__* state; } ;
struct imx_port {TYPE_3__ port; scalar_t__ dma_is_txing; scalar_t__ dma_is_enabled; } ;
struct circ_buf {int* buf; size_t tail; } ;
struct TYPE_6__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct imx_port*) ;
 int FUNC_1 (struct imx_port*,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (struct imx_port*) ;
 int FUNC_4 (struct imx_port*,int,int ) ;
 scalar_t__ FUNC_5 (struct circ_buf*) ;
 scalar_t__ FUNC_6 (struct circ_buf*) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;

__attribute__((used)) static inline void FUNC_9(struct imx_port *VAR_7)
{
 struct circ_buf *VAR_8 = &VAR_7->port.state->xmit;

 if (VAR_7->port.x_char) {

  FUNC_4(VAR_7, VAR_7->port.x_char, VAR_4);
  VAR_7->port.icount.tx++;
  VAR_7->port.x_char = 0;
  return;
 }

 if (FUNC_6(VAR_8) || FUNC_7(&VAR_7->port)) {
  FUNC_2(&VAR_7->port);
  return;
 }

 if (VAR_7->dma_is_enabled) {
  u32 VAR_9;




  VAR_9 = FUNC_1(VAR_7, VAR_1);
  VAR_9 &= ~VAR_2;
  if (VAR_7->dma_is_txing) {
   VAR_9 |= VAR_3;
   FUNC_4(VAR_7, VAR_9, VAR_1);
  } else {
   FUNC_4(VAR_7, VAR_9, VAR_1);
   FUNC_0(VAR_7);
  }

  return;
 }

 while (!FUNC_6(VAR_8) &&
        !(FUNC_1(VAR_7, FUNC_3(VAR_7)) & VAR_5)) {


  FUNC_4(VAR_7, VAR_8->buf[VAR_8->tail], VAR_4);
  VAR_8->tail = (VAR_8->tail + 1) & (VAR_0 - 1);
  VAR_7->port.icount.tx++;
 }

 if (FUNC_5(VAR_8) < VAR_6)
  FUNC_8(&VAR_7->port);

 if (FUNC_6(VAR_8))
  FUNC_2(&VAR_7->port);
}
