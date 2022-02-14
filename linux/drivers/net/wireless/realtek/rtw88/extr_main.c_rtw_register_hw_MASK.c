
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rtw_vif {int dummy; } ;
struct rtw_sta_info {int dummy; } ;
struct TYPE_6__ {int alpha2; } ;
struct TYPE_5__ {int addr; } ;
struct rtw_dev {TYPE_2__ regd; TYPE_1__ efuse; TYPE_3__* chip; } ;
struct ieee80211_hw {int extra_tx_headroom; int sta_data_size; int vif_data_size; TYPE_4__* wiphy; int queues; } ;
struct TYPE_8__ {int interface_modes; int flags; int features; } ;
struct TYPE_7__ {int tx_pkt_desc_sz; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct ieee80211_hw*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (struct ieee80211_hw*,int ) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (struct rtw_dev*) ;
 int FUNC_6 (struct rtw_dev*,char*) ;
 int FUNC_7 (struct rtw_dev*,int ) ;
 int VAR_17 ;
 int FUNC_8 (struct ieee80211_hw*,TYPE_3__*) ;

int FUNC_9(struct rtw_dev *VAR_18, struct ieee80211_hw *VAR_19)
{
 int VAR_20 = 0;
 int VAR_21;


 VAR_20 = VAR_18->chip->tx_pkt_desc_sz;

 VAR_19->extra_tx_headroom = VAR_20;
 VAR_19->queues = VAR_1;
 VAR_19->sta_data_size = sizeof(struct rtw_sta_info);
 VAR_19->vif_data_size = sizeof(struct rtw_vif);

 FUNC_2(VAR_19, VAR_10);
 FUNC_2(VAR_19, VAR_9);
 FUNC_2(VAR_19, VAR_0);
 FUNC_2(VAR_19, VAR_2);
 FUNC_2(VAR_19, VAR_8);
 FUNC_2(VAR_19, VAR_13);
 FUNC_2(VAR_19, VAR_12);
 FUNC_2(VAR_19, VAR_14);
 FUNC_2(VAR_19, VAR_11);

 VAR_19->wiphy->interface_modes = FUNC_0(VAR_7) |
         FUNC_0(VAR_5) |
         FUNC_0(VAR_4) |
         FUNC_0(VAR_6);

 VAR_19->wiphy->flags |= VAR_15 |
       VAR_16;

 VAR_19->wiphy->features |= VAR_3;

 FUNC_8(VAR_19, VAR_18->chip);
 FUNC_1(VAR_19, VAR_18->efuse.addr);

 FUNC_7(VAR_18, VAR_17);

 VAR_21 = FUNC_3(VAR_19);
 if (VAR_21) {
  FUNC_6(VAR_18, "failed to register hw\n");
  return VAR_21;
 }

 if (FUNC_4(VAR_19->wiphy, VAR_18->regd.alpha2))
  FUNC_6(VAR_18, "regulatory_hint fail\n");

 FUNC_5(VAR_18);

 return 0;
}
