
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int bBtLinkExist; int bPanExist; scalar_t__ bHidExist; scalar_t__ bA2dpExist; scalar_t__ bScoExist; } ;
struct TYPE_7__ {int bBtLinkExist; int bPanExist; int bScoOnly; int bA2dpOnly; int bPanOnly; int bHidOnly; scalar_t__ bHidExist; scalar_t__ bA2dpExist; scalar_t__ bScoExist; } ;
struct TYPE_6__ {int (* fBtcGet ) (TYPE_1__*,int ,int*) ;TYPE_2__ btLinkInfo; } ;
typedef TYPE_1__* PBTC_COEXIST ;
typedef TYPE_2__* PBTC_BT_LINK_INFO ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int*) ;

__attribute__((used)) static void FUNC_1(PBTC_COEXIST VAR_2)
{
 PBTC_BT_LINK_INFO VAR_3 = &VAR_2->btLinkInfo;
 bool VAR_4 = 0;

 VAR_2->fBtcGet(VAR_2, VAR_0, &VAR_4);

 VAR_3->bBtLinkExist = VAR_1->bBtLinkExist;
 VAR_3->bScoExist = VAR_1->bScoExist;
 VAR_3->bA2dpExist = VAR_1->bA2dpExist;
 VAR_3->bPanExist = VAR_1->bPanExist;
 VAR_3->bHidExist = VAR_1->bHidExist;


 if (VAR_4) {
  VAR_3->bPanExist = 1;
  VAR_3->bBtLinkExist = 1;
 }


 if (
  VAR_3->bScoExist &&
  !VAR_3->bA2dpExist &&
  !VAR_3->bPanExist &&
  !VAR_3->bHidExist
 )
  VAR_3->bScoOnly = 1;
 else
  VAR_3->bScoOnly = 0;


 if (
  !VAR_3->bScoExist &&
  VAR_3->bA2dpExist &&
  !VAR_3->bPanExist &&
  !VAR_3->bHidExist
 )
  VAR_3->bA2dpOnly = 1;
 else
  VAR_3->bA2dpOnly = 0;


 if (
  !VAR_3->bScoExist &&
  !VAR_3->bA2dpExist &&
  VAR_3->bPanExist &&
  !VAR_3->bHidExist
 )
  VAR_3->bPanOnly = 1;
 else
  VAR_3->bPanOnly = 0;


 if (
  !VAR_3->bScoExist &&
  !VAR_3->bA2dpExist &&
  !VAR_3->bPanExist &&
  VAR_3->bHidExist
 )
  VAR_3->bHidOnly = 1;
 else
  VAR_3->bHidOnly = 0;
}
