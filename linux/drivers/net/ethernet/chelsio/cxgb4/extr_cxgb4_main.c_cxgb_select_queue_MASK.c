
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {scalar_t__ protocol; int priority; } ;
struct net_device {int real_num_tx_queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct net_device*,struct sk_buff*,int *) ;
 int FUNC_5 (struct net_device*,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (struct sk_buff*,int*) ;

__attribute__((used)) static u16 FUNC_11(struct net_device *VAR_4, struct sk_buff *VAR_5,
        struct net_device *VAR_6)
{
 int VAR_7;
 if (VAR_3) {
  VAR_7 = (FUNC_7(VAR_5)
   ? FUNC_6(VAR_5)
   : FUNC_8());

  while (FUNC_9(VAR_7 >= VAR_4->real_num_tx_queues))
   VAR_7 -= VAR_4->real_num_tx_queues;

  return VAR_7;
 }

 return FUNC_4(VAR_4, VAR_5, ((void*)0)) % VAR_4->real_num_tx_queues;
}
