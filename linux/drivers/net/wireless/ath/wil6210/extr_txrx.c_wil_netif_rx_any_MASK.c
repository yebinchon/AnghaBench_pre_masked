
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wil_net_stats {int rx_dropped; int rx_replay; } ;
struct TYPE_6__ {scalar_t__ (* rx_crypto_check ) (struct wil6210_priv*,struct sk_buff*) ;int (* rx_error_check ) (struct wil6210_priv*,struct sk_buff*,struct wil_net_stats*) ;int (* get_netif_rx_params ) (struct sk_buff*,int*,int*) ;} ;
struct wil6210_priv {TYPE_3__ txrx_ops; TYPE_1__* sta; } ;
struct sk_buff {int len; } ;
struct TYPE_5__ {int rx_dropped; } ;
struct net_device {TYPE_2__ stats; } ;
struct TYPE_4__ {struct wil_net_stats stats; } ;


 int FUNC_0 (struct sk_buff*) ;
 struct wil6210_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int*,int*) ;
 scalar_t__ FUNC_4 (struct wil6210_priv*,struct sk_buff*) ;
 int FUNC_5 (struct wil6210_priv*,struct sk_buff*,struct wil_net_stats*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct wil6210_priv*,char*,int ) ;
 int FUNC_8 (struct sk_buff*,struct net_device*,int,struct wil_net_stats*,int) ;

void FUNC_9(struct sk_buff *VAR_0, struct net_device *VAR_1)
{
 int VAR_2, VAR_3;
 struct wil6210_priv *VAR_4 = FUNC_1(VAR_1);
 struct wil_net_stats *VAR_5;

 VAR_4->txrx_ops.get_netif_rx_params(VAR_0, &VAR_2, &VAR_3);

 VAR_5 = &VAR_4->sta[VAR_2].stats;

 FUNC_2(VAR_0);

 if (VAR_3 && (VAR_4->txrx_ops.rx_crypto_check(VAR_4, VAR_0) != 0)) {
  FUNC_7(VAR_4, "Rx drop %d bytes\n", VAR_0->len);
  FUNC_0(VAR_0);
  VAR_1->stats.rx_dropped++;
  VAR_5->rx_replay++;
  VAR_5->rx_dropped++;
  return;
 }


 if (FUNC_6(VAR_4->txrx_ops.rx_error_check(VAR_4, VAR_0, VAR_5))) {
  FUNC_0(VAR_0);
  return;
 }

 FUNC_8(VAR_0, VAR_1, VAR_2, VAR_5, 1);
}
