
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ bPanExist; scalar_t__ bA2dpExist; scalar_t__ bHidExist; scalar_t__ bScoExist; } ;
struct TYPE_7__ {TYPE_2__ btLinkInfo; } ;
typedef TYPE_1__* PBTC_COEXIST ;
typedef TYPE_2__* PBTC_BT_LINK_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (TYPE_1__*,int ,int,int) ;
 int FUNC_2 (TYPE_1__*,int ,int,int) ;

__attribute__((used)) static void FUNC_3(
 PBTC_COEXIST VAR_2
)
{
 PBTC_BT_LINK_INFO VAR_3 = &VAR_2->btLinkInfo;

 FUNC_1(VAR_2, VAR_0, 0x0, 0x0);


 if (
  (VAR_3->bScoExist) ||
  (VAR_3->bHidExist) ||
  (VAR_3->bA2dpExist)
 ) {
  FUNC_2(VAR_2, VAR_1, 1, 32);
  FUNC_0(VAR_2, VAR_1, 4);
 } else if (VAR_3->bPanExist) {
  FUNC_2(VAR_2, VAR_1, 1, 20);
  FUNC_0(VAR_2, VAR_1, 4);
 } else {
  FUNC_2(VAR_2, VAR_1, 0, 8);
  FUNC_0(VAR_2, VAR_1, 2);
 }
}
