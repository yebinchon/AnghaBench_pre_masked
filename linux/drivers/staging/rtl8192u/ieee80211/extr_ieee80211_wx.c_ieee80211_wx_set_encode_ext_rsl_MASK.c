
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iw_point {int flags; } ;
union iwreq_data {struct iw_point encoding; } ;
struct net_device {int name; } ;
struct iw_request_info {int dummy; } ;
struct iw_encode_ext {int ext_flags; int alg; scalar_t__ key_len; int rx_seq; int key; } ;
struct ieee80211_security {int enabled; int active_key; scalar_t__* key_sizes; int flags; int level; } ;
struct ieee80211_device {int tx_keyidx; scalar_t__ iw_mode; scalar_t__ (* reset_port ) (struct net_device*) ;scalar_t__ reset_on_keychange; struct net_device* dev; int (* set_security ) (struct net_device*,struct ieee80211_security*) ;struct ieee80211_crypt_data** crypt; } ;
struct ieee80211_crypto_ops {scalar_t__ (* set_key ) (int ,scalar_t__,int ,int ) ;int (* init ) (int) ;int owner; } ;
struct ieee80211_crypt_data {int priv; struct ieee80211_crypto_ops* ops; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,...) ;

 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (struct ieee80211_device*,struct ieee80211_crypt_data**) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (struct ieee80211_crypt_data*) ;
 struct ieee80211_crypt_data* FUNC_5 (int,int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ,scalar_t__,int ,int ) ;
 int FUNC_9 (struct net_device*,struct ieee80211_security*) ;
 scalar_t__ FUNC_10 (struct net_device*) ;
 scalar_t__ FUNC_11 (int ) ;
 struct ieee80211_crypto_ops* FUNC_12 (int ,char const*) ;

int FUNC_13(struct ieee80211_device *VAR_17,
          struct iw_request_info *VAR_18,
          union iwreq_data *VAR_19, char *VAR_20)
{
 int VAR_21 = 0;
 struct net_device *VAR_22 = VAR_17->dev;
 struct iw_point *VAR_23 = &VAR_19->encoding;
 struct iw_encode_ext *VAR_24 = (struct iw_encode_ext *)VAR_20;
 int VAR_25, VAR_26;
 int VAR_27 = 0;
 const char *VAR_28, *VAR_29;
 struct ieee80211_crypto_ops *VAR_30;
 struct ieee80211_crypt_data **VAR_31;

 struct ieee80211_security VAR_32 = {
  .flags = 0,
 };
 VAR_26 = VAR_23->flags & VAR_7;
 if (VAR_26) {
  if (VAR_26 < 1 || VAR_26 > VAR_16)
   return -VAR_0;
  VAR_26--;
 } else
  VAR_26 = VAR_17->tx_keyidx;

 if (VAR_24->ext_flags & VAR_5) {

  VAR_31 = &VAR_17->crypt[VAR_26];

  VAR_27 = 1;
 } else {

  if (VAR_26 != 0 && VAR_24->alg != 128)
   return -VAR_0;
  if (VAR_17->iw_mode == VAR_8)

   VAR_31 = &VAR_17->crypt[VAR_26];

  else
   return -VAR_0;
 }

 VAR_32.flags |= VAR_10;
 if ((VAR_23->flags & VAR_4) ||
     VAR_24->alg == VAR_3) {
  if (*VAR_31)
   FUNC_2(VAR_17, VAR_31);

  for (VAR_25 = 0; VAR_25 < VAR_16; VAR_25++)

   if (VAR_17->crypt[VAR_25])

    break;

  if (VAR_25 == VAR_16) {
   VAR_32.enabled = 0;

   VAR_32.level = VAR_12;
   VAR_32.flags |= VAR_11;
  }
  goto done;
 }

 VAR_32.enabled = 1;

 switch (VAR_24->alg) {
 case 128:
  VAR_28 = "WEP";
  VAR_29 = "ieee80211_crypt_wep";
  break;
 case 129:
  VAR_28 = "TKIP";
  VAR_29 = "ieee80211_crypt_tkip";
  break;
 case 130:
  VAR_28 = "CCMP";
  VAR_29 = "ieee80211_crypt_ccmp";
  break;
 default:
  FUNC_1("%s: unknown crypto alg %d\n",
       VAR_22->name, VAR_24->alg);
  VAR_21 = -VAR_0;
  goto done;
 }
 FUNC_6("alg name:%s\n", VAR_28);

 VAR_30 = FUNC_12(FUNC_3(VAR_28), VAR_29);
 if (!VAR_30) {
  FUNC_1("%s: unknown crypto alg %d\n",
       VAR_22->name, VAR_24->alg);
  FUNC_6("========>unknown crypto alg %d\n", VAR_24->alg);
  VAR_21 = -VAR_0;
  goto done;
 }

 if (!*VAR_31 || (*VAR_31)->ops != VAR_30) {
  struct ieee80211_crypt_data *VAR_33;

  FUNC_2(VAR_17, VAR_31);

  VAR_33 = FUNC_5(sizeof(*VAR_33), VAR_2);
  if (!VAR_33) {
   VAR_21 = -VAR_1;
   goto done;
  }
  VAR_33->ops = VAR_30;
  if (VAR_33->ops && FUNC_11(VAR_33->ops->owner))
   VAR_33->priv = VAR_33->ops->init(VAR_26);
  if (!VAR_33->priv) {
   FUNC_4(VAR_33);
   VAR_21 = -VAR_0;
   goto done;
  }
  *VAR_31 = VAR_33;
 }

 if (VAR_24->key_len > 0 && (*VAR_31)->ops->set_key &&
     (*VAR_31)->ops->set_key(VAR_24->key, VAR_24->key_len, VAR_24->rx_seq,
       (*VAR_31)->priv) < 0) {
  FUNC_1("%s: key setting failed\n", VAR_22->name);
  FUNC_6("key setting failed\n");
  VAR_21 = -VAR_0;
  goto done;
 }

 if (VAR_24->ext_flags & VAR_6) {
  VAR_17->tx_keyidx = VAR_26;
  VAR_32.active_key = VAR_26;
  VAR_32.flags |= VAR_9;
 }

 if (VAR_24->alg != VAR_3) {

  VAR_32.key_sizes[VAR_26] = VAR_24->key_len;
  VAR_32.flags |= FUNC_0(VAR_26);
  if (VAR_24->alg == 128) {

   VAR_32.flags |= VAR_11;
   VAR_32.level = VAR_13;
  } else if (VAR_24->alg == 129) {

   VAR_32.flags |= VAR_11;
   VAR_32.level = VAR_14;
  } else if (VAR_24->alg == 130) {

   VAR_32.flags |= VAR_11;
   VAR_32.level = VAR_15;
  }

  if (VAR_27)
   VAR_32.flags &= ~VAR_11;
 }
done:
 if (VAR_17->set_security)
  VAR_17->set_security(VAR_17->dev, &VAR_32);

 if (VAR_17->reset_on_keychange &&
     VAR_17->iw_mode != VAR_8 &&
     VAR_17->reset_port && VAR_17->reset_port(VAR_22)) {
  FUNC_1("%s: reset_port failed\n", VAR_22->name);
  return -VAR_0;
 }
 return VAR_21;
}
