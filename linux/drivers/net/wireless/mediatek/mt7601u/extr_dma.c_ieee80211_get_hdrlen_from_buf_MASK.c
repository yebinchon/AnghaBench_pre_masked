
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_hdr {int frame_control; } ;


 unsigned int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static unsigned int FUNC_2(const u8 *VAR_0, unsigned VAR_1)
{
 const struct ieee80211_hdr *VAR_2 = (const struct ieee80211_hdr *)VAR_0;
 unsigned int VAR_3;

 if (FUNC_1(VAR_1 < 10))
  return 0;
 VAR_3 = FUNC_0(VAR_2->frame_control);
 if (FUNC_1(VAR_3 > VAR_1))
  return 0;
 return VAR_3;
}
