
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {unsigned int truesize; int len; int data_len; int ip_summed; } ;
struct napi_struct {int dummy; } ;
struct ef4_rx_queue {int dummy; } ;
struct ef4_rx_buffer {int flags; int len; int * page; int page_offset; } ;
struct ef4_nic {unsigned int rx_buffer_truesize; TYPE_1__* net_dev; } ;
struct TYPE_6__ {int core_index; } ;
struct ef4_channel {TYPE_3__ rx_queue; struct ef4_nic* efx; struct napi_struct napi_str; } ;
struct TYPE_5__ {unsigned int nr_frags; } ;
struct TYPE_4__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ef4_rx_queue* FUNC_0 (struct ef4_channel*) ;
 int FUNC_1 (struct ef4_rx_queue*,struct ef4_rx_buffer*,unsigned int) ;
 int FUNC_2 (struct ef4_nic*,int *) ;
 struct ef4_rx_buffer* FUNC_3 (TYPE_3__*,struct ef4_rx_buffer*) ;
 struct sk_buff* FUNC_4 (struct napi_struct*) ;
 int FUNC_5 (struct napi_struct*) ;
 int FUNC_6 (struct sk_buff*,unsigned int,int *,int ,int ) ;
 int FUNC_7 (struct sk_buff*,int ) ;
 int FUNC_8 (struct sk_buff*,int ,int ) ;
 TYPE_2__* FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void
FUNC_11(struct ef4_channel *VAR_5, struct ef4_rx_buffer *VAR_6,
    unsigned int VAR_7, u8 *VAR_8)
{
 struct napi_struct *VAR_9 = &VAR_5->napi_str;
 struct ef4_nic *VAR_10 = VAR_5->efx;
 struct sk_buff *VAR_11;

 VAR_11 = FUNC_4(VAR_9);
 if (FUNC_10(!VAR_11)) {
  struct ef4_rx_queue *VAR_12;

  VAR_12 = FUNC_0(VAR_5);
  FUNC_1(VAR_12, VAR_6, VAR_7);
  return;
 }

 if (VAR_10->net_dev->features & VAR_3)
  FUNC_8(VAR_11, FUNC_2(VAR_10, VAR_8),
        VAR_4);
 VAR_11->ip_summed = ((VAR_6->flags & VAR_2) ?
     VAR_1 : VAR_0);

 for (;;) {
  FUNC_6(VAR_11, FUNC_9(VAR_11)->nr_frags,
       VAR_6->page, VAR_6->page_offset,
       VAR_6->len);
  VAR_6->page = ((void*)0);
  VAR_11->len += VAR_6->len;
  if (FUNC_9(VAR_11)->nr_frags == VAR_7)
   break;

  VAR_6 = FUNC_3(&VAR_5->rx_queue, VAR_6);
 }

 VAR_11->data_len = VAR_11->len;
 VAR_11->truesize += VAR_7 * VAR_10->rx_buffer_truesize;

 FUNC_7(VAR_11, VAR_5->rx_queue.core_index);

 FUNC_5(VAR_9);
}
