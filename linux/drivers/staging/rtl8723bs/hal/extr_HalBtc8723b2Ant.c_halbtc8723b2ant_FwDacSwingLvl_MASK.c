
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {scalar_t__ curFwDacSwingLvl; scalar_t__ preFwDacSwingLvl; } ;
typedef int PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int ,scalar_t__) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_2(
 PBTC_COEXIST VAR_4, bool VAR_5, u8 VAR_6
)
{
 FUNC_0(
  VAR_2,
  VAR_0,
  (
   "[BTCoex], %s set FW Dac Swing level = %d\n",
   (VAR_5 ? "force to" : ""),
   VAR_6
  )
 );
 VAR_3->curFwDacSwingLvl = VAR_6;

 if (!VAR_5) {
  FUNC_0(
   VAR_2,
   VAR_1,
   (
    "[BTCoex], preFwDacSwingLvl =%d, curFwDacSwingLvl =%d\n",
    VAR_3->preFwDacSwingLvl,
    VAR_3->curFwDacSwingLvl
   )
  );

  if (VAR_3->preFwDacSwingLvl == VAR_3->curFwDacSwingLvl)
   return;
 }

 FUNC_1(VAR_4, VAR_3->curFwDacSwingLvl);

 VAR_3->preFwDacSwingLvl = VAR_3->curFwDacSwingLvl;
}
