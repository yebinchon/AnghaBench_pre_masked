
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct survey_info {int noise; int filled; } ;
struct ath_softc {struct survey_info* survey; struct ath_hw* sc_ah; } ;
struct ath_hw {struct ath9k_channel* channels; } ;
struct ath9k_channel {scalar_t__ noisefloor; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath_hw*,struct ath9k_channel*,scalar_t__) ;

void FUNC_1(struct ath_softc *VAR_1, int VAR_2)
{
 struct ath_hw *VAR_3 = VAR_1->sc_ah;
 struct ath9k_channel *VAR_4 = &VAR_3->channels[VAR_2];
 struct survey_info *VAR_5 = &VAR_1->survey[VAR_2];

 if (VAR_4->noisefloor) {
  VAR_5->filled |= VAR_0;
  VAR_5->noise = FUNC_0(VAR_3, VAR_4,
             VAR_4->noisefloor);
 }
}
