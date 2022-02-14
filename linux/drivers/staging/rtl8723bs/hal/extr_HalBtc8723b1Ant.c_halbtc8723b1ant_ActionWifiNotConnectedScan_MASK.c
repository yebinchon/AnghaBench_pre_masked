
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ btStatus; } ;
struct TYPE_10__ {scalar_t__ bPanExist; scalar_t__ bA2dpExist; } ;
struct TYPE_9__ {TYPE_2__ btLinkInfo; } ;
typedef TYPE_1__* PBTC_COEXIST ;
typedef TYPE_2__* PBTC_BT_LINK_INFO ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int ,int,int) ;
 int FUNC_3 (TYPE_1__*,int ,int,int) ;
 TYPE_3__* VAR_6 ;

__attribute__((used)) static void FUNC_4(
 PBTC_COEXIST VAR_7
)
{
 PBTC_BT_LINK_INFO VAR_8 = &VAR_7->btLinkInfo;

 FUNC_2(VAR_7, VAR_0, 0x0, 0x0);


 if (VAR_1 == VAR_6->btStatus) {
  if (VAR_8->bA2dpExist) {
   FUNC_3(VAR_7, VAR_5, 1, 32);
   FUNC_1(VAR_7, VAR_5, 4);
  } else if (VAR_8->bA2dpExist && VAR_8->bPanExist) {
   FUNC_3(VAR_7, VAR_5, 1, 22);
   FUNC_1(VAR_7, VAR_5, 4);
  } else {
   FUNC_3(VAR_7, VAR_5, 1, 20);
   FUNC_1(VAR_7, VAR_5, 4);
  }
 } else if (
  (VAR_3 == VAR_6->btStatus) ||
  (VAR_2 == VAR_6->btStatus)
 ) {
  FUNC_0(
   VAR_7, VAR_4
  );
 } else {

  FUNC_3(VAR_7, VAR_5, 0, 8);
  FUNC_1(VAR_7, VAR_5, 2);
 }
}
