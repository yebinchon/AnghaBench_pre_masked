
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ixgbe_adv_rx_desc {int dummy; } ixgbe_adv_rx_desc ;
struct xdp_buff {unsigned int data_end; unsigned int data; unsigned int data_hard_start; } ;
struct sk_buff {int dev; } ;
struct ixgbevf_rx_buffer {unsigned int page_offset; int pagecnt_bias; int page; } ;
struct ixgbevf_ring {TYPE_1__* q_vector; } ;
struct TYPE_2__ {int napi; } ;


 int FUNC_0 (unsigned int,int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct sk_buff*,unsigned int) ;
 unsigned int FUNC_3 (int ,unsigned int,unsigned int) ;
 int FUNC_4 (struct ixgbevf_ring*) ;
 int FUNC_5 (int ,unsigned int,int ) ;
 struct sk_buff* FUNC_6 (int *,unsigned int) ;
 unsigned int FUNC_7 (int ) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (struct sk_buff*,int ,int ,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static
struct sk_buff *FUNC_11(struct ixgbevf_ring *VAR_2,
          struct ixgbevf_rx_buffer *VAR_3,
          struct xdp_buff *VAR_4,
          union ixgbe_adv_rx_desc *VAR_5)
{
 unsigned int VAR_6 = VAR_4->data_end - VAR_4->data;

 unsigned int VAR_7 = FUNC_4(VAR_2) / 2;




 unsigned int VAR_8;
 struct sk_buff *VAR_9;


 FUNC_8(VAR_4->data);

 FUNC_8(VAR_4->data + VAR_1);
 VAR_9 = FUNC_6(&VAR_2->q_vector->napi, VAR_0);
 if (FUNC_10(!VAR_9))
  return ((void*)0);


 VAR_8 = VAR_6;
 if (VAR_8 > VAR_0)
  VAR_8 = FUNC_3(VAR_9->dev, VAR_4->data,
       VAR_0);


 FUNC_5(FUNC_2(VAR_9, VAR_8), VAR_4->data,
        FUNC_0(VAR_8, sizeof(long)));


 VAR_6 -= VAR_8;
 if (VAR_6) {
  FUNC_9(VAR_9, 0, VAR_3->page,
    (VAR_4->data + VAR_8) -
     FUNC_7(VAR_3->page),
    VAR_6, VAR_7);

  VAR_3->page_offset ^= VAR_7;



 } else {
  VAR_3->pagecnt_bias++;
 }

 return VAR_9;
}
