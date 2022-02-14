
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ixgbe_adv_rx_desc {int dummy; } ixgbe_adv_rx_desc ;
struct xdp_buff {unsigned int data_end; unsigned int data; unsigned int data_hard_start; } ;
struct sk_buff {int dummy; } ;
struct ixgbe_rx_buffer {unsigned int page_offset; int pagecnt_bias; int page; int dma; } ;
struct ixgbe_ring {TYPE_1__* q_vector; } ;
struct TYPE_4__ {int dma; } ;
struct TYPE_3__ {int napi; } ;


 int FUNC_0 (unsigned int,int) ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct sk_buff*,unsigned int) ;
 int FUNC_4 (struct ixgbe_ring*) ;
 int FUNC_5 (union ixgbe_adv_rx_desc*,int ) ;
 int FUNC_6 (int ,unsigned int,int ) ;
 struct sk_buff* FUNC_7 (int *,unsigned int) ;
 unsigned int FUNC_8 (int ) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (struct sk_buff*,int ,int ,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_12(struct ixgbe_ring *VAR_3,
        struct ixgbe_rx_buffer *VAR_4,
        struct xdp_buff *VAR_5,
        union ixgbe_adv_rx_desc *VAR_6)
{
 unsigned int VAR_7 = VAR_5->data_end - VAR_5->data;

 unsigned int VAR_8 = FUNC_4(VAR_3) / 2;




 struct sk_buff *VAR_9;


 FUNC_9(VAR_5->data);

 FUNC_9(VAR_5->data + VAR_2);
 VAR_9 = FUNC_7(&VAR_3->q_vector->napi, VAR_1);
 if (FUNC_11(!VAR_9))
  return ((void*)0);

 if (VAR_7 > VAR_1) {
  if (!FUNC_5(VAR_6, VAR_0))
   FUNC_1(VAR_9)->dma = VAR_4->dma;

  FUNC_10(VAR_9, 0, VAR_4->page,
    VAR_5->data - FUNC_8(VAR_4->page),
    VAR_7, VAR_8);

  VAR_4->page_offset ^= VAR_8;



 } else {
  FUNC_6(FUNC_3(VAR_9, VAR_7),
         VAR_5->data, FUNC_0(VAR_7, sizeof(long)));
  VAR_4->pagecnt_bias++;
 }

 return VAR_9;
}
