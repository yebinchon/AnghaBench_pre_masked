
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct cfg80211_scan_request {int dummy; } ;
struct brcmf_if {TYPE_2__* drvr; } ;
struct TYPE_3__ {int run; } ;
struct brcmf_cfg80211_info {scalar_t__ int_escan_map; int scan_status; TYPE_1__ escan_info; } ;
struct TYPE_4__ {struct brcmf_cfg80211_info* config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct brcmf_cfg80211_info*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (struct brcmf_if*,struct cfg80211_scan_request*) ;
 int VAR_2 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct brcmf_if *VAR_3, u32 VAR_4,
          struct cfg80211_scan_request *VAR_5)
{
 struct brcmf_cfg80211_info *VAR_6 = VAR_3->drvr->config;
 int VAR_7;

 if (FUNC_5(VAR_0, &VAR_6->scan_status)) {
  if (VAR_6->int_escan_map)
   FUNC_1(VAR_1, "aborting internal scan: map=%u\n",
      VAR_6->int_escan_map);

  FUNC_0(VAR_6);
 }

 FUNC_1(VAR_1, "start internal scan: map=%u\n", VAR_4);
 FUNC_4(VAR_0, &VAR_6->scan_status);
 VAR_6->escan_info.run = VAR_2;
 VAR_7 = FUNC_2(VAR_3, VAR_5);
 if (VAR_7) {
  FUNC_3(VAR_0, &VAR_6->scan_status);
  return VAR_7;
 }
 VAR_6->int_escan_map = VAR_4;
 return 0;
}
