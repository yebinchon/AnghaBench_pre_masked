
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct net_device {int dummy; } ;
struct hns_nic_priv {int enet_ver; } ;
struct ethhdr {int h_dest; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*,struct sk_buff*,int *) ;
 struct hns_nic_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static u16
FUNC_4(struct net_device *VAR_0, struct sk_buff *VAR_1,
       struct net_device *VAR_2)
{
 struct ethhdr *VAR_3 = (struct ethhdr *)VAR_1->data;
 struct hns_nic_priv *VAR_4 = FUNC_3(VAR_0);


 if (!FUNC_0(VAR_4->enet_ver) &&
     FUNC_1(VAR_3->h_dest))
  return 0;
 else
  return FUNC_2(VAR_0, VAR_1, ((void*)0));
}
