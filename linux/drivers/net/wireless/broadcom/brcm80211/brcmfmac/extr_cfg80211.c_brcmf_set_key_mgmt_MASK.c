
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int* akm_suites; int cipher_group; int n_akm_suites; } ;
struct cfg80211_connect_params {int ie_len; scalar_t__ ie; TYPE_2__ crypto; int want_1x; } ;
struct brcmf_tlv {scalar_t__ len; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_if {struct brcmf_pub* drvr; TYPE_1__* vif; } ;
struct brcmf_cfg80211_profile {scalar_t__ use_fwsup; } ;
typedef int s32 ;
struct TYPE_3__ {struct brcmf_cfg80211_profile profile; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;






 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_0 (struct brcmf_pub*,char*,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct brcmf_if*,int ) ;
 int FUNC_3 (struct brcmf_if*,char*,int*) ;
 int FUNC_4 (struct brcmf_if*,char*,int) ;
 struct brcmf_tlv* FUNC_5 (int const*,int ,int ) ;
 struct brcmf_if* FUNC_6 (struct net_device*) ;

__attribute__((used)) static s32
FUNC_7(struct net_device *VAR_23, struct cfg80211_connect_params *VAR_24)
{
 struct brcmf_if *VAR_25 = FUNC_6(VAR_23);
 struct brcmf_cfg80211_profile *VAR_26 = &VAR_25->vif->profile;
 struct brcmf_pub *VAR_27 = VAR_25->drvr;
 s32 VAR_28;
 s32 VAR_29;
 const struct brcmf_tlv *VAR_30;
 const u8 *VAR_31;
 u32 VAR_32;
 u32 VAR_33;
 u16 VAR_34;
 u32 VAR_35;
 u16 VAR_36;

 VAR_26->use_fwsup = VAR_5;

 if (!VAR_24->crypto.n_akm_suites)
  return 0;

 VAR_29 = FUNC_3(FUNC_6(VAR_23), "wpa_auth", &VAR_28);
 if (VAR_29) {
  FUNC_0(VAR_27, "could not get wpa_auth (%d)\n", VAR_29);
  return VAR_29;
 }
 if (VAR_28 & (VAR_18 | VAR_19)) {
  switch (VAR_24->crypto.akm_suites[0]) {
  case 133:
   VAR_28 = VAR_19;
   if (VAR_24->want_1x)
    VAR_26->use_fwsup = VAR_4;
   break;
  case 129:
   VAR_28 = VAR_18;
   break;
  default:
   FUNC_0(VAR_27, "invalid cipher group (%d)\n",
     VAR_24->crypto.cipher_group);
   return -VAR_7;
  }
 } else if (VAR_28 & (VAR_15 | VAR_17)) {
  switch (VAR_24->crypto.akm_suites[0]) {
  case 133:
   VAR_28 = VAR_17;
   if (VAR_24->want_1x)
    VAR_26->use_fwsup = VAR_4;
   break;
  case 132:
   VAR_28 = VAR_13;
   if (VAR_24->want_1x)
    VAR_26->use_fwsup = VAR_4;
   break;
  case 128:
   VAR_28 = VAR_16;
   break;
  case 129:
   VAR_28 = VAR_15;
   break;
  case 131:
   VAR_28 = VAR_17 | VAR_14;
   if (VAR_24->want_1x)
    VAR_26->use_fwsup = VAR_4;
   break;
  case 130:
   VAR_28 = VAR_15 | VAR_14;
   break;
  default:
   FUNC_0(VAR_27, "invalid cipher group (%d)\n",
     VAR_24->crypto.cipher_group);
   return -VAR_7;
  }
 }

 if (VAR_26->use_fwsup == VAR_4)
  FUNC_1(VAR_8, "using 1X offload\n");

 if (!FUNC_2(VAR_25, VAR_0))
  goto skip_mfp_config;



 VAR_30 = FUNC_5((const u8 *)VAR_24->ie, VAR_24->ie_len,
      VAR_12);
 if (!VAR_30)
  goto skip_mfp_config;
 VAR_31 = (const u8 *)VAR_30;
 VAR_32 = VAR_30->len + VAR_11;

 VAR_33 = VAR_11 + VAR_22 + VAR_20;
 if (VAR_33 + VAR_21 >= VAR_32)
  goto skip_mfp_config;

 VAR_36 = VAR_31[VAR_33] + (VAR_31[VAR_33 + 1] << 8);
 VAR_33 += VAR_21 + (VAR_36 * VAR_20);
 if (VAR_33 + VAR_21 >= VAR_32)
  goto skip_mfp_config;

 VAR_36 = VAR_31[VAR_33] + (VAR_31[VAR_33 + 1] << 8);
 VAR_33 += VAR_21 + (VAR_36 * VAR_20);
 if (VAR_33 + VAR_21 > VAR_32)
  goto skip_mfp_config;

 VAR_35 = VAR_2;
 VAR_34 = VAR_31[VAR_33] + (VAR_31[VAR_33 + 1] << 8);
 if (VAR_34 & VAR_10)
  VAR_35 = VAR_3;
 else if (VAR_34 & VAR_9)
  VAR_35 = VAR_1;
 FUNC_4(FUNC_6(VAR_23), "mfp", VAR_35);

skip_mfp_config:
 FUNC_1(VAR_6, "setting wpa_auth to %d\n", VAR_28);
 VAR_29 = FUNC_4(FUNC_6(VAR_23), "wpa_auth", VAR_28);
 if (VAR_29) {
  FUNC_0(VAR_27, "could not set wpa_auth (%d)\n", VAR_29);
  return VAR_29;
 }

 return VAR_29;
}
