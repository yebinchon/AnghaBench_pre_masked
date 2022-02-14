
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct can_rx_offload_cb {int timestamp; } ;


 struct can_rx_offload_cb* FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_0, struct sk_buff *VAR_1)
{
 const struct can_rx_offload_cb *VAR_2, *VAR_3;

 VAR_2 = FUNC_0(VAR_0);
 VAR_3 = FUNC_0(VAR_1);




 return VAR_3->timestamp - VAR_2->timestamp;
}
