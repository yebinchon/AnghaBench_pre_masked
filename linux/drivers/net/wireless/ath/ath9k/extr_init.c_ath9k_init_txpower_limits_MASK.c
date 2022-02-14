
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_softc {struct ath_hw* sc_ah; } ;
struct TYPE_2__ {int hw_caps; } ;
struct ath_hw {struct ath9k_channel* curchan; TYPE_1__ caps; } ;
struct ath9k_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath_softc*,int ) ;

__attribute__((used)) static void FUNC_1(struct ath_softc *VAR_4)
{
 struct ath_hw *VAR_5 = VAR_4->sc_ah;
 struct ath9k_channel *VAR_6 = VAR_5->curchan;

 if (VAR_5->caps.hw_caps & VAR_0)
  FUNC_0(VAR_4, VAR_2);
 if (VAR_5->caps.hw_caps & VAR_1)
  FUNC_0(VAR_4, VAR_3);

 VAR_5->curchan = VAR_6;
}
