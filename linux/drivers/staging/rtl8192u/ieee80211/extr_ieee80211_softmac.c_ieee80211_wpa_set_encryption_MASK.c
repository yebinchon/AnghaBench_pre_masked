
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* alg; int idx; scalar_t__ err; int key_len; scalar_t__ key; scalar_t__ set_tx; int seq; } ;
struct TYPE_3__ {TYPE_2__ crypt; } ;
struct ieee_param {TYPE_1__ u; int sta_addr; } ;
struct ieee80211_security {int flags; int enabled; size_t active_key; int level; int * key_sizes; int * keys; } ;
struct ieee80211_device {size_t tx_keyidx; scalar_t__ iw_mode; int dev; scalar_t__ (* reset_port ) (int ) ;scalar_t__ reset_on_keychange; int (* set_security ) (int ,struct ieee80211_security*) ;scalar_t__ host_decrypt; scalar_t__ host_encrypt; struct ieee80211_crypt_data** crypt; } ;
struct ieee80211_crypto_ops {scalar_t__ (* set_key ) (scalar_t__,int ,int ,int ) ;int (* init ) (size_t) ;int owner; } ;
struct ieee80211_crypt_data {int priv; struct ieee80211_crypto_ops* ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct ieee80211_device*,struct ieee80211_crypt_data**) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211_crypt_data*) ;
 struct ieee80211_crypt_data* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,scalar_t__,int ) ;
 int FUNC_6 (char*,...) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (size_t) ;
 scalar_t__ FUNC_9 (scalar_t__,int ,int ,int ) ;
 int FUNC_10 (int ,struct ieee80211_security*) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 struct ieee80211_crypto_ops* FUNC_13 (int ,char const*) ;

__attribute__((used)) static int FUNC_14(struct ieee80211_device *VAR_17,
      struct ieee_param *VAR_18, int VAR_19)
{
 int VAR_20 = 0;
 const char *VAR_21 = ((void*)0);

 struct ieee80211_crypto_ops *VAR_22 = ((void*)0);
 struct ieee80211_crypt_data **VAR_23;

 struct ieee80211_security VAR_24 = {
  .flags = 0,
 };

 VAR_18->u.crypt.err = 0;
 VAR_18->u.crypt.alg[VAR_3 - 1] = '\0';

 if (VAR_19 !=
     (int)((char *)VAR_18->u.crypt.key - (char *)VAR_18) +
     VAR_18->u.crypt.key_len) {
  FUNC_6("Len mismatch %d, %d\n", VAR_19,
          VAR_18->u.crypt.key_len);
  return -VAR_0;
 }
 if (FUNC_2(VAR_18->sta_addr)) {
  if (VAR_18->u.crypt.idx >= VAR_16)
   return -VAR_0;
  VAR_23 = &VAR_17->crypt[VAR_18->u.crypt.idx];
 } else {
  return -VAR_0;
 }

 if (FUNC_7(VAR_18->u.crypt.alg, "none") == 0) {
  if (VAR_23) {
   VAR_24.enabled = 0;


   VAR_24.level = VAR_12;
   VAR_24.flags |= VAR_10 | VAR_11;
   FUNC_0(VAR_17, VAR_23);
  }
  goto done;
 }
 VAR_24.enabled = 1;


 VAR_24.flags |= VAR_10;


 if (!(VAR_17->host_encrypt || VAR_17->host_decrypt) &&
     FUNC_7(VAR_18->u.crypt.alg, "TKIP"))
  goto skip_host_crypt;


 if (!FUNC_7(VAR_18->u.crypt.alg, "WEP"))
  VAR_21 = "ieee80211_crypt_wep";
 else if (!FUNC_7(VAR_18->u.crypt.alg, "TKIP"))
  VAR_21 = "ieee80211_crypt_tkip";
 else if (!FUNC_7(VAR_18->u.crypt.alg, "CCMP"))
  VAR_21 = "ieee80211_crypt_ccmp";
 if (VAR_21)
  VAR_22 = FUNC_13(FUNC_1(VAR_18->u.crypt.alg),
           VAR_21);
 if (!VAR_22) {
  FUNC_6("unknown crypto alg '%s'\n", VAR_18->u.crypt.alg);
  VAR_18->u.crypt.err = VAR_7;
  VAR_20 = -VAR_0;
  goto done;
 }

 if (!*VAR_23 || (*VAR_23)->ops != VAR_22) {
  struct ieee80211_crypt_data *VAR_25;

  FUNC_0(VAR_17, VAR_23);

  VAR_25 = FUNC_4(sizeof(*VAR_25), VAR_2);
  if (!VAR_25) {
   VAR_20 = -VAR_1;
   goto done;
  }
  VAR_25->ops = VAR_22;
  if (VAR_25->ops && FUNC_12(VAR_25->ops->owner))
   VAR_25->priv =
    VAR_25->ops->init(VAR_18->u.crypt.idx);

  if (!VAR_25->priv) {
   FUNC_3(VAR_25);
   VAR_18->u.crypt.err = VAR_5;
   VAR_20 = -VAR_0;
   goto done;
  }

  *VAR_23 = VAR_25;
 }

 if (VAR_18->u.crypt.key_len > 0 && (*VAR_23)->ops->set_key &&
     (*VAR_23)->ops->set_key(VAR_18->u.crypt.key,
       VAR_18->u.crypt.key_len, VAR_18->u.crypt.seq,
       (*VAR_23)->priv) < 0) {
  FUNC_6("key setting failed\n");
  VAR_18->u.crypt.err = VAR_6;
  VAR_20 = -VAR_0;
  goto done;
 }

 skip_host_crypt:
 if (VAR_18->u.crypt.set_tx) {
  VAR_17->tx_keyidx = VAR_18->u.crypt.idx;
  VAR_24.active_key = VAR_18->u.crypt.idx;
  VAR_24.flags |= VAR_9;
 } else {
  VAR_24.flags &= ~VAR_9;
 }
 FUNC_5(VAR_24.keys[VAR_18->u.crypt.idx],
        VAR_18->u.crypt.key,
        VAR_18->u.crypt.key_len);
 VAR_24.key_sizes[VAR_18->u.crypt.idx] = VAR_18->u.crypt.key_len;
 VAR_24.flags |= (1 << VAR_18->u.crypt.idx);

 if (FUNC_7(VAR_18->u.crypt.alg, "WEP") == 0) {
  VAR_24.flags |= VAR_11;
  VAR_24.level = VAR_13;
 } else if (FUNC_7(VAR_18->u.crypt.alg, "TKIP") == 0) {
  VAR_24.flags |= VAR_11;
  VAR_24.level = VAR_14;
 } else if (FUNC_7(VAR_18->u.crypt.alg, "CCMP") == 0) {
  VAR_24.flags |= VAR_11;
  VAR_24.level = VAR_15;
 }
 done:
 if (VAR_17->set_security)
  VAR_17->set_security(VAR_17->dev, &VAR_24);






 if (VAR_17->reset_on_keychange &&
     VAR_17->iw_mode != VAR_8 &&
     VAR_17->reset_port &&
     VAR_17->reset_port(VAR_17->dev)) {
  FUNC_6("reset_port failed\n");
  VAR_18->u.crypt.err = VAR_4;
  return -VAR_0;
 }

 return VAR_20;
}
