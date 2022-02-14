
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_9__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_12__ {int curArfrType; int preArfrType; int backupArfrCnt1; int backupArfrCnt2; } ;
struct TYPE_11__ {int (* fBtcWrite4Byte ) (TYPE_1__*,int,int) ;int (* fBtcGet ) (TYPE_1__*,int ,int*) ;} ;
typedef TYPE_1__* PBTC_COEXIST ;


 int VAR_0 ;
 TYPE_9__* VAR_1 ;
 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (TYPE_1__*,int ,int*) ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 int FUNC_4 (TYPE_1__*,int,int) ;
 int FUNC_5 (TYPE_1__*,int,int) ;
 int FUNC_6 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_7(
 PBTC_COEXIST VAR_2, bool VAR_3, u8 VAR_4
)
{
 bool VAR_5 = 0;

 VAR_1->curArfrType = VAR_4;

 if (VAR_3 || (VAR_1->preArfrType != VAR_1->curArfrType)) {
  switch (VAR_1->curArfrType) {
  case 0:
   VAR_2->fBtcWrite4Byte(
    VAR_2, 0x430, VAR_1->backupArfrCnt1
   );
   VAR_2->fBtcWrite4Byte(
    VAR_2, 0x434, VAR_1->backupArfrCnt2
   );
   break;
  case 1:
   VAR_2->fBtcGet(
    VAR_2, VAR_0, &VAR_5
   );
   if (VAR_5) {
    VAR_2->fBtcWrite4Byte(VAR_2, 0x430, 0x0);
    VAR_2->fBtcWrite4Byte(VAR_2, 0x434, 0x01010101);
   } else {
    VAR_2->fBtcWrite4Byte(VAR_2, 0x430, 0x0);
    VAR_2->fBtcWrite4Byte(VAR_2, 0x434, 0x04030201);
   }
   break;
  default:
   break;
  }
 }

 VAR_1->preArfrType = VAR_1->curArfrType;
}
