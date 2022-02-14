
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mt7601u_dev {int ap_bssid; } ;
struct ieee80211_hdr {int addr2; int frame_control; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct mt7601u_dev *VAR_0, u8 *VAR_1)
{
 struct ieee80211_hdr *VAR_2 = (struct ieee80211_hdr *)VAR_1;

 return FUNC_1(VAR_2->frame_control) &&
  FUNC_0(VAR_2->addr2, VAR_0->ap_bssid);
}
