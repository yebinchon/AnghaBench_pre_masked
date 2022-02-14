
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct escan_info {scalar_t__ (* run ) (struct brcmf_cfg80211_info*,struct brcmf_if*,struct cfg80211_scan_request*) ;scalar_t__ escan_buf; int escan_state; int wiphy; struct brcmf_if* ifp; } ;
struct cfg80211_scan_request {int dummy; } ;
struct brcmf_scan_results {int buflen; scalar_t__ count; scalar_t__ version; } ;
struct brcmf_if {TYPE_1__* drvr; } ;
struct brcmf_cfg80211_info {struct escan_info escan_info; int wiphy; } ;
typedef scalar_t__ s32 ;
struct TYPE_2__ {struct brcmf_cfg80211_info* config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct brcmf_if*,int) ;
 scalar_t__ FUNC_2 (struct brcmf_cfg80211_info*,struct brcmf_if*,struct cfg80211_scan_request*) ;

__attribute__((used)) static s32
FUNC_3(struct brcmf_if *VAR_3, struct cfg80211_scan_request *VAR_4)
{
 struct brcmf_cfg80211_info *VAR_5 = VAR_3->drvr->config;
 s32 VAR_6;
 struct brcmf_scan_results *VAR_7;
 struct escan_info *VAR_8 = &VAR_5->escan_info;

 FUNC_0(VAR_0, "Enter\n");
 VAR_8->ifp = VAR_3;
 VAR_8->wiphy = VAR_5->wiphy;
 VAR_8->escan_state = VAR_2;

 FUNC_1(VAR_3, 0);
 VAR_7 = (struct brcmf_scan_results *)VAR_5->escan_info.escan_buf;
 VAR_7->version = 0;
 VAR_7->count = 0;
 VAR_7->buflen = VAR_1;

 VAR_6 = VAR_8->run(VAR_5, VAR_3, VAR_4);
 if (VAR_6)
  FUNC_1(VAR_3, 1);
 return VAR_6;
}
