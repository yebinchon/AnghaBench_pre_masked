
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cfg80211_pkt_pattern {int* mask; int pkt_offset; int * pattern; int pattern_len; } ;
typedef int s8 ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int*,int *,int) ;

__attribute__((used)) static bool
FUNC_2(struct cfg80211_pkt_pattern *VAR_0, s8 *VAR_1,
        u8 VAR_2)
{
 int VAR_3, VAR_4, VAR_5 = 0;
 bool VAR_6 = 0;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0->pattern_len, 8); VAR_3++) {
  for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
   if (VAR_0->mask[VAR_3] & 1 << VAR_4) {
    FUNC_1(VAR_1 + VAR_5,
           &VAR_0->pattern[VAR_3 * 8 + VAR_4], 1);
    VAR_5++;
    if (VAR_6)
     return 0;
   } else {
    if (VAR_5)
     VAR_6 = 1;
   }




   if (!VAR_5 && !VAR_6)
    VAR_0->pkt_offset++;

   if (VAR_5 > VAR_2)
    return 0;
  }
 }

 VAR_1[VAR_2] = VAR_5;

 return 1;
}
