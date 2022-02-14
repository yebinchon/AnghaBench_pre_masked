
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct ks_wlan_private {scalar_t__ dev_state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct ks_wlan_private*,struct sk_buff*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct net_device*,char*,int ) ;
 int FUNC_4 (struct net_device*,char*,...) ;
 struct ks_wlan_private* FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static
int FUNC_9(struct sk_buff *VAR_1, struct net_device *VAR_2)
{
 struct ks_wlan_private *VAR_3 = FUNC_5(VAR_2);
 int VAR_4;

 FUNC_3(VAR_2, "in_interrupt()=%ld\n", FUNC_2());

 if (!VAR_1) {
  FUNC_4(VAR_2, "ks_wlan:  skb == NULL!!!\n");
  return 0;
 }
 if (VAR_3->dev_state < VAR_0) {
  FUNC_0(VAR_1);
  return 0;
 }

 if (FUNC_6(VAR_2))
  FUNC_7(VAR_2);

 VAR_4 = FUNC_1(VAR_3, VAR_1);
 FUNC_8(VAR_2);

 if (VAR_4)
  FUNC_4(VAR_2, "hostif_data_request error: =%d\n", VAR_4);

 return 0;
}
