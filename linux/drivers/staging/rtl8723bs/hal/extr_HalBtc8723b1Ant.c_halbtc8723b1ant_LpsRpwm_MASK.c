
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_2__ {scalar_t__ curLps; scalar_t__ curRpwm; scalar_t__ preLps; scalar_t__ preRpwm; } ;
typedef int PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int ,void*,void*) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_2(
 PBTC_COEXIST VAR_4, bool VAR_5, u8 VAR_6, u8 VAR_7
)
{
 FUNC_0(
  VAR_2,
  VAR_0,
  (
   "[BTCoex], %s set lps/rpwm = 0x%x/0x%x\n",
   (VAR_5 ? "force to" : ""),
   VAR_6,
   VAR_7
  )
 );
 VAR_3->curLps = VAR_6;
 VAR_3->curRpwm = VAR_7;

 if (!VAR_5) {
  FUNC_0(
   VAR_2,
   VAR_1,
   (
    "[BTCoex], LPS-RxBeaconMode = 0x%x , LPS-RPWM = 0x%x!!\n",
    VAR_3->curLps,
    VAR_3->curRpwm
   )
  );

  if (
   (VAR_3->preLps == VAR_3->curLps) &&
   (VAR_3->preRpwm == VAR_3->curRpwm)
  ) {
   FUNC_0(
    VAR_2,
    VAR_1,
    (
     "[BTCoex], LPS-RPWM_Last = 0x%x , LPS-RPWM_Now = 0x%x!!\n",
     VAR_3->preRpwm,
     VAR_3->curRpwm
    )
   );

   return;
  }
 }
 FUNC_1(VAR_4, VAR_6, VAR_7);

 VAR_3->preLps = VAR_3->curLps;
 VAR_3->preRpwm = VAR_3->curRpwm;
}
