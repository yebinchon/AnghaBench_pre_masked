
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_channel {scalar_t__ band; int center_freq; } ;
struct ath5k_hw {int dummy; } ;
struct ath5k_athchan_2ghz {unsigned int a2_athchan; unsigned int a2_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (struct ath5k_hw*,int,int ) ;
 int FUNC_2 (unsigned int,struct ath5k_athchan_2ghz*) ;
 unsigned int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct ath5k_hw *VAR_3,
  struct ieee80211_channel *VAR_4)
{
 struct ath5k_athchan_2ghz VAR_5;
 unsigned int VAR_6 =
  FUNC_3(VAR_4->center_freq);
 u32 VAR_7, VAR_8, VAR_9;
 int VAR_10;




 VAR_7 = VAR_8 = 0;

 if (VAR_4->band == VAR_2) {

  VAR_10 = FUNC_2(
   FUNC_3(VAR_4->center_freq),
   &VAR_5);
  if (VAR_10)
   return VAR_10;

  VAR_6 = VAR_5.a2_athchan;
  VAR_7 = ((FUNC_0(VAR_5.a2_flags, 8) & 0xff)
      << 5) | (1 << 4);
 }

 if (VAR_6 < 145 || !(VAR_6 & 1)) {
  VAR_9 = 1;
  VAR_8 = ((FUNC_0(VAR_6 - 24, 8) & 0xff) << 2) |
   (VAR_9 << 1) | (1 << 10) | 1;
 } else {
  VAR_9 = 0;
  VAR_8 = ((FUNC_0((VAR_6 - 24) / 2, 8) & 0xff)
   << 2) | (VAR_9 << 1) | (1 << 10) | 1;
 }

 FUNC_1(VAR_3, (VAR_8 & 0xff) | ((VAR_7 & 0xff) << 8),
   VAR_0);
 FUNC_1(VAR_3, ((VAR_8 >> 8) & 0xff) | (VAR_7 & 0xff00),
   VAR_1);

 return 0;
}
