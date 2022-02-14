
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int bCurDacSwingOn; scalar_t__ curDacSwingLvl; int bPreDacSwingOn; scalar_t__ preDacSwingLvl; } ;
typedef int PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int ,int,scalar_t__) ;
 int FUNC_2 (int) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_3(
 PBTC_COEXIST VAR_4,
 bool VAR_5,
 bool VAR_6,
 u32 VAR_7
)
{
 FUNC_0(
  VAR_2,
  VAR_0,
  (
   "[BTCoex], %s turn DacSwing =%s, dacSwingLvl = 0x%x\n",
   (VAR_5 ? "force to" : ""),
   (VAR_6 ? "ON" : "OFF"),
   VAR_7
  )
 );
 VAR_3->bCurDacSwingOn = VAR_6;
 VAR_3->curDacSwingLvl = VAR_7;

 if (!VAR_5) {
  FUNC_0(
   VAR_2,
   VAR_1,
   (
    "[BTCoex], bPreDacSwingOn =%d, preDacSwingLvl = 0x%x, bCurDacSwingOn =%d, curDacSwingLvl = 0x%x\n",
    VAR_3->bPreDacSwingOn,
    VAR_3->preDacSwingLvl,
    VAR_3->bCurDacSwingOn,
    VAR_3->curDacSwingLvl
   )
  );

  if ((VAR_3->bPreDacSwingOn == VAR_3->bCurDacSwingOn) &&
   (VAR_3->preDacSwingLvl == VAR_3->curDacSwingLvl))
   return;
 }
 FUNC_2(30);
 FUNC_1(VAR_4, VAR_6, VAR_7);

 VAR_3->bPreDacSwingOn = VAR_3->bCurDacSwingOn;
 VAR_3->preDacSwingLvl = VAR_3->curDacSwingLvl;
}
