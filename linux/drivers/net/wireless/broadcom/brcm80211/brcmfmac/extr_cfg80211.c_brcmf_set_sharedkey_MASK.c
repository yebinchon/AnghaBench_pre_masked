
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int* ciphers_pairwise; } ;
struct cfg80211_connect_params {scalar_t__ key_len; TYPE_1__ crypto; int key; scalar_t__ key_idx; } ;
struct brcmf_wsec_key {int len; int data; int algo; void* index; int flags; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_if {struct brcmf_pub* drvr; } ;
struct brcmf_cfg80211_security {int wpa_versions; int cipher_pairwise; scalar_t__ auth_type; } ;
struct brcmf_cfg80211_profile {struct brcmf_cfg80211_security sec; } ;
typedef int s32 ;
typedef int key ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;
 int FUNC_0 (struct brcmf_pub*,char*,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct brcmf_if*,char*,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct brcmf_wsec_key*,int ,int) ;
 struct brcmf_cfg80211_profile* FUNC_5 (struct net_device*) ;
 struct brcmf_if* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct brcmf_if*,struct brcmf_wsec_key*) ;

__attribute__((used)) static s32
FUNC_8(struct net_device *VAR_9,
      struct cfg80211_connect_params *VAR_10)
{
 struct brcmf_if *VAR_11 = FUNC_6(VAR_9);
 struct brcmf_pub *VAR_12 = VAR_11->drvr;
 struct brcmf_cfg80211_profile *VAR_13 = FUNC_5(VAR_9);
 struct brcmf_cfg80211_security *VAR_14;
 struct brcmf_wsec_key VAR_15;
 s32 VAR_16;
 s32 VAR_17 = 0;

 FUNC_1(VAR_1, "key len (%d)\n", VAR_10->key_len);

 if (VAR_10->key_len == 0)
  return 0;

 VAR_14 = &VAR_13->sec;
 FUNC_1(VAR_1, "wpa_versions 0x%x cipher_pairwise 0x%x\n",
    VAR_14->wpa_versions, VAR_14->cipher_pairwise);

 if (VAR_14->wpa_versions & (VAR_6 | VAR_7))
  return 0;

 if (!(VAR_14->cipher_pairwise &
     (128 | 129)))
  return 0;

 FUNC_4(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.len = (u32) VAR_10->key_len;
 VAR_15.index = (u32) VAR_10->key_idx;
 if (VAR_15.len > sizeof(VAR_15.data)) {
  FUNC_0(VAR_12, "Too long key length (%u)\n", VAR_15.len);
  return -VAR_4;
 }
 FUNC_3(VAR_15.data, VAR_10->key, VAR_15.len);
 VAR_15.flags = VAR_0;
 switch (VAR_14->cipher_pairwise) {
 case 128:
  VAR_15.algo = VAR_2;
  break;
 case 129:
  VAR_15.algo = VAR_3;
  break;
 default:
  FUNC_0(VAR_12, "Invalid algorithm (%d)\n",
    VAR_10->crypto.ciphers_pairwise[0]);
  return -VAR_4;
 }

 FUNC_1(VAR_1, "key length (%d) key index (%d) algo (%d)\n",
    VAR_15.len, VAR_15.index, VAR_15.algo);
 FUNC_1(VAR_1, "key \"%s\"\n", VAR_15.data);
 VAR_17 = FUNC_7(VAR_11, &VAR_15);
 if (VAR_17)
  return VAR_17;

 if (VAR_14->auth_type == VAR_5) {
  FUNC_1(VAR_1, "set auth_type to shared key\n");
  VAR_16 = VAR_8;
  VAR_17 = FUNC_2(VAR_11, "auth", VAR_16);
  if (VAR_17)
   FUNC_0(VAR_12, "set auth failed (%d)\n", VAR_17);
 }
 return VAR_17;
}
