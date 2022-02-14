
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct TYPE_6__ {TYPE_1__* state; } ;
struct jsm_channel {int ch_flags; scalar_t__ ch_t_tlevel; TYPE_3__ uart_port; int ch_txcount; TYPE_2__* ch_cls_uart; } ;
struct circ_buf {int tail; int * buf; } ;
struct TYPE_5__ {int txrx; } ;
struct TYPE_4__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct circ_buf*) ;
 scalar_t__ FUNC_2 (struct circ_buf*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct jsm_channel *VAR_5)
{
 u16 VAR_6;
 int VAR_7;
 int VAR_8;
 u32 VAR_9 = 0;
 struct circ_buf *VAR_10;

 if (!VAR_5)
  return;

 VAR_10 = &VAR_5->uart_port.state->xmit;


 if (FUNC_2(VAR_10))
  return;


 if ((VAR_5->ch_flags & VAR_1) || (VAR_5->ch_flags & VAR_0))
  return;


 if (!(VAR_5->ch_flags & (VAR_2 | VAR_3)))
  return;

 VAR_7 = 32;


 VAR_6 = VAR_10->tail & (VAR_4 - 1);
 VAR_8 = FUNC_1(VAR_10);


 VAR_7 = FUNC_0(VAR_7, VAR_8);

 while (VAR_7 > 0) {
  FUNC_4(VAR_10->buf[VAR_6], &VAR_5->ch_cls_uart->txrx);
  VAR_6 = (VAR_6 + 1) & (VAR_4 - 1);
  VAR_7--;
  VAR_5->ch_txcount++;
  VAR_9++;
 }


 VAR_10->tail = VAR_6 & (VAR_4 - 1);

 if (VAR_9 > VAR_5->ch_t_tlevel)
  VAR_5->ch_flags &= ~(VAR_2 | VAR_3);

 if (FUNC_2(VAR_10))
  FUNC_3(&VAR_5->uart_port);
}
