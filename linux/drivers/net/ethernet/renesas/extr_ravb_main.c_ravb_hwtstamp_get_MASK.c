
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ravb_private {int tstamp_rx_ctrl; scalar_t__ tstamp_tx_ctrl; } ;
struct net_device {int dummy; } ;
struct ifreq {int ifr_data; } ;
struct hwtstamp_config {int rx_filter; int tx_type; scalar_t__ flags; } ;
typedef int config ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ,struct hwtstamp_config*,int) ;
 struct ravb_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_8, struct ifreq *VAR_9)
{
 struct ravb_private *VAR_10 = FUNC_1(VAR_8);
 struct hwtstamp_config VAR_11;

 VAR_11.flags = 0;
 VAR_11.tx_type = VAR_10->tstamp_tx_ctrl ? VAR_5 :
      VAR_4;
 if (VAR_10->tstamp_rx_ctrl & VAR_7)
  VAR_11.rx_filter = VAR_3;
 else if (VAR_10->tstamp_rx_ctrl & VAR_6)
  VAR_11.rx_filter = VAR_1;
 else
  VAR_11.rx_filter = VAR_2;

 return FUNC_0(VAR_9->ifr_data, &VAR_11, sizeof(VAR_11)) ?
  -VAR_0 : 0;
}
