
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iw_param {long flags; int value; } ;
union iwreq_data {struct iw_param param; } ;
struct net_device {int dummy; } ;
struct libipw_security {int level; int flags; int enabled; } ;
struct TYPE_3__ {size_t tx_keyidx; struct lib80211_crypt_data** crypt; } ;
struct libipw_device {int privacy_invoked; int ieee802_1x; int dev; int (* set_security ) (int ,struct libipw_security*) ;int drop_unencrypted; TYPE_1__ crypt_info; } ;
struct lib80211_crypt_data {int priv; TYPE_2__* ops; } ;
struct iw_request_info {int dummy; } ;
struct ipw2100_priv {struct libipw_device* ieee; } ;
struct TYPE_4__ {unsigned long (* get_flags ) (int ) ;int (* set_flags ) (unsigned long,int ) ;} ;


 int VAR_0 ;
 unsigned long VAR_1 ;




 long VAR_2 ;






 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ipw2100_priv*,int ) ;
 int FUNC_1 (struct ipw2100_priv*,int ) ;
 struct ipw2100_priv* FUNC_2 (struct net_device*) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (unsigned long,int ) ;
 int FUNC_5 (int ,struct libipw_security*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_7,
          struct iw_request_info *VAR_8,
          union iwreq_data *VAR_9, char *VAR_10)
{
 struct ipw2100_priv *VAR_11 = FUNC_2(VAR_7);
 struct libipw_device *VAR_12 = VAR_11->ieee;
 struct iw_param *VAR_13 = &VAR_9->param;
 struct lib80211_crypt_data *VAR_14;
 unsigned long VAR_15;
 int VAR_16 = 0;

 switch (VAR_13->flags & VAR_2) {
 case 128:
 case 135:
 case 136:
 case 133:



  break;

 case 130:
  VAR_14 = VAR_11->ieee->crypt_info.crypt[VAR_11->ieee->crypt_info.tx_keyidx];
  if (!VAR_14 || !VAR_14->ops->set_flags || !VAR_14->ops->get_flags)
   break;

  VAR_15 = VAR_14->ops->get_flags(VAR_14->priv);

  if (VAR_13->value)
   VAR_15 |= VAR_1;
  else
   VAR_15 &= ~VAR_1;

  VAR_14->ops->set_flags(VAR_15, VAR_14->priv);

  break;

 case 134:{
   struct libipw_security VAR_17 = {
    .flags = VAR_3,
    .enabled = VAR_13->value,
   };
   VAR_11->ieee->drop_unencrypted = VAR_13->value;



   if (!VAR_13->value) {
    VAR_17.flags |= VAR_4;
    VAR_17.level = VAR_5;
   } else {
    VAR_17.flags |= VAR_4;
    VAR_17.level = VAR_6;
   }
   if (VAR_11->ieee->set_security)
    VAR_11->ieee->set_security(VAR_11->ieee->dev, &VAR_17);
   break;
  }

 case 137:
  VAR_16 = FUNC_1(VAR_11, VAR_13->value);
  break;

 case 129:
  VAR_16 = FUNC_0(VAR_11, VAR_13->value);
  break;

 case 131:
  VAR_12->ieee802_1x = VAR_13->value;
  break;


 case 132:
  VAR_12->privacy_invoked = VAR_13->value;
  break;

 default:
  return -VAR_0;
 }
 return VAR_16;
}
