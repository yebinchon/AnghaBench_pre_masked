
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cfg80211_wowlan {size_t n_patterns; struct cfg80211_pkt_pattern* patterns; } ;
struct cfg80211_pkt_pattern {int pattern_len; int mask; int pattern; } ;
struct ath_softc {struct ath_hw* sc_ah; } ;
struct ath_hw {int dummy; } ;
typedef size_t s8 ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct ath_hw*,int *,int *,size_t,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static int FUNC_4(struct ath_softc *VAR_1,
     struct cfg80211_wowlan *VAR_2)
{
 struct ath_hw *VAR_3 = VAR_1->sc_ah;
 struct cfg80211_pkt_pattern *VAR_4 = VAR_2->patterns;
 u8 VAR_5[VAR_0];
 u8 VAR_6[VAR_0];
 int VAR_7, VAR_8 = 0;
 s8 VAR_9 = 0;

 for (VAR_9 = 0; VAR_9 < VAR_2->n_patterns; VAR_9++) {
  VAR_7 = FUNC_0(VAR_4[VAR_9].pattern_len, 8);
  FUNC_3(VAR_5, 0, VAR_0);
  FUNC_3(VAR_6, 0, VAR_0);
  FUNC_2(VAR_5, VAR_4[VAR_9].pattern, VAR_4[VAR_9].pattern_len);
  FUNC_2(VAR_6, VAR_4[VAR_9].mask, VAR_7);

  VAR_8 = FUNC_1(VAR_3,
       VAR_5,
       VAR_6,
       VAR_9 + 2,
       VAR_4[VAR_9].pattern_len);
  if (VAR_8)
   break;
 }

 return VAR_8;
}
