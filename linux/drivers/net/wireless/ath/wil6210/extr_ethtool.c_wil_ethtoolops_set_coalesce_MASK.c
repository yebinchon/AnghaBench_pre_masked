
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {scalar_t__ iftype; } ;
struct TYPE_2__ {int (* configure_interrupt_moderation ) (struct wil6210_priv*) ;} ;
struct wil6210_priv {TYPE_1__ txrx_ops; int rx_max_burst_duration; int tx_max_burst_duration; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct ethtool_coalesce {int rx_coalesce_usecs; int tx_coalesce_usecs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct wil6210_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,int ,int,int,struct ethtool_coalesce*,int,int) ;
 int FUNC_2 (struct wil6210_priv*) ;
 int FUNC_3 (struct wil6210_priv*,char*,...) ;
 int FUNC_4 (struct wil6210_priv*) ;
 int FUNC_5 (struct wil6210_priv*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_4,
           struct ethtool_coalesce *VAR_5)
{
 struct wil6210_priv *VAR_6 = FUNC_0(VAR_4);
 struct wireless_dev *VAR_7 = VAR_4->ieee80211_ptr;
 int VAR_8;

 FUNC_3(VAR_6, "ethtoolops_set_coalesce: rx %d usec, tx %d usec\n",
       VAR_5->rx_coalesce_usecs, VAR_5->tx_coalesce_usecs);

 if (VAR_7->iftype == VAR_2) {
  FUNC_3(VAR_6, "No IRQ coalescing in monitor mode\n");
  return -VAR_1;
 }





 if (VAR_5->rx_coalesce_usecs > VAR_3 ||
     VAR_5->tx_coalesce_usecs > VAR_3)
  goto out_bad;

 VAR_6->tx_max_burst_duration = VAR_5->tx_coalesce_usecs;
 VAR_6->rx_max_burst_duration = VAR_5->rx_coalesce_usecs;

 VAR_8 = FUNC_4(VAR_6);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_6->txrx_ops.configure_interrupt_moderation(VAR_6);

 FUNC_5(VAR_6);

 return 0;

out_bad:
 FUNC_3(VAR_6, "Unsupported coalescing params. Raw command:\n");
 FUNC_1("DBG[MISC] coal ", VAR_0, 16, 4,
        VAR_5, sizeof(*VAR_5), 0);
 return -VAR_1;
}
