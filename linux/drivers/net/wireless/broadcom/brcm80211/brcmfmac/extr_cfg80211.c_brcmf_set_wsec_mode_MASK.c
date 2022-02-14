
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int* ciphers_pairwise; int cipher_group; scalar_t__ n_ciphers_pairwise; } ;
struct cfg80211_connect_params {TYPE_1__ crypto; scalar_t__ privacy; int ie_len; int ie; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_if {struct brcmf_pub* drvr; } ;
struct brcmf_cfg80211_security {int cipher_pairwise; int cipher_group; } ;
struct brcmf_cfg80211_profile {struct brcmf_cfg80211_security sec; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 int FUNC_0 (struct brcmf_pub*,char*,int) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (struct brcmf_if*,char*,int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 struct brcmf_cfg80211_profile* FUNC_4 (struct net_device*) ;
 struct brcmf_if* FUNC_5 (struct net_device*) ;

__attribute__((used)) static s32
FUNC_6(struct net_device *VAR_5,
      struct cfg80211_connect_params *VAR_6)
{
 struct brcmf_if *VAR_7 = FUNC_5(VAR_5);
 struct brcmf_cfg80211_profile *VAR_8 = FUNC_4(VAR_5);
 struct brcmf_pub *VAR_9 = VAR_7->drvr;
 struct brcmf_cfg80211_security *VAR_10;
 s32 VAR_11 = 0;
 s32 VAR_12 = 0;
 s32 VAR_13;
 s32 VAR_14 = 0;

 if (VAR_6->crypto.n_ciphers_pairwise) {
  switch (VAR_6->crypto.ciphers_pairwise[0]) {
  case 128:
  case 129:
   VAR_11 = VAR_4;
   break;
  case 130:
   VAR_11 = VAR_3;
   break;
  case 131:
   VAR_11 = VAR_0;
   break;
  case 132:
   VAR_11 = VAR_0;
   break;
  default:
   FUNC_0(VAR_9, "invalid cipher pairwise (%d)\n",
     VAR_6->crypto.ciphers_pairwise[0]);
   return -VAR_2;
  }
 }
 if (VAR_6->crypto.cipher_group) {
  switch (VAR_6->crypto.cipher_group) {
  case 128:
  case 129:
   VAR_12 = VAR_4;
   break;
  case 130:
   VAR_12 = VAR_3;
   break;
  case 131:
   VAR_12 = VAR_0;
   break;
  case 132:
   VAR_12 = VAR_0;
   break;
  default:
   FUNC_0(VAR_9, "invalid cipher group (%d)\n",
     VAR_6->crypto.cipher_group);
   return -VAR_2;
  }
 }

 FUNC_1(VAR_1, "pval (%d) gval (%d)\n", VAR_11, VAR_12);


 if (FUNC_3(VAR_6->ie, VAR_6->ie_len) && !VAR_11 && !VAR_12 &&
     VAR_6->privacy)
  VAR_11 = VAR_0;

 VAR_13 = VAR_11 | VAR_12;
 VAR_14 = FUNC_2(VAR_7, "wsec", VAR_13);
 if (VAR_14) {
  FUNC_0(VAR_9, "error (%d)\n", VAR_14);
  return VAR_14;
 }

 VAR_10 = &VAR_8->sec;
 VAR_10->cipher_pairwise = VAR_6->crypto.ciphers_pairwise[0];
 VAR_10->cipher_group = VAR_6->crypto.cipher_group;

 return VAR_14;
}
