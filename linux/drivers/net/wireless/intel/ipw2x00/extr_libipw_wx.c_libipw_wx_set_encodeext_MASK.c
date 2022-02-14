
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iw_point {int flags; } ;
union iwreq_data {struct iw_point encoding; } ;
struct net_device {int name; } ;
struct libipw_security {int flags; int enabled; int encrypt; int active_key; scalar_t__* key_sizes; int level; int * encode_alg; int * keys; } ;
struct TYPE_2__ {int tx_keyidx; struct lib80211_crypt_data** crypt; } ;
struct libipw_device {scalar_t__ iw_mode; int (* set_security ) (struct net_device*,struct libipw_security*) ;TYPE_1__ crypt_info; scalar_t__ host_encrypt_msdu; scalar_t__ host_decrypt; scalar_t__ host_encrypt; int host_mc_decrypt; struct net_device* dev; } ;
struct lib80211_crypto_ops {scalar_t__ (* set_key ) (int ,scalar_t__,int ,int *) ;int * (* init ) (int) ;int owner; } ;
struct lib80211_crypt_data {int * priv; struct lib80211_crypto_ops* ops; } ;
struct iw_request_info {int dummy; } ;
struct iw_encode_ext {int ext_flags; int alg; scalar_t__ key_len; int key; int rx_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (char*,int ,...) ;
 int VAR_9 ;
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
 int FUNC_1 (struct lib80211_crypt_data*) ;
 struct lib80211_crypt_data* FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_1__*,struct lib80211_crypt_data**) ;
 struct lib80211_crypto_ops* FUNC_4 (char const*) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 int FUNC_6 (char const*) ;
 int * FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ,scalar_t__,int ,int *) ;
 int FUNC_9 (struct net_device*,struct libipw_security*) ;
 scalar_t__ FUNC_10 (int ) ;

int FUNC_11(struct libipw_device *VAR_21,
          struct iw_request_info *VAR_22,
          union iwreq_data *VAR_23, char *VAR_24)
{
 struct net_device *VAR_25 = VAR_21->dev;
 struct iw_point *VAR_26 = &VAR_23->encoding;
 struct iw_encode_ext *VAR_27 = (struct iw_encode_ext *)VAR_24;
 int VAR_28, VAR_29, VAR_30 = 0;
 int VAR_31 = 0;
 const char *VAR_32, *VAR_33;
 struct lib80211_crypto_ops *VAR_34;
 struct lib80211_crypt_data **VAR_35;

 struct libipw_security VAR_36 = {
  .flags = 0,
 };

 VAR_29 = VAR_26->flags & VAR_7;
 if (VAR_29) {
  if (VAR_29 < 1 || VAR_29 > VAR_20)
   return -VAR_0;
  VAR_29--;
 } else
  VAR_29 = VAR_21->crypt_info.tx_keyidx;

 if (VAR_27->ext_flags & VAR_5) {
  VAR_35 = &VAR_21->crypt_info.crypt[VAR_29];
  VAR_31 = 1;
 } else {

  if (VAR_29 != 0 && VAR_27->alg != 128)
   return -VAR_0;
  if (VAR_21->iw_mode == VAR_8)
   VAR_35 = &VAR_21->crypt_info.crypt[VAR_29];
  else
   return -VAR_0;
 }

 VAR_36.flags |= VAR_13 | VAR_14;
 if ((VAR_26->flags & VAR_4) ||
     VAR_27->alg == VAR_3) {
  if (*VAR_35)
   FUNC_3(&VAR_21->crypt_info, VAR_35);

  for (VAR_28 = 0; VAR_28 < VAR_20; VAR_28++)
   if (VAR_21->crypt_info.crypt[VAR_28] != ((void*)0))
    break;

  if (VAR_28 == VAR_20) {
   VAR_36.enabled = 0;
   VAR_36.encrypt = 0;
   VAR_36.level = VAR_16;
   VAR_36.flags |= VAR_15;
  }
  goto done;
 }

