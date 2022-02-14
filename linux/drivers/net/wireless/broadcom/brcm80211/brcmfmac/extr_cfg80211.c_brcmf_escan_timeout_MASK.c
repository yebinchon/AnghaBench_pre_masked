
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_cfg80211_info {int escan_timeout_work; scalar_t__ scan_request; scalar_t__ int_escan_map; struct brcmf_pub* pub; } ;


 int FUNC_0 (struct brcmf_pub*,char*) ;
 struct brcmf_cfg80211_info* VAR_0 ;
 int VAR_1 ;
 struct brcmf_cfg80211_info* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_2)
{
 struct brcmf_cfg80211_info *VAR_3 =
   FUNC_1(VAR_3, VAR_2, VAR_1);
 struct brcmf_pub *VAR_4 = VAR_3->pub;

 if (VAR_3->int_escan_map || VAR_3->scan_request) {
  FUNC_0(VAR_4, "timer expired\n");
  FUNC_2(&VAR_3->escan_timeout_work);
 }
}
