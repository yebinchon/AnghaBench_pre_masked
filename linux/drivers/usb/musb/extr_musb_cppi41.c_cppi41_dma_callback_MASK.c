
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct TYPE_6__ {scalar_t__ type; } ;
struct musb_hw_ep {TYPE_2__ ep_in; TYPE_1__* out_qh; struct musb* musb; } ;
struct TYPE_7__ {scalar_t__ speed; } ;
struct musb {int port1_status; int lock; TYPE_3__ g; } ;
struct dmaengine_result {scalar_t__ result; } ;
struct dma_tx_state {scalar_t__ residue; } ;
struct dma_channel {struct cppi41_dma_channel* private_data; } ;
struct TYPE_8__ {int (* dma_callback ) (TYPE_4__*) ;} ;
struct cppi41_dma_controller {int early_tx; int early_tx_list; TYPE_4__ controller; } ;
struct cppi41_dma_channel {scalar_t__ prog_len; scalar_t__ transferred; int total_len; scalar_t__ packet_sz; int tx_check; scalar_t__ is_tx; int cookie; int dc; struct cppi41_dma_controller* controller; struct musb_hw_ep* hw_ep; } ;
struct TYPE_5__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct cppi41_dma_channel*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,struct dma_tx_state*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long,int,int ) ;
 scalar_t__ FUNC_5 (struct musb*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct musb_hw_ep*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (struct cppi41_dma_channel*) ;
 int FUNC_12 (struct cppi41_dma_channel*) ;

__attribute__((used)) static void FUNC_13(void *VAR_6,
    const struct dmaengine_result *VAR_7)
{
 struct dma_channel *VAR_8 = VAR_6;
 struct cppi41_dma_channel *VAR_9 = VAR_8->private_data;
 struct musb_hw_ep *VAR_10 = VAR_9->hw_ep;
 struct cppi41_dma_controller *VAR_11;
 struct musb *VAR_12 = VAR_10->musb;
 unsigned long VAR_13;
 struct dma_tx_state VAR_14;
 u32 VAR_15;
 int VAR_16 = 0;
 bool VAR_17;

 VAR_11 = VAR_9->controller;
 if (VAR_11->controller.dma_callback)
  VAR_11->controller.dma_callback(&VAR_11->controller);

 if (VAR_7->result == VAR_0)
  return;

 FUNC_8(&VAR_12->lock, VAR_13);

 FUNC_2(VAR_9->dc, VAR_9->cookie,
   &VAR_14);
 VAR_15 = VAR_9->prog_len - VAR_14.residue;
 VAR_9->transferred += VAR_15;

 FUNC_11(VAR_9);
 FUNC_12(VAR_9);

 if (VAR_9->transferred == VAR_9->total_len ||
   VAR_15 < VAR_9->packet_sz)
  VAR_9->prog_len = 0;

 if (VAR_9->is_tx) {
  u8 VAR_18;

  if (FUNC_5(VAR_12))
   VAR_18 = VAR_10->out_qh->type;
  else
   VAR_18 = VAR_10->ep_in.type;

  if (VAR_18 == VAR_3)
   VAR_17 = 1;
  else
   VAR_17 = FUNC_7(VAR_10);
 }

 if (!VAR_9->is_tx || VAR_17) {
  FUNC_0(VAR_9);
  goto out;
 }
 if (FUNC_5(VAR_12)) {
  if (VAR_12->port1_status & VAR_4)
   VAR_16 = 1;
 } else {
  if (VAR_12->g.speed == VAR_5)
   VAR_16 = 1;
 }
 if (VAR_16) {
  unsigned VAR_19 = 25;

  do {
   VAR_17 = FUNC_7(VAR_10);
   if (VAR_17) {
    FUNC_0(VAR_9);
    goto out;
   }
   VAR_19--;
   if (!VAR_19)
    break;
   FUNC_1();
  } while (1);
 }
 FUNC_6(&VAR_9->tx_check,
   &VAR_11->early_tx_list);
 if (!FUNC_3(&VAR_11->early_tx)) {
  unsigned long VAR_20 = VAR_9->total_len / 10;

  FUNC_4(&VAR_11->early_tx,
           VAR_20 * VAR_2,
           20 * VAR_2,
           VAR_1);
 }

out:
 FUNC_9(&VAR_12->lock, VAR_13);
}
