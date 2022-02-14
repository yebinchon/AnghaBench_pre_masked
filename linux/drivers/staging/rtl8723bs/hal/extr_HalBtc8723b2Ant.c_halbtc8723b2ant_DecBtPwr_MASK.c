
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {scalar_t__ curBtDecPwrLvl; scalar_t__ preBtDecPwrLvl; } ;
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
   "[BTCoex], %s Dec BT power level = %d\n",
   (VAR_5 ? "force to" : ""),
   VAR_6
  )
 );
 VAR_3->curBtDecPwrLvl = VAR_6;

 if (!VAR_5) {
  FUNC_0(
   VAR_2,
   VAR_1,
   (
    "[BTCoex], preBtDecPwrLvl =%d, curBtDecPwrLvl =%d\n",
    VAR_3->preBtDecPwrLvl,
    VAR_3->curBtDecPwrLvl
   )
  );

  if (VAR_3->preBtDecPwrLvl == VAR_3->curBtDecPwrLvl)
   return;
 }
 FUNC_1(VAR_4, VAR_3->curBtDecPwrLvl);

 VAR_3->preBtDecPwrLvl = VAR_3->curBtDecPwrLvl;
}
