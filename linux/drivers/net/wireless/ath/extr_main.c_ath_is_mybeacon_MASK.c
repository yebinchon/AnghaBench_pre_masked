
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_hdr {int addr3; int frame_control; } ;
struct ath_common {int curbssid; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

bool FUNC_3(struct ath_common *VAR_0, struct ieee80211_hdr *VAR_1)
{
 return FUNC_1(VAR_1->frame_control) &&
  !FUNC_2(VAR_0->curbssid) &&
  FUNC_0(VAR_1->addr3, VAR_0->curbssid);
}
