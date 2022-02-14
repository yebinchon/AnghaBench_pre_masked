
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct can_frame {int can_id; int* data; } ;


 struct sk_buff* FUNC_0 (struct net_device*,struct can_frame**) ;
 int FUNC_1 (struct net_device*,char*) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0, int VAR_1, int VAR_2)
{
 struct sk_buff *VAR_3;
 struct can_frame *VAR_4;

 VAR_3 = FUNC_0(VAR_0, &VAR_4);
 if (VAR_3) {
  VAR_4->can_id |= VAR_1;
  VAR_4->data[1] = VAR_2;
  FUNC_2(VAR_3);
 } else {
  FUNC_1(VAR_0, "cannot allocate error skb\n");
 }
}
