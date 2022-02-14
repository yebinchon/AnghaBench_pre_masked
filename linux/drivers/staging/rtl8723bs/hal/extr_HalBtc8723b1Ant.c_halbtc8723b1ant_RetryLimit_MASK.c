
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {int curRetryLimitType; int preRetryLimitType; int backupRetryLimit; } ;
struct TYPE_6__ {int (* fBtcWrite2Byte ) (TYPE_1__*,int,int) ;} ;
typedef TYPE_1__* PBTC_COEXIST ;


 TYPE_4__* VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_2(
 PBTC_COEXIST VAR_1, bool VAR_2, u8 VAR_3
)
{
 VAR_0->curRetryLimitType = VAR_3;

 if (
  VAR_2 ||
  (VAR_0->preRetryLimitType != VAR_0->curRetryLimitType)
 ) {
  switch (VAR_0->curRetryLimitType) {
  case 0:
   VAR_1->fBtcWrite2Byte(
    VAR_1, 0x42a, VAR_0->backupRetryLimit
   );
   break;
  case 1:
   VAR_1->fBtcWrite2Byte(VAR_1, 0x42a, 0x0808);
   break;
  default:
   break;
  }
 }

 VAR_0->preRetryLimitType = VAR_0->curRetryLimitType;
}
