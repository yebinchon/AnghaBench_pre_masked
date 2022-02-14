
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_p2p_noa_info {int num_descriptors; int ctwindow_oppps; } ;
struct ieee80211_p2p_noa_desc {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static size_t FUNC_0(const struct wmi_p2p_noa_info *VAR_1)
{
 size_t VAR_2 = 0;

 if (!VAR_1->num_descriptors &&
     !(VAR_1->ctwindow_oppps & VAR_0))
  return 0;

 VAR_2 += 1 + 1 + 4;
 VAR_2 += 1 + 2;
 VAR_2 += 1 + 1;
 VAR_2 += VAR_1->num_descriptors * sizeof(struct ieee80211_p2p_noa_desc);

 return VAR_2;
}