 VAR_36.enabled = 1;
 VAR_36.encrypt = 1;

 if (VAR_31 ? !VAR_21->host_mc_decrypt :
     !(VAR_21->host_encrypt || VAR_21->host_decrypt ||
       VAR_21->host_encrypt_msdu))
  goto skip_host_crypt;

 switch (VAR_27->alg) {
 case 128:
  VAR_32 = "WEP";
  VAR_33 = "lib80211_crypt_wep";
  break;
 case 129:
  VAR_32 = "TKIP";
  VAR_33 = "lib80211_crypt_tkip";
  break;
 case 130:
  VAR_32 = "CCMP";
  VAR_33 = "lib80211_crypt_ccmp";
  break;
 default:
  FUNC_0("%s: unknown crypto alg %d\n",
       VAR_25->name, VAR_27->alg);
  VAR_30 = -VAR_0;
  goto done;
 }

 VAR_34 = FUNC_4(VAR_32);
 if (VAR_34 == ((void*)0)) {
  FUNC_6(VAR_33);
  VAR_34 = FUNC_4(VAR_32);
 }
 if (VAR_34 == ((void*)0)) {
  FUNC_0("%s: unknown crypto alg %d\n",
       VAR_25->name, VAR_27->alg);
  VAR_30 = -VAR_0;
  goto done;
 }

 if (*VAR_35 == ((void*)0) || (*VAR_35)->ops != VAR_34) {
  struct lib80211_crypt_data *VAR_37;

  FUNC_3(&VAR_21->crypt_info, VAR_35);

  VAR_37 = FUNC_2(sizeof(*VAR_37), VAR_2);
  if (VAR_37 == ((void*)0)) {
   VAR_30 = -VAR_1;
   goto done;
  }
  VAR_37->ops = VAR_34;
  if (VAR_37->ops && FUNC_10(VAR_37->ops->owner))
   VAR_37->priv = VAR_37->ops->init(VAR_29);
  if (VAR_37->priv == ((void*)0)) {
   FUNC_1(VAR_37);
   VAR_30 = -VAR_0;
   goto done;
  }
  *VAR_35 = VAR_37;
 }

 if (VAR_27->key_len > 0 && (*VAR_35)->ops->set_key &&
     (*VAR_35)->ops->set_key(VAR_27->key, VAR_27->key_len, VAR_27->rx_seq,
       (*VAR_35)->priv) < 0) {
  FUNC_0("%s: key setting failed\n", VAR_25->name);
  VAR_30 = -VAR_0;
  goto done;
 }

      skip_host_crypt:
 if (VAR_27->ext_flags & VAR_6) {
  VAR_21->crypt_info.tx_keyidx = VAR_29;
  VAR_36.active_key = VAR_29;
  VAR_36.flags |= VAR_9;
 }

 if (VAR_27->alg != VAR_3) {
  FUNC_5(VAR_36.keys[VAR_29], VAR_27->key, VAR_27->key_len);
  VAR_36.key_sizes[VAR_29] = VAR_27->key_len;
  VAR_36.flags |= (1 << VAR_29);
  if (VAR_27->alg == 128) {
   VAR_36.encode_alg[VAR_29] = VAR_12;
   VAR_36.flags |= VAR_15;
   VAR_36.level = VAR_17;
  } else if (VAR_27->alg == 129) {
   VAR_36.encode_alg[VAR_29] = VAR_11;
   VAR_36.flags |= VAR_15;
   VAR_36.level = VAR_18;
  } else if (VAR_27->alg == 130) {
   VAR_36.encode_alg[VAR_29] = VAR_10;
   VAR_36.flags |= VAR_15;
   VAR_36.level = VAR_19;
  }

  if (VAR_31)
   VAR_36.flags &= ~VAR_15;
 }
      done:
 if (VAR_21->set_security)
  VAR_21->set_security(VAR_25, &VAR_36);

 return VAR_30;
}
