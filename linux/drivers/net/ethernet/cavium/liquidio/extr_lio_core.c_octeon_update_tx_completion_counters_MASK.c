
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; } ;
struct octnet_buf_free_info {struct sk_buff* skb; } ;
struct octeon_soft_command {struct sk_buff* callback_arg; } ;







void FUNC_0(void *VAR_0, int VAR_1,
       unsigned int *VAR_2,
       unsigned int *VAR_3)
{
 struct octnet_buf_free_info *VAR_4;
 struct sk_buff *VAR_5 = ((void*)0);
 struct octeon_soft_command *VAR_6;

 switch (VAR_1) {
 case 131:
 case 130:
  VAR_4 = VAR_0;
  VAR_5 = VAR_4->skb;
  break;

 case 128:
 case 129:
  VAR_6 = VAR_0;
  VAR_5 = VAR_6->callback_arg;
  break;

 default:
  return;
 }

 (*VAR_2)++;
 *VAR_3 += VAR_5->len;
}
