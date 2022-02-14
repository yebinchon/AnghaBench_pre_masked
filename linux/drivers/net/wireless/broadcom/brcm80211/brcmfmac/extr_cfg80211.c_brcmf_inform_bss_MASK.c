
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcmf_scan_results {int count; scalar_t__ version; } ;
struct brcmf_pub {int dummy; } ;
struct TYPE_2__ {scalar_t__ escan_buf; } ;
struct brcmf_cfg80211_info {TYPE_1__ escan_info; struct brcmf_pub* pub; } ;
struct brcmf_bss_info_le {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct brcmf_pub*,char*,scalar_t__) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (struct brcmf_cfg80211_info*,struct brcmf_bss_info_le*) ;
 struct brcmf_bss_info_le* FUNC_3 (struct brcmf_scan_results*,struct brcmf_bss_info_le*) ;

__attribute__((used)) static s32 FUNC_4(struct brcmf_cfg80211_info *VAR_3)
{
 struct brcmf_pub *VAR_4 = VAR_3->pub;
 struct brcmf_scan_results *VAR_5;
 struct brcmf_bss_info_le *VAR_6 = ((void*)0);
 s32 VAR_7 = 0;
 int VAR_8;

 VAR_5 = (struct brcmf_scan_results *)VAR_3->escan_info.escan_buf;
 if (VAR_5->count != 0 &&
     VAR_5->version != VAR_0) {
  FUNC_0(VAR_4, "Version %d != WL_BSS_INFO_VERSION\n",
    VAR_5->version);
  return -VAR_1;
 }
 FUNC_1(VAR_2, "scanned AP count (%d)\n", VAR_5->count);
 for (VAR_8 = 0; VAR_8 < VAR_5->count; VAR_8++) {
  VAR_6 = FUNC_3(VAR_5, VAR_6);
  VAR_7 = FUNC_2(VAR_3, VAR_6);
  if (VAR_7)
   break;
 }
 return VAR_7;
}
