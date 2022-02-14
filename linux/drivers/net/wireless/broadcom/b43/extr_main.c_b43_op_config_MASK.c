
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {TYPE_4__* chan; } ;
struct ieee80211_conf {int flags; scalar_t__ power_level; int long_frame_max_tx_count; int short_frame_max_tx_count; TYPE_1__ chandef; int listen_interval; } ;
struct ieee80211_hw {struct ieee80211_conf conf; } ;
struct b43_phy {scalar_t__ desired_txpower; scalar_t__ radio_on; TYPE_2__* ops; int channel; TYPE_1__* chandef; } ;
struct b43_wldev {TYPE_3__* wl; int radio_hw_enable; struct b43_phy phy; } ;
struct b43_wl {scalar_t__ radio_enabled; int mutex; struct b43_wldev* current_dev; } ;
struct TYPE_8__ {int hw_value; } ;
struct TYPE_7__ {int radiotap_enabled; } ;
struct TYPE_6__ {int (* set_rx_antenna ) (struct b43_wldev*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct b43_wldev*) ;
 int FUNC_1 (struct b43_wldev*) ;
 int FUNC_2 (struct b43_wldev*,int) ;
 int FUNC_3 (struct b43_wldev*,int) ;
 int FUNC_4 (struct b43_wldev*,int ) ;
 int FUNC_5 (struct b43_wldev*,int ,int ) ;
 int FUNC_6 (struct b43_wldev*,int) ;
 int FUNC_7 (struct b43_wldev*,TYPE_4__*) ;
 int FUNC_8 (struct b43_wldev*,int ) ;
 int FUNC_9 (TYPE_3__*,char*) ;
 struct b43_wl* FUNC_10 (struct ieee80211_hw*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct b43_wldev*,int) ;

__attribute__((used)) static int FUNC_14(struct ieee80211_hw *VAR_7, u32 VAR_8)
{
 struct b43_wl *VAR_9 = FUNC_10(VAR_7);
 struct b43_wldev *VAR_10 = VAR_9->current_dev;
 struct b43_phy *VAR_11 = &VAR_10->phy;
 struct ieee80211_conf *VAR_12 = &VAR_7->conf;
 int VAR_13;
 int VAR_14 = 0;

 FUNC_11(&VAR_9->mutex);
 FUNC_1(VAR_10);

 if (VAR_8 & VAR_4)
  FUNC_4(VAR_10, VAR_12->listen_interval);

 if (VAR_8 & VAR_3) {
  VAR_11->chandef = &VAR_12->chandef;
  VAR_11->channel = VAR_12->chandef.chan->hw_value;


  VAR_14 = FUNC_7(VAR_10, VAR_12->chandef.chan);
  if (VAR_14)
   goto out_mac_enable;




  FUNC_8(VAR_10, VAR_11->channel);
 }

 if (VAR_8 & VAR_5)
  FUNC_5(VAR_10, VAR_12->short_frame_max_tx_count,
       VAR_12->long_frame_max_tx_count);
 VAR_8 &= ~VAR_5;
 if (!VAR_8)
  goto out_mac_enable;

 VAR_10->wl->radiotap_enabled = !!(VAR_12->flags & VAR_6);


 if (VAR_12->power_level != 0) {
  if (VAR_12->power_level != VAR_11->desired_txpower) {
   VAR_11->desired_txpower = VAR_12->power_level;
   FUNC_3(VAR_10, VAR_1 |
         VAR_2);
  }
 }


 VAR_13 = VAR_0;
 FUNC_2(VAR_10, VAR_13);
 VAR_13 = VAR_0;
 if (VAR_11->ops->set_rx_antenna)
  VAR_11->ops->set_rx_antenna(VAR_10, VAR_13);

 if (VAR_9->radio_enabled != VAR_11->radio_on) {
  if (VAR_9->radio_enabled) {
   FUNC_6(VAR_10, 0);
   FUNC_9(VAR_10->wl, "Radio turned on by software\n");
   if (!VAR_10->radio_hw_enable) {
    FUNC_9(VAR_10->wl, "The hardware RF-kill button "
     "still turns the radio physically off. "
     "Press the button to turn it on.\n");
   }
  } else {
   FUNC_6(VAR_10, 1);
   FUNC_9(VAR_10->wl, "Radio turned off by software\n");
  }
 }

out_mac_enable:
 FUNC_0(VAR_10);
 FUNC_12(&VAR_9->mutex);

 return VAR_14;
}
