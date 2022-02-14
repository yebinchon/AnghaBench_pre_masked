
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int data; int len; int data_len; unsigned int truesize; int protocol; } ;
struct efx_rx_buffer {int len; int page_offset; int * page; } ;
struct efx_nic {int rx_ip_align; int rx_prefix_size; unsigned int rx_buffer_truesize; int net_dev; int rx_buffer_order; int n_rx_noskb_drops; } ;
struct efx_channel {int napi_str; int rx_queue; struct efx_nic* efx; } ;
struct TYPE_2__ {unsigned int nr_frags; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (int *) ;
 struct efx_rx_buffer* FUNC_4 (int *,struct efx_rx_buffer*) ;
 int FUNC_5 (struct sk_buff*,int ) ;
 int FUNC_6 (int,int *,int) ;
 struct sk_buff* FUNC_7 (int ,int) ;
 int FUNC_8 (struct sk_buff*,unsigned int,int *,int,int) ;
 int FUNC_9 (struct sk_buff*,int *) ;
 int FUNC_10 (struct sk_buff*,int) ;
 TYPE_1__* FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static struct sk_buff *FUNC_13(struct efx_channel *VAR_0,
         struct efx_rx_buffer *VAR_1,
         unsigned int VAR_2,
         u8 *VAR_3, int VAR_4)
{
 struct efx_nic *VAR_5 = VAR_0->efx;
 struct sk_buff *VAR_6;


 VAR_6 = FUNC_7(VAR_5->net_dev,
          VAR_5->rx_ip_align + VAR_5->rx_prefix_size +
          VAR_4);
 if (FUNC_12(VAR_6 == ((void*)0))) {
  FUNC_3(&VAR_5->n_rx_noskb_drops);
  return ((void*)0);
 }

 FUNC_0(VAR_1->len < VAR_4);

 FUNC_6(VAR_6->data + VAR_5->rx_ip_align, VAR_3 - VAR_5->rx_prefix_size,
        VAR_5->rx_prefix_size + VAR_4);
 FUNC_10(VAR_6, VAR_5->rx_ip_align + VAR_5->rx_prefix_size);
 FUNC_2(VAR_6, VAR_4);


 if (VAR_1->len > VAR_4) {
  VAR_1->page_offset += VAR_4;
  VAR_1->len -= VAR_4;

  for (;;) {
   FUNC_8(VAR_6, FUNC_11(VAR_6)->nr_frags,
        VAR_1->page, VAR_1->page_offset,
        VAR_1->len);
   VAR_1->page = ((void*)0);
   VAR_6->len += VAR_1->len;
   VAR_6->data_len += VAR_1->len;
   if (FUNC_11(VAR_6)->nr_frags == VAR_2)
    break;

   VAR_1 = FUNC_4(&VAR_0->rx_queue, VAR_1);
  }
 } else {
  FUNC_1(VAR_1->page, VAR_5->rx_buffer_order);
  VAR_1->page = ((void*)0);
  VAR_2 = 0;
 }

 VAR_6->truesize += VAR_2 * VAR_5->rx_buffer_truesize;


 VAR_6->protocol = FUNC_5(VAR_6, VAR_5->net_dev);

 FUNC_9(VAR_6, &VAR_0->napi_str);

 return VAR_6;
}
