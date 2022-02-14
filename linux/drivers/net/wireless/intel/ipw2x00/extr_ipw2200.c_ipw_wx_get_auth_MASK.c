
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iw_param {int flags; int value; } ;
union iwreq_data {struct iw_param param; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int auth_mode; } ;
struct TYPE_4__ {size_t tx_keyidx; struct lib80211_crypt_data** crypt; } ;
struct libipw_device {int drop_unencrypted; int wpa_enabled; int ieee802_1x; int privacy_invoked; TYPE_3__ sec; TYPE_1__ crypt_info; } ;
struct lib80211_crypt_data {int priv; TYPE_2__* ops; } ;
struct iw_request_info {int dummy; } ;
struct ipw_priv {struct libipw_device* ieee; } ;
struct TYPE_5__ {int (* get_flags ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;







 struct ipw_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3,
      struct iw_request_info *VAR_4,
      union iwreq_data *VAR_5, char *VAR_6)
{
 struct ipw_priv *VAR_7 = FUNC_0(VAR_3);
 struct libipw_device *VAR_8 = VAR_7->ieee;
 struct lib80211_crypt_data *VAR_9;
 struct iw_param *VAR_10 = &VAR_5->param;

 switch (VAR_10->flags & VAR_2) {
 case 128:
 case 136:
 case 137:
 case 134:



  return -VAR_0;

 case 130:
  VAR_9 = VAR_7->ieee->crypt_info.crypt[VAR_7->ieee->crypt_info.tx_keyidx];
  if (!VAR_9 || !VAR_9->ops->get_flags)
   break;

  VAR_10->value = (VAR_9->ops->get_flags(VAR_9->priv) &
    VAR_1) ? 1 : 0;

  break;

 case 135:
  VAR_10->value = VAR_8->drop_unencrypted;
  break;

 case 138:
  VAR_10->value = VAR_8->sec.auth_mode;
  break;

 case 129:
  VAR_10->value = VAR_8->wpa_enabled;
  break;

 case 131:
  VAR_10->value = VAR_8->ieee802_1x;
  break;

 case 132:
 case 133:
  VAR_10->value = VAR_8->privacy_invoked;
  break;

 default:
  return -VAR_0;
 }
 return 0;
}
