
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
typedef unsigned int u16 ;
struct sk_buff {int dummy; } ;
struct net_device {unsigned int real_num_tx_queues; } ;


 unsigned int FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static u16 FUNC_1(struct net_device *VAR_0, struct sk_buff *VAR_1,
          struct net_device *VAR_2)
{
 unsigned int VAR_3 = VAR_0->real_num_tx_queues;
 u32 VAR_4;
 u16 VAR_5;


 if (VAR_3 == 1) {
  VAR_5 = 0;
 } else {
  VAR_4 = FUNC_0(VAR_1);
  VAR_5 = VAR_4 % VAR_3;
 }

 return VAR_5;
}
