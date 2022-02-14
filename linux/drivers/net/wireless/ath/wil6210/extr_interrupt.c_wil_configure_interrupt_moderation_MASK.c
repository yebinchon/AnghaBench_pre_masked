
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {scalar_t__ iftype; } ;
struct wil6210_priv {int tx_max_burst_duration; int tx_interframe_timeout; int rx_max_burst_duration; int rx_interframe_timeout; TYPE_1__* main_ndev; } ;
struct TYPE_2__ {struct wireless_dev* ieee80211_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct wil6210_priv*,char*) ;
 int FUNC_1 (struct wil6210_priv*,char*,int) ;
 int FUNC_2 (struct wil6210_priv*,int ,int) ;

void FUNC_3(struct wil6210_priv *VAR_21)
{
 struct wireless_dev *VAR_22 = VAR_21->main_ndev->ieee80211_ptr;

 FUNC_0(VAR_21, "configure_interrupt_moderation\n");




 if (VAR_22->iftype == VAR_12)
  return;


 FUNC_2(VAR_21, VAR_17, VAR_6);
 FUNC_2(VAR_21, VAR_18, VAR_21->tx_max_burst_duration);
 FUNC_1(VAR_21, "set ITR_TX_CNT_TRSH = %d usec\n",
   VAR_21->tx_max_burst_duration);

 FUNC_2(VAR_21, VAR_17,
       VAR_7 | VAR_8);


 FUNC_2(VAR_21, VAR_19, VAR_9);
 FUNC_2(VAR_21, VAR_20, VAR_21->tx_interframe_timeout);
 FUNC_1(VAR_21, "set ITR_TX_IDL_CNT_TRSH = %d usec\n",
   VAR_21->tx_interframe_timeout);

 FUNC_2(VAR_21, VAR_19, VAR_10 |
       VAR_11);


 FUNC_2(VAR_21, VAR_13, VAR_0);
 FUNC_2(VAR_21, VAR_14, VAR_21->rx_max_burst_duration);
 FUNC_1(VAR_21, "set ITR_RX_CNT_TRSH = %d usec\n",
   VAR_21->rx_max_burst_duration);

 FUNC_2(VAR_21, VAR_13,
       VAR_1 | VAR_2);


 FUNC_2(VAR_21, VAR_15, VAR_3);
 FUNC_2(VAR_21, VAR_16, VAR_21->rx_interframe_timeout);
 FUNC_1(VAR_21, "set ITR_RX_IDL_CNT_TRSH = %d usec\n",
   VAR_21->rx_interframe_timeout);

 FUNC_2(VAR_21, VAR_15, VAR_4 |
       VAR_5);
}
