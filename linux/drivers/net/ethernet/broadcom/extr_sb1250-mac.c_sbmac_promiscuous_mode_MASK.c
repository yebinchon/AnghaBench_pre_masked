
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct sbmac_softc {scalar_t__ sbm_state; int sbm_rxfilter; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_2(struct sbmac_softc *VAR_2,int VAR_3)
{
 uint64_t VAR_4;

 if (VAR_2->sbm_state != VAR_1)
  return;

 if (VAR_3) {
  VAR_4 = FUNC_0(VAR_2->sbm_rxfilter);
  VAR_4 |= VAR_0;
  FUNC_1(VAR_4, VAR_2->sbm_rxfilter);
 }
 else {
  VAR_4 = FUNC_0(VAR_2->sbm_rxfilter);
  VAR_4 &= ~VAR_0;
  FUNC_1(VAR_4, VAR_2->sbm_rxfilter);
 }
}
