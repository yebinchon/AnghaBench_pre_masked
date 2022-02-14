
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_8__ {TYPE_1__* state; } ;
struct jsm_channel {int ch_flags; int ch_cached_lsr; int ch_t_tlevel; TYPE_4__ uart_port; scalar_t__ ch_txcount; TYPE_3__* ch_neo_uart; TYPE_2__* ch_bd; } ;
struct circ_buf {size_t tail; int head; int * buf; } ;
struct TYPE_7__ {int txrxburst; int txrx; int lsr; } ;
struct TYPE_6__ {int pci_dev; } ;
struct TYPE_5__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int *,char*,int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct circ_buf*) ;
 scalar_t__ FUNC_5 (struct circ_buf*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(struct jsm_channel *VAR_9)
{
 u16 VAR_10;
 u16 VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 u32 VAR_15 = 0;
 struct circ_buf *VAR_16;

 if (!VAR_9)
  return;

 VAR_16 = &VAR_9->uart_port.state->xmit;


 if (FUNC_5(VAR_16))
  return;


 if ((VAR_9->ch_flags & VAR_2) || (VAR_9->ch_flags & VAR_0))
  return;



 if (!(VAR_9->ch_flags & VAR_1)) {
  u8 VAR_17 = FUNC_3(&VAR_9->ch_neo_uart->lsr);

  VAR_9->ch_cached_lsr |= VAR_17;
  if (VAR_9->ch_cached_lsr & VAR_6) {
   VAR_9->ch_cached_lsr &= ~(VAR_6);

   FUNC_7(VAR_16->buf[VAR_16->tail], &VAR_9->ch_neo_uart->txrx);
   FUNC_0(VAR_8, &VAR_9->ch_bd->pci_dev,
    "Tx data: %x\n", VAR_16->buf[VAR_16->tail]);
   VAR_16->tail = (VAR_16->tail + 1) & (VAR_7 - 1);
   VAR_9->ch_txcount++;
  }
  return;
 }




 if (!(VAR_9->ch_flags & (VAR_3 | VAR_4)))
  return;

 VAR_12 = VAR_5 - VAR_9->ch_t_tlevel;


 VAR_10 = VAR_16->head & (VAR_7 - 1);
 VAR_11 = VAR_16->tail & (VAR_7 - 1);
 VAR_14 = FUNC_4(VAR_16);


 VAR_12 = FUNC_2(VAR_12, VAR_14);

 while (VAR_12 > 0) {

  VAR_13 = ((VAR_10 >= VAR_11) ? VAR_10 : VAR_7) - VAR_11;
  VAR_13 = FUNC_2(VAR_13, VAR_12);

  if (VAR_13 <= 0)
   break;

  FUNC_1(&VAR_9->ch_neo_uart->txrxburst, VAR_16->buf + VAR_11, VAR_13);

  VAR_11 = (VAR_11 + VAR_13) & (VAR_7 - 1);
  VAR_12 -= VAR_13;
  VAR_9->ch_txcount += VAR_13;
  VAR_15 += VAR_13;
 }


 VAR_16->tail = VAR_11 & (VAR_7 - 1);

 if (VAR_15 >= VAR_9->ch_t_tlevel)
  VAR_9->ch_flags &= ~(VAR_3 | VAR_4);

 if (FUNC_5(VAR_16))
  FUNC_6(&VAR_9->uart_port);
}
