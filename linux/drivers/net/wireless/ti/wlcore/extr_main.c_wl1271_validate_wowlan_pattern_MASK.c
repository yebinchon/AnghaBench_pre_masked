
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfg80211_pkt_pattern {int pattern_len; scalar_t__ mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,unsigned long*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(struct cfg80211_pkt_pattern *VAR_6)
{
 int VAR_7 = 0, VAR_8 = 0, VAR_9 = 0;
 int VAR_10, VAR_11 = 0;

 if (!VAR_6->mask) {
  FUNC_1("No mask in WoWLAN pattern");
  return -VAR_1;
 }
 for (VAR_10 = 0; VAR_10 < VAR_6->pattern_len; VAR_10++) {
  if (FUNC_0(VAR_10, (unsigned long *)VAR_6->mask)) {
   if (!VAR_8) {
    VAR_8 = 1;
    VAR_11 = 1;
   } else {
    if (VAR_10 == VAR_3) {
     VAR_7++;
     VAR_9 += VAR_11 +
      VAR_2;
     VAR_11 = 1;
    } else
     VAR_11++;
   }
  } else {
   if (VAR_8) {
    VAR_8 = 0;
    VAR_9 += VAR_11 +
     VAR_2;
    VAR_7++;
   }
  }
 }

 if (VAR_8) {
  VAR_9 += VAR_11 + VAR_2;
  VAR_7++;
 }

 if (VAR_7 > VAR_4) {
  FUNC_1("RX Filter too complex. Too many segments");
  return -VAR_1;
 }

 if (VAR_9 > VAR_5) {
  FUNC_1("RX filter pattern is too big");
  return -VAR_0;
 }

 return 0;
}
