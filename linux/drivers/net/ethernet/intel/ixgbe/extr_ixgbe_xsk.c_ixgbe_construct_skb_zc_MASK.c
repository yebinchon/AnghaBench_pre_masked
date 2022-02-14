
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdp_buff {unsigned int data; unsigned int data_meta; unsigned int data_end; unsigned int data_hard_start; } ;
struct sk_buff {int dummy; } ;
struct ixgbe_rx_buffer {int dummy; } ;
struct ixgbe_ring {TYPE_1__* q_vector; } ;
struct TYPE_2__ {int napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int *,unsigned int,int) ;
 int FUNC_1 (struct sk_buff*,unsigned int) ;
 int FUNC_2 (struct ixgbe_ring*,struct ixgbe_rx_buffer*) ;
 int FUNC_3 (int ,unsigned int,unsigned int) ;
 int FUNC_4 (struct sk_buff*,unsigned int) ;
 int FUNC_5 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_7(struct ixgbe_ring *VAR_2,
           struct ixgbe_rx_buffer *VAR_3,
           struct xdp_buff *VAR_4)
{
 unsigned int VAR_5 = VAR_4->data - VAR_4->data_meta;
 unsigned int VAR_6 = VAR_4->data_end - VAR_4->data;
 struct sk_buff *VAR_7;


 VAR_7 = FUNC_0(&VAR_2->q_vector->napi,
          VAR_4->data_end - VAR_4->data_hard_start,
          VAR_0 | VAR_1);
 if (FUNC_6(!VAR_7))
  return ((void*)0);

 FUNC_5(VAR_7, VAR_4->data - VAR_4->data_hard_start);
 FUNC_3(FUNC_1(VAR_7, VAR_6), VAR_4->data, VAR_6);
 if (VAR_5)
  FUNC_4(VAR_7, VAR_5);

 FUNC_2(VAR_2, VAR_3);
 return VAR_7;
}
