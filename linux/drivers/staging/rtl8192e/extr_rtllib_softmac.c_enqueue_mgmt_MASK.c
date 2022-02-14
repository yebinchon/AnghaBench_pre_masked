
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rtllib_device {int mgmt_queue_head; struct sk_buff** mgmt_queue_ring; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct rtllib_device *VAR_1, struct sk_buff *VAR_2)
{
 int VAR_3;

 VAR_3 = (VAR_1->mgmt_queue_head + 1) % VAR_0;







 VAR_1->mgmt_queue_head = VAR_3;
 VAR_1->mgmt_queue_ring[VAR_3] = VAR_2;

}
