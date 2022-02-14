
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct dma_channel {scalar_t__ status; scalar_t__ actual_len; struct cppi41_dma_channel* private_data; } ;
struct cppi41_dma_channel {TYPE_5__* hw_ep; scalar_t__ is_tx; TYPE_2__* controller; } ;
typedef int dma_addr_t ;
struct TYPE_10__ {TYPE_4__* in_qh; TYPE_3__* out_qh; } ;
struct TYPE_9__ {int hb_mult; } ;
struct TYPE_8__ {int hb_mult; } ;
struct TYPE_6__ {int musb; } ;
struct TYPE_7__ {TYPE_1__ controller; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct dma_channel*,int,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct dma_channel *VAR_3,
    u16 VAR_4, u8 VAR_5,
    dma_addr_t VAR_6, u32 VAR_7)
{
 int VAR_8;
 struct cppi41_dma_channel *VAR_9 = VAR_3->private_data;
 int VAR_10 = 0;

 FUNC_0(VAR_3->status == VAR_2 ||
  VAR_3->status == VAR_0);

 if (FUNC_2(VAR_9->controller->controller.musb)) {
  if (VAR_9->is_tx)
   VAR_10 = VAR_9->hw_ep->out_qh->hb_mult;
  else
   VAR_10 = VAR_9->hw_ep->in_qh->hb_mult;
 }

 VAR_3->status = VAR_0;
 VAR_3->actual_len = 0;

 if (VAR_10)
  VAR_4 = VAR_10 * (VAR_4 & 0x7FF);

 VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 if (!VAR_8)
  VAR_3->status = VAR_1;

 return VAR_8;
}
