
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct phy_device {struct dp83640_private* priv; } ;
struct ifreq {int ifr_data; } ;
struct hwtstamp_config {scalar_t__ tx_type; int rx_filter; scalar_t__ flags; } ;
struct dp83640_private {scalar_t__ hwts_tx_en; int hwts_rx_en; int layer; int version; TYPE_1__* clock; } ;
typedef int cfg ;
struct TYPE_2__ {int extreg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_0 (struct hwtstamp_config*,int ,int) ;
 scalar_t__ FUNC_1 (int ,struct hwtstamp_config*,int) ;
 int FUNC_2 (int ,struct phy_device*,int ,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct phy_device *VAR_23, struct ifreq *VAR_24)
{
 struct dp83640_private *VAR_25 = VAR_23->priv;
 struct hwtstamp_config VAR_26;
 u16 VAR_27, VAR_28;

 if (FUNC_0(&VAR_26, VAR_24->ifr_data, sizeof(VAR_26)))
  return -VAR_1;

 if (VAR_26.flags)
  return -VAR_2;

 if (VAR_26.tx_type < 0 || VAR_26.tx_type > VAR_4)
  return -VAR_3;

 VAR_25->hwts_tx_en = VAR_26.tx_type;

 switch (VAR_26.rx_filter) {
 case 140:
  VAR_25->hwts_rx_en = 0;
  VAR_25->layer = 0;
  VAR_25->version = 0;
  break;
 case 138:
 case 137:
 case 139:
  VAR_25->hwts_rx_en = 1;
  VAR_25->layer = VAR_7;
  VAR_25->version = VAR_8;
  break;
 case 130:
 case 129:
 case 131:
  VAR_25->hwts_rx_en = 1;
  VAR_25->layer = VAR_7;
  VAR_25->version = VAR_9;
  break;
 case 133:
 case 132:
 case 134:
  VAR_25->hwts_rx_en = 1;
  VAR_25->layer = VAR_6;
  VAR_25->version = VAR_9;
  break;
 case 135:
 case 128:
 case 136:
  VAR_25->hwts_rx_en = 1;
  VAR_25->layer = VAR_7 | VAR_6;
  VAR_25->version = VAR_9;
  break;
 default:
  return -VAR_3;
 }

 VAR_27 = (VAR_25->version & VAR_20) << VAR_21;
 VAR_28 = (VAR_25->version & VAR_20) << VAR_21;

 if (VAR_25->layer & VAR_6) {
  VAR_27 |= VAR_19;
  VAR_28 |= VAR_14;
 }
 if (VAR_25->layer & VAR_7) {
  VAR_27 |= VAR_18 | VAR_17;
  VAR_28 |= VAR_13 | VAR_12;
 }

 if (VAR_25->hwts_tx_en)
  VAR_27 |= VAR_22;

 if (VAR_25->hwts_tx_en == VAR_4)
  VAR_27 |= VAR_16 | VAR_0;

 if (VAR_25->hwts_rx_en)
  VAR_28 |= VAR_15;

 FUNC_3(&VAR_25->clock->extreg_lock);

 FUNC_2(0, VAR_23, VAR_5, VAR_11, VAR_27);
 FUNC_2(0, VAR_23, VAR_5, VAR_10, VAR_28);

 FUNC_4(&VAR_25->clock->extreg_lock);

 return FUNC_1(VAR_24->ifr_data, &VAR_26, sizeof(VAR_26)) ? -VAR_1 : 0;
}
