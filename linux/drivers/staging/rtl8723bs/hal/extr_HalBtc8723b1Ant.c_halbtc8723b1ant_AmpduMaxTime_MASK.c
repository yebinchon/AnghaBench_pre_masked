
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {int curAmpduTimeType; int preAmpduTimeType; int backupAmpduMaxTime; } ;
struct TYPE_6__ {int (* fBtcWrite1Byte ) (TYPE_1__*,int,int) ;} ;
typedef TYPE_1__* PBTC_COEXIST ;


 TYPE_4__* VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_2(
 PBTC_COEXIST VAR_1, bool VAR_2, u8 VAR_3
)
{
 VAR_0->curAmpduTimeType = VAR_3;

 if (
  VAR_2 || (VAR_0->preAmpduTimeType != VAR_0->curAmpduTimeType)
 ) {
  switch (VAR_0->curAmpduTimeType) {
  case 0:
   VAR_1->fBtcWrite1Byte(
    VAR_1, 0x456, VAR_0->backupAmpduMaxTime
   );
   break;
  case 1:
   VAR_1->fBtcWrite1Byte(VAR_1, 0x456, 0x38);
   break;
  default:
   break;
  }
 }

 VAR_0->preAmpduTimeType = VAR_0->curAmpduTimeType;
}
