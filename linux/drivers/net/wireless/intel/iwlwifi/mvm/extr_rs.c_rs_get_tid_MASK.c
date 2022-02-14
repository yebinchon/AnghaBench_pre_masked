
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_hdr {int frame_control; } ;


 int VAR_0 ;
 int* FUNC_0 (struct ieee80211_hdr*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static u8 FUNC_3(struct ieee80211_hdr *VAR_1)
{
 u8 VAR_2 = VAR_0;

 if (FUNC_1(VAR_1->frame_control)) {
  u8 *VAR_3 = FUNC_0(VAR_1);
  VAR_2 = VAR_3[0] & 0xf;
 }

 if (FUNC_2(VAR_2 > VAR_0))
  VAR_2 = VAR_0;

 return VAR_2;
}
