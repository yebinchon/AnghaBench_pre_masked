
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bCurAgcTableEn; int bPreAgcTableEn; } ;
typedef int PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int ,int) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_2(
 PBTC_COEXIST VAR_4, bool VAR_5, bool VAR_6
)
{
 FUNC_0(
  VAR_2,
  VAR_0,
  (
   "[BTCoex], %s %s Agc Table\n",
   (VAR_5 ? "force to" : ""),
   (VAR_6 ? "Enable" : "Disable")
  )
 );
 VAR_3->bCurAgcTableEn = VAR_6;

 if (!VAR_5) {
  FUNC_0(
   VAR_2,
   VAR_1,
   (
    "[BTCoex], bPreAgcTableEn =%d, bCurAgcTableEn =%d\n",
    VAR_3->bPreAgcTableEn,
    VAR_3->bCurAgcTableEn
   )
  );

  if (VAR_3->bPreAgcTableEn == VAR_3->bCurAgcTableEn)
   return;
 }
 FUNC_1(VAR_4, VAR_6);

 VAR_3->bPreAgcTableEn = VAR_3->bCurAgcTableEn;
}
