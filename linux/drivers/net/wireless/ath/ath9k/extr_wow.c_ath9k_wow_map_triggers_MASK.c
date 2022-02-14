
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cfg80211_wowlan {scalar_t__ n_patterns; scalar_t__ magic_pkt; scalar_t__ disconnect; } ;
struct ath_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static u8 FUNC_0(struct ath_softc *VAR_4,
     struct cfg80211_wowlan *VAR_5)
{
 u8 VAR_6 = 0;

 if (VAR_5->disconnect)
  VAR_6 |= VAR_1 |
    VAR_0;
 if (VAR_5->magic_pkt)
  VAR_6 |= VAR_2;

 if (VAR_5->n_patterns)
  VAR_6 |= VAR_3;

 return VAR_6;
}
