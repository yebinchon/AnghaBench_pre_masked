
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rtllib_device {scalar_t__ (* check_nic_enough_desc ) (struct net_device*,int) ;int (* softmac_data_hard_start_xmit ) (struct sk_buff*,struct net_device*,int ) ;int * skb_waitQ; } ;
struct r8192_priv {struct rtllib_device* rtllib; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;
 struct sk_buff* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct net_device*,int) ;
 int FUNC_4 (struct sk_buff*,struct net_device*,int ) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_2)
{
 struct r8192_priv *VAR_3 = FUNC_0(VAR_2);
 struct rtllib_device *VAR_4 = VAR_3->rtllib;
 struct sk_buff *VAR_5;
 int VAR_6;

 for (VAR_6 = VAR_0;
      VAR_6 < VAR_1; VAR_6++) {
  while ((!FUNC_2(&VAR_4->skb_waitQ[VAR_6])) &&
  (VAR_3->rtllib->check_nic_enough_desc(VAR_2, VAR_6) > 0)) {
   VAR_5 = FUNC_1(&VAR_4->skb_waitQ[VAR_6]);
   VAR_4->softmac_data_hard_start_xmit(VAR_5, VAR_2, 0);
  }
 }
}
