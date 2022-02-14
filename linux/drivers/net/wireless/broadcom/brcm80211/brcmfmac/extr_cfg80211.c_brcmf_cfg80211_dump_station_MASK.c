
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wiphy {int dummy; } ;
struct station_info {int dummy; } ;
struct net_device {int dummy; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_if {int dummy; } ;
struct TYPE_2__ {int * mac; scalar_t__ count; } ;
struct brcmf_cfg80211_info {TYPE_1__ assoclist; struct brcmf_pub* pub; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct brcmf_pub*,char*,scalar_t__) ;
 int FUNC_1 (struct wiphy*,struct net_device*,int *,struct station_info*) ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (struct brcmf_if*,int ,TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,int ,int ) ;
 struct brcmf_if* FUNC_7 (struct net_device*) ;
 struct brcmf_cfg80211_info* FUNC_8 (struct wiphy*) ;

__attribute__((used)) static int
FUNC_9(struct wiphy *VAR_6, struct net_device *VAR_7,
       int VAR_8, u8 *VAR_9, struct station_info *VAR_10)
{
 struct brcmf_cfg80211_info *VAR_11 = FUNC_8(VAR_6);
 struct brcmf_if *VAR_12 = FUNC_7(VAR_7);
 struct brcmf_pub *VAR_13 = VAR_11->pub;
 s32 VAR_14;

 FUNC_2(VAR_5, "Enter, idx %d\n", VAR_8);

 if (VAR_8 == 0) {
  VAR_11->assoclist.count = FUNC_4(VAR_1);
  VAR_14 = FUNC_3(VAR_12, VAR_0,
          &VAR_11->assoclist,
          sizeof(VAR_11->assoclist));
  if (VAR_14) {
   FUNC_0(VAR_13, "BRCMF_C_GET_ASSOCLIST unsupported, err=%d\n",
     VAR_14);
   VAR_11->assoclist.count = 0;
   return -VAR_3;
  }
 }
 if (VAR_8 < FUNC_5(VAR_11->assoclist.count)) {
  FUNC_6(VAR_9, VAR_11->assoclist.mac[VAR_8], VAR_4);
  return FUNC_1(VAR_6, VAR_7, VAR_9, VAR_10);
 }
 return -VAR_2;
}
