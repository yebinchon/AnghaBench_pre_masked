
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ifreq {int ifr_data; } ;
struct hwtstamp_config {int rx_filter; int tx_type; scalar_t__ flags; } ;
struct gfar_private {scalar_t__ hwts_rx_en; scalar_t__ hwts_tx_en; } ;
typedef int config ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,struct hwtstamp_config*,int) ;
 struct gfar_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_5, struct ifreq *VAR_6)
{
 struct hwtstamp_config VAR_7;
 struct gfar_private *VAR_8 = FUNC_1(VAR_5);

 VAR_7.flags = 0;
 VAR_7.tx_type = VAR_8->hwts_tx_en ? VAR_4 : VAR_3;
 VAR_7.rx_filter = (VAR_8->hwts_rx_en ?
       VAR_1 : VAR_2);

 return FUNC_0(VAR_6->ifr_data, &VAR_7, sizeof(VAR_7)) ?
  -VAR_0 : 0;
}
