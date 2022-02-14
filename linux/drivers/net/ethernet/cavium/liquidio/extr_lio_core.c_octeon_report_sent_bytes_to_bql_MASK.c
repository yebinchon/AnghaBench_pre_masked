
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int dev; } ;
struct octnet_buf_free_info {struct sk_buff* skb; } ;
struct octeon_soft_command {struct sk_buff* callback_arg; } ;
struct netdev_queue {int dummy; } ;






 struct netdev_queue* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct netdev_queue*,int ) ;
 int FUNC_2 (struct netdev_queue*) ;
 int FUNC_3 (struct sk_buff*) ;

int FUNC_4(void *VAR_0, int VAR_1)
{
 struct octnet_buf_free_info *VAR_2;
 struct sk_buff *VAR_3;
 struct octeon_soft_command *VAR_4;
 struct netdev_queue *VAR_5;

 switch (VAR_1) {
 case 131:
 case 130:
  VAR_2 = VAR_0;
  VAR_3 = VAR_2->skb;
  break;

 case 128:
 case 129:
  VAR_4 = VAR_0;
  VAR_3 = VAR_4->callback_arg;
  break;

 default:
  return 0;
 }

 VAR_5 = FUNC_0(VAR_3->dev, FUNC_3(VAR_3));
 FUNC_1(VAR_5, VAR_3->len);

 return FUNC_2(VAR_5);
}
