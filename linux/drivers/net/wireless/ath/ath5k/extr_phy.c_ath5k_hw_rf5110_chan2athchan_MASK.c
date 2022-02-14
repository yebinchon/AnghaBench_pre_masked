
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_channel {int center_freq; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u32
FUNC_2(struct ieee80211_channel *VAR_0)
{
 u32 VAR_1;

 VAR_1 = (FUNC_0(
   (FUNC_1(
    VAR_0->center_freq) - 24) / 2, 5)
    << 1) | (1 << 6) | 0x1;
 return VAR_1;
}
