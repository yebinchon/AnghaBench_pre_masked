
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wiphy {struct ieee80211_supported_band** bands; } ;
struct ieee80211_supported_band {int dummy; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_if {int dummy; } ;
struct brcmf_cfg80211_info {struct brcmf_pub* pub; } ;
typedef size_t s32 ;


 size_t FUNC_0 (struct ieee80211_supported_band**) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct brcmf_pub*,char*,int) ;
 int FUNC_2 (struct brcmf_cfg80211_info*,int*) ;
 int FUNC_3 (int ,char*,int,...) ;
 int FUNC_4 (struct brcmf_if*,char*,int*) ;
 int FUNC_5 (struct brcmf_if*,int*) ;
 struct brcmf_if* FUNC_6 (struct brcmf_pub*,int ) ;
 int FUNC_7 (struct ieee80211_supported_band*,int*,int) ;
 int FUNC_8 (struct ieee80211_supported_band*,int*,int,int,int,int) ;
 struct wiphy* FUNC_9 (struct brcmf_cfg80211_info*) ;

__attribute__((used)) static int FUNC_10(struct brcmf_cfg80211_info *VAR_4)
{
 struct brcmf_pub *VAR_5 = VAR_4->pub;
 struct brcmf_if *VAR_6 = FUNC_6(VAR_5, 0);
 struct wiphy *VAR_7 = FUNC_9(VAR_4);
 u32 VAR_8 = 0;
 u32 VAR_9 = 0;
 u32 VAR_10[2] = { VAR_3, VAR_3 };
 u32 VAR_11;
 u32 VAR_12;
 int VAR_13;
 s32 VAR_14;
 struct ieee80211_supported_band *VAR_15;
 u32 VAR_16 = 0;
 u32 VAR_17 = 0;
 u32 VAR_18 = 0;

 (void)FUNC_4(VAR_6, "vhtmode", &VAR_9);
 VAR_13 = FUNC_4(VAR_6, "nmode", &VAR_8);
 if (VAR_13) {
  FUNC_1(VAR_5, "nmode error (%d)\n", VAR_13);
 } else {
  FUNC_5(VAR_6, VAR_10);
 }
 FUNC_3(VAR_0, "nmode=%d, vhtmode=%d, bw_cap=(%d, %d)\n",
    VAR_8, VAR_9, VAR_10[VAR_1],
    VAR_10[VAR_2]);

 VAR_13 = FUNC_4(VAR_6, "rxchain", &VAR_11);
 if (VAR_13) {
  FUNC_1(VAR_5, "rxchain error (%d)\n", VAR_13);
  VAR_12 = 1;
 } else {
  for (VAR_12 = 0; VAR_11; VAR_12++)
   VAR_11 = VAR_11 & (VAR_11 - 1);
 }
 FUNC_3(VAR_0, "nchain=%d\n", VAR_12);

 VAR_13 = FUNC_2(VAR_4, VAR_10);
 if (VAR_13) {
  FUNC_1(VAR_5, "brcmf_construct_chaninfo failed (%d)\n", VAR_13);
  return VAR_13;
 }

 if (VAR_9) {
  (void)FUNC_4(VAR_6, "txstreams", &VAR_16);
  (void)FUNC_4(VAR_6, "txbf_bfe_cap",
           &VAR_17);
  (void)FUNC_4(VAR_6, "txbf_bfr_cap",
           &VAR_18);
 }

 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_7->bands); VAR_14++) {
  VAR_15 = VAR_7->bands[VAR_14];
  if (VAR_15 == ((void*)0))
   continue;

  if (VAR_8)
   FUNC_7(VAR_15, VAR_10, VAR_12);
  if (VAR_9)
   FUNC_8(VAR_15, VAR_10, VAR_12, VAR_16,
          VAR_17, VAR_18);
 }

 return 0;
}
