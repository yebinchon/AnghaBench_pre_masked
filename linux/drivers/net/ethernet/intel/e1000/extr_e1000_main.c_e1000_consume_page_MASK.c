
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {int truesize; int data_len; int len; } ;
struct TYPE_2__ {int * page; } ;
struct e1000_rx_buffer {TYPE_1__ rxbuf; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct e1000_rx_buffer *VAR_1, struct sk_buff *VAR_2,
          u16 VAR_3)
{
 VAR_1->rxbuf.page = ((void*)0);
 VAR_2->len += VAR_3;
 VAR_2->data_len += VAR_3;
 VAR_2->truesize += VAR_0;
}
