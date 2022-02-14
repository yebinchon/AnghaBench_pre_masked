
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {scalar_t__ bScoExist; } ;
struct TYPE_7__ {int (* fBtcGet ) (TYPE_1__*,int ,int*) ;TYPE_2__ btLinkInfo; } ;
typedef TYPE_1__* PBTC_COEXIST ;
typedef TYPE_2__* PBTC_BT_LINK_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (TYPE_1__*,int ,int,int) ;
 int FUNC_2 (TYPE_1__*,int ,int*) ;

__attribute__((used)) static void FUNC_3(
 PBTC_COEXIST VAR_2, u8 VAR_3
)
{
 PBTC_BT_LINK_INFO VAR_4 = &VAR_2->btLinkInfo;
 bool VAR_5 = 0;

 VAR_2->fBtcGet(VAR_2, VAR_0, &VAR_5);



 if (VAR_4->bScoExist) {
  FUNC_1(VAR_2, VAR_1, 1, 5);
  FUNC_0(VAR_2, VAR_1, 5);
 } else {
  FUNC_1(VAR_2, VAR_1, 1, 6);
  FUNC_0(VAR_2, VAR_1, 5);
 }
}
