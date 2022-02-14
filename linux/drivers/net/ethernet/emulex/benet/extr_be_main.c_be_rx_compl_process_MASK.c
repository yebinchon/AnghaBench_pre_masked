
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int csum_level; int protocol; int ip_summed; } ;
struct net_device {int features; } ;
struct napi_struct {int dummy; } ;
struct be_rx_obj {struct be_adapter* adapter; } ;
struct be_rx_compl_info {int vlan_tag; scalar_t__ vlanf; int tunneled; int rss_hash; } ;
struct be_adapter {struct be_rx_obj* rx_obj; struct net_device* netdev; } ;
struct TYPE_2__ {int rx_drops_no_skbs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (struct be_rx_obj*,struct be_rx_compl_info*) ;
 scalar_t__ FUNC_2 (struct be_rx_compl_info*) ;
 int FUNC_3 (struct sk_buff*,struct net_device*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;
 struct sk_buff* FUNC_6 (struct net_device*,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 TYPE_1__* FUNC_8 (struct be_rx_obj*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct be_rx_obj*,struct sk_buff*,struct be_rx_compl_info*) ;
 int FUNC_11 (struct sk_buff*,struct napi_struct*) ;
 int FUNC_12 (struct sk_buff*,int) ;
 int FUNC_13 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static void FUNC_15(struct be_rx_obj *VAR_6, struct napi_struct *VAR_7,
    struct be_rx_compl_info *VAR_8)
{
 struct be_adapter *VAR_9 = VAR_6->adapter;
 struct net_device *VAR_10 = VAR_9->netdev;
 struct sk_buff *VAR_11;

 VAR_11 = FUNC_6(VAR_10, VAR_0);
 if (FUNC_14(!VAR_11)) {
  FUNC_8(VAR_6)->rx_drops_no_skbs++;
  FUNC_1(VAR_6, VAR_8);
  return;
 }

 FUNC_10(VAR_6, VAR_11, VAR_8);

 if (FUNC_5((VAR_10->features & VAR_3) && FUNC_2(VAR_8)))
  VAR_11->ip_summed = VAR_1;
 else
  FUNC_9(VAR_11);

 VAR_11->protocol = FUNC_3(VAR_11, VAR_10);
 FUNC_12(VAR_11, VAR_6 - &VAR_9->rx_obj[0]);
 if (VAR_10->features & VAR_4)
  FUNC_13(VAR_11, VAR_8->rss_hash, VAR_5);

 VAR_11->csum_level = VAR_8->tunneled;
 FUNC_11(VAR_11, VAR_7);

 if (VAR_8->vlanf)
  FUNC_0(VAR_11, FUNC_4(VAR_2), VAR_8->vlan_tag);

 FUNC_7(VAR_11);
}
