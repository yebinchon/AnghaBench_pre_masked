
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {scalar_t__ iftype; } ;
struct wil_ring {int size; int va; } ;
struct wil6210_priv {struct wil_ring ring_rx; struct net_device* main_ndev; } ;
struct sk_buff {int protocol; int pkt_type; int ip_summed; struct net_device* dev; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct wil6210_priv*,char*) ;
 int FUNC_4 (struct wil6210_priv*,char*) ;
 int FUNC_5 (struct sk_buff*,struct net_device*) ;
 int FUNC_6 (struct wil6210_priv*,int ) ;
 int FUNC_7 (struct wil6210_priv*,struct sk_buff*) ;
 struct sk_buff* FUNC_8 (struct wil6210_priv*,struct wil_ring*) ;

void FUNC_9(struct wil6210_priv *VAR_4, int *VAR_5)
{
 struct net_device *VAR_6 = VAR_4->main_ndev;
 struct wireless_dev *VAR_7 = VAR_6->ieee80211_ptr;
 struct wil_ring *VAR_8 = &VAR_4->ring_rx;
 struct sk_buff *VAR_9;

 if (FUNC_2(!VAR_8->va)) {
  FUNC_4(VAR_4, "Rx IRQ while Rx not yet initialized\n");
  return;
 }
 FUNC_3(VAR_4, "rx_handle\n");
 while ((*VAR_5 > 0) && (((void*)0) != (VAR_9 = FUNC_8(VAR_4, VAR_8)))) {
  (*VAR_5)--;


  if (VAR_7->iftype == VAR_2) {
   VAR_9->dev = VAR_6;
   FUNC_1(VAR_9);
   VAR_9->ip_summed = VAR_0;
   VAR_9->pkt_type = VAR_3;
   VAR_9->protocol = FUNC_0(VAR_1);
   FUNC_5(VAR_9, VAR_6);
  } else {
   FUNC_7(VAR_4, VAR_9);
  }
 }
 FUNC_6(VAR_4, VAR_8->size);
}
