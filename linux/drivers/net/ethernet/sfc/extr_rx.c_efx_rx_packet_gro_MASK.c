
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int csum_level; unsigned int truesize; int len; int data_len; int ip_summed; } ;
struct napi_struct {int dummy; } ;
struct efx_rx_queue {int dummy; } ;
struct efx_rx_buffer {int flags; int len; int * page; int page_offset; } ;
struct efx_nic {unsigned int rx_buffer_truesize; TYPE_1__* net_dev; } ;
struct TYPE_6__ {int core_index; } ;
struct efx_channel {TYPE_3__ rx_queue; struct efx_nic* efx; struct napi_struct napi_str; } ;
struct TYPE_5__ {unsigned int nr_frags; } ;
struct TYPE_4__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct efx_rx_queue* FUNC_0 (struct efx_channel*) ;
 int FUNC_1 (struct efx_rx_queue*,struct efx_rx_buffer*,unsigned int) ;
 int FUNC_2 (struct efx_nic*,int *) ;
 struct efx_rx_buffer* FUNC_3 (TYPE_3__*,struct efx_rx_buffer*) ;
 struct sk_buff* FUNC_4 (struct napi_struct*) ;
 int FUNC_5 (struct napi_struct*) ;
 int FUNC_6 (struct sk_buff*,unsigned int,int *,int ,int ) ;
 int FUNC_7 (struct sk_buff*,int ) ;
 int FUNC_8 (struct sk_buff*,int ,int ) ;
 TYPE_2__* FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void
FUNC_11(struct efx_channel *VAR_6, struct efx_rx_buffer *VAR_7,
    unsigned int VAR_8, u8 *VAR_9)
{
 struct napi_struct *VAR_10 = &VAR_6->napi_str;
 struct efx_nic *VAR_11 = VAR_6->efx;
 struct sk_buff *VAR_12;

 VAR_12 = FUNC_4(VAR_10);
 if (FUNC_10(!VAR_12)) {
  struct efx_rx_queue *VAR_13;

  VAR_13 = FUNC_0(VAR_6);
  FUNC_1(VAR_13, VAR_7, VAR_8);
  return;
 }

 if (VAR_11->net_dev->features & VAR_4)
  FUNC_8(VAR_12, FUNC_2(VAR_11, VAR_9),
        VAR_5);
 VAR_12->ip_summed = ((VAR_7->flags & VAR_2) ?
     VAR_1 : VAR_0);
 VAR_12->csum_level = !!(VAR_7->flags & VAR_3);

 for (;;) {
  FUNC_6(VAR_12, FUNC_9(VAR_12)->nr_frags,
       VAR_7->page, VAR_7->page_offset,
       VAR_7->len);
  VAR_7->page = ((void*)0);
  VAR_12->len += VAR_7->len;
  if (FUNC_9(VAR_12)->nr_frags == VAR_8)
   break;

  VAR_7 = FUNC_3(&VAR_6->rx_queue, VAR_7);
 }

 VAR_12->data_len = VAR_12->len;
 VAR_12->truesize += VAR_8 * VAR_11->rx_buffer_truesize;

 FUNC_7(VAR_12, VAR_6->rx_queue.core_index);

 FUNC_5(VAR_10);
}
