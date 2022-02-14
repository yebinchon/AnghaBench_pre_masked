
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_softc {TYPE_1__* cur_chan; int sc_ah; } ;
struct TYPE_2__ {int offchannel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ath_softc*) ;
 int FUNC_3 (struct ath_softc*,int ) ;

__attribute__((used)) static void FUNC_4(struct ath_softc *VAR_2)
{
 FUNC_0(VAR_2->sc_ah);
 FUNC_3(VAR_2, VAR_0);
 FUNC_3(VAR_2, VAR_1);
 FUNC_2(VAR_2);
 FUNC_1(VAR_2->sc_ah, VAR_2->cur_chan->offchannel);
}
