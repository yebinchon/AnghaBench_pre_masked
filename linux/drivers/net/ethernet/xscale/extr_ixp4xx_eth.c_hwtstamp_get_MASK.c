
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port {int hwts_rx_en; scalar_t__ hwts_tx_en; } ;
struct net_device {int dummy; } ;
struct ifreq {int ifr_data; } ;
struct hwtstamp_config {int rx_filter; int tx_type; scalar_t__ flags; } ;
typedef int cfg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,struct hwtstamp_config*,int) ;
 struct port* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_7, struct ifreq *VAR_8)
{
 struct hwtstamp_config VAR_9;
 struct port *VAR_10 = FUNC_2(VAR_7);

 VAR_9.flags = 0;
 VAR_9.tx_type = VAR_10->hwts_tx_en ? VAR_6 : VAR_5;

 switch (VAR_10->hwts_rx_en) {
 case 0:
  VAR_9.rx_filter = VAR_2;
  break;
 case 128:
  VAR_9.rx_filter = VAR_4;
  break;
 case 129:
  VAR_9.rx_filter = VAR_3;
  break;
 default:
  FUNC_0(1);
  return -VAR_1;
 }

 return FUNC_1(VAR_8->ifr_data, &VAR_9, sizeof(VAR_9)) ? -VAR_0 : 0;
}
