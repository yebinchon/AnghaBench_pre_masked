
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct rt2x00intf_conf {int type; int bssid; int mac; int sync; } ;
struct rt2x00_intf {int dummy; } ;
struct rt2x00_dev {TYPE_2__* ops; int intf_sta_count; int intf_ap_count; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;
struct TYPE_4__ {TYPE_1__* lib; } ;
struct TYPE_3__ {int (* config_intf ) (struct rt2x00_dev*,struct rt2x00_intf*,struct rt2x00intf_conf*,unsigned int) ;} ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;





 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int const*,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct rt2x00_dev*,struct rt2x00_intf*,struct rt2x00intf_conf*,unsigned int) ;

void FUNC_3(struct rt2x00_dev *VAR_8,
      struct rt2x00_intf *VAR_9,
      enum nl80211_iftype VAR_10,
      const u8 *VAR_11, const u8 *VAR_12)
{
 struct rt2x00intf_conf VAR_13;
 unsigned int VAR_14 = 0;

 VAR_13.type = VAR_10;

 switch (VAR_10) {
 case 132:
  VAR_13.sync = VAR_4;
  break;
 case 131:
 case 130:
 case 128:
  VAR_13.sync = VAR_5;
  break;
 case 129:
  VAR_13.sync = VAR_6;
  break;
 default:
  VAR_13.sync = VAR_7;
  break;
 }







 FUNC_1(VAR_13.mac, 0, sizeof(VAR_13.mac));
 if (VAR_11)
  FUNC_0(VAR_13.mac, VAR_11, VAR_3);

 FUNC_1(VAR_13.bssid, 0, sizeof(VAR_13.bssid));
 if (VAR_12)
  FUNC_0(VAR_13.bssid, VAR_12, VAR_3);

 VAR_14 |= VAR_2;
 if (VAR_11 || (!VAR_8->intf_ap_count && !VAR_8->intf_sta_count))
  VAR_14 |= VAR_1;
 if (VAR_12 || (!VAR_8->intf_ap_count && !VAR_8->intf_sta_count))
  VAR_14 |= VAR_0;

 VAR_8->ops->lib->config_intf(VAR_8, VAR_9, &VAR_13, VAR_14);
}
