
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {scalar_t__ ooo_okay; int sk; } ;
struct net_device {int real_num_tx_queues; } ;


 int FUNC_0 (struct net_device*,struct sk_buff*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static u16 FUNC_4(struct net_device *VAR_0, struct sk_buff *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1->sk);

 if (VAR_2 < 0 || VAR_1->ooo_okay || VAR_2 >= VAR_0->real_num_tx_queues) {



  if (FUNC_3(VAR_1))
   VAR_2 = FUNC_2(VAR_1);
  else
   VAR_2 = FUNC_0(VAR_0, VAR_1, VAR_2);
 }

 return VAR_2;
}
