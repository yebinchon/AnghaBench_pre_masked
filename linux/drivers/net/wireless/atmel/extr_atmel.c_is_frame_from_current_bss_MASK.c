
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_hdr {int addr2; int addr3; int frame_control; } ;
struct atmel_private {int CurrentBSSID; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct atmel_private *VAR_1,
         struct ieee80211_hdr *VAR_2)
{
 if (FUNC_0(VAR_2->frame_control) & VAR_0)
  return FUNC_1(VAR_2->addr3, VAR_1->CurrentBSSID, 6) == 0;
 else
  return FUNC_1(VAR_2->addr2, VAR_1->CurrentBSSID, 6) == 0;
}
