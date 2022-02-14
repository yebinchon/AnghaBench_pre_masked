
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_rx_status {int flag; int ampdu_reference; } ;
struct ieee80211_hdr {int frame_control; } ;
struct ar9170 {int ampdu_ref; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static bool FUNC_6(struct ar9170 *VAR_4, u8 *VAR_5, u8 VAR_6,
     struct ieee80211_rx_status *VAR_7)
{
 __le16 VAR_8;

 if ((VAR_6 & VAR_0) == VAR_1) {





  return 1;
 }

 VAR_7->flag |= VAR_2 | VAR_3;
 VAR_7->ampdu_reference = VAR_4->ampdu_ref;
 VAR_8 = ((struct ieee80211_hdr *)VAR_5)->frame_control;
 if (FUNC_5(VAR_8) && FUNC_4(VAR_8))
  return 1;

 if (FUNC_0(VAR_8) || FUNC_2(VAR_8) ||
     FUNC_3(VAR_8))
  return 1;

 if (FUNC_1(VAR_8))
  return 1;

 return 0;
}
