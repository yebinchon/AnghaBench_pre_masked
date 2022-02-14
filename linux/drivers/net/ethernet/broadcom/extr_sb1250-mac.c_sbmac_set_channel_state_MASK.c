
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbmac_softc {int sbm_state; } ;
typedef enum sbmac_state { ____Placeholder_sbmac_state } sbmac_state ;


 int FUNC_0 (struct sbmac_softc*) ;
 int FUNC_1 (struct sbmac_softc*) ;
 int VAR_0 ;

__attribute__((used)) static enum sbmac_state FUNC_2(struct sbmac_softc *VAR_1,
      enum sbmac_state VAR_2)
{
 enum sbmac_state VAR_3 = VAR_1->sbm_state;





 if (VAR_2 == VAR_3) {
  return VAR_3;
 }





 if (VAR_2 == VAR_0) {
  FUNC_0(VAR_1);
 }
 else {
  FUNC_1(VAR_1);
 }





 return VAR_3;
}
