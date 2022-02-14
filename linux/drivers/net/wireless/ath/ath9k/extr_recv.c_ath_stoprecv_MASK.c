
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * rxlink; } ;
struct ath_softc {struct ath_hw* sc_ah; TYPE_2__ rx; } ;
struct TYPE_3__ {int hw_caps; } ;
struct ath_hw {int ah_flags; TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath_softc*,int ) ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*,int ) ;
 int FUNC_4 (struct ath_hw*,int*) ;
 int FUNC_5 (int ,int ,char*) ;
 int FUNC_6 (struct ath_softc*) ;
 int FUNC_7 (struct ath_softc*) ;
 scalar_t__ FUNC_8 (int) ;

bool FUNC_9(struct ath_softc *VAR_4)
{
 struct ath_hw *VAR_5 = VAR_4->sc_ah;
 bool VAR_6, VAR_7 = 0;

 FUNC_1(VAR_5);
 FUNC_3(VAR_5, 0);
 VAR_6 = FUNC_4(VAR_5, &VAR_7);

 FUNC_7(VAR_4);

 if (VAR_4->sc_ah->caps.hw_caps & VAR_1)
  FUNC_6(VAR_4);
 else
  VAR_4->rx.rxlink = ((void*)0);

 if (!(VAR_5->ah_flags & VAR_0) &&
     FUNC_8(!VAR_6)) {
  FUNC_5(FUNC_2(VAR_4->sc_ah), VAR_2,
   "Failed to stop Rx DMA\n");
  FUNC_0(VAR_4, VAR_3);
 }
 return VAR_6 && !VAR_7;
}
