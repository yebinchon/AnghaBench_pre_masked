
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ifreq {int ifr_data; } ;
struct hwtstamp_config {int tx_type; int rx_filter; scalar_t__ flags; } ;
struct gfar_private {int hwts_tx_en; int device_flags; int hwts_rx_en; } ;
typedef int config ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 scalar_t__ FUNC_0 (struct hwtstamp_config*,int ,int) ;
 scalar_t__ FUNC_1 (int ,struct hwtstamp_config*,int) ;
 struct gfar_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_5, struct ifreq *VAR_6)
{
 struct hwtstamp_config VAR_7;
 struct gfar_private *VAR_8 = FUNC_2(VAR_5);

 if (FUNC_0(&VAR_7, VAR_6->ifr_data, sizeof(VAR_7)))
  return -VAR_0;


 if (VAR_7.flags)
  return -VAR_1;

 switch (VAR_7.tx_type) {
 case 129:
  VAR_8->hwts_tx_en = 0;
  break;
 case 128:
  if (!(VAR_8->device_flags & VAR_3))
   return -VAR_2;
  VAR_8->hwts_tx_en = 1;
  break;
 default:
  return -VAR_2;
 }

 switch (VAR_7.rx_filter) {
 case 130:
  if (VAR_8->hwts_rx_en) {
   VAR_8->hwts_rx_en = 0;
   FUNC_3(VAR_5);
  }
  break;
 default:
  if (!(VAR_8->device_flags & VAR_3))
   return -VAR_2;
  if (!VAR_8->hwts_rx_en) {
   VAR_8->hwts_rx_en = 1;
   FUNC_3(VAR_5);
  }
  VAR_7.rx_filter = VAR_4;
  break;
 }

 return FUNC_1(VAR_6->ifr_data, &VAR_7, sizeof(VAR_7)) ?
  -VAR_0 : 0;
}
