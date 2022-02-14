
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ifreq {int ifr_data; } ;
struct hwtstamp_config {int rx_filter; int tx_type; scalar_t__ flags; } ;
struct fec_enet_private {scalar_t__ hwts_rx_en; scalar_t__ hwts_tx_en; } ;
typedef int config ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,struct hwtstamp_config*,int) ;
 struct fec_enet_private* FUNC_1 (struct net_device*) ;

int FUNC_2(struct net_device *VAR_5, struct ifreq *VAR_6)
{
 struct fec_enet_private *VAR_7 = FUNC_1(VAR_5);
 struct hwtstamp_config VAR_8;

 VAR_8.flags = 0;
 VAR_8.tx_type = VAR_7->hwts_tx_en ? VAR_4 : VAR_3;
 VAR_8.rx_filter = (VAR_7->hwts_rx_en ?
       VAR_1 : VAR_2);

 return FUNC_0(VAR_6->ifr_data, &VAR_8, sizeof(VAR_8)) ?
  -VAR_0 : 0;
}
