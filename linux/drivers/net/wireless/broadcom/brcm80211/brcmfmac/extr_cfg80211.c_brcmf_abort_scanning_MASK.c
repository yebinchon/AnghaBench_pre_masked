
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct escan_info {int ifp; int escan_state; } ;
struct brcmf_cfg80211_info {int scan_status; scalar_t__ scan_request; scalar_t__ int_escan_map; struct escan_info escan_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct brcmf_cfg80211_info*,int ,int,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(struct brcmf_cfg80211_info *VAR_3)
{
 struct escan_info *VAR_4 = &VAR_3->escan_info;

 FUNC_2(VAR_0, &VAR_3->scan_status);
 if (VAR_3->int_escan_map || VAR_3->scan_request) {
  VAR_4->escan_state = VAR_2;
  FUNC_0(VAR_3, VAR_4->ifp, 1, 1);
 }
 FUNC_1(VAR_1, &VAR_3->scan_status);
 FUNC_1(VAR_0, &VAR_3->scan_status);
}
