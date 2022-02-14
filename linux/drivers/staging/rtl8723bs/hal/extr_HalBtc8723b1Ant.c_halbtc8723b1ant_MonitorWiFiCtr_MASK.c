
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_16__ ;
typedef struct TYPE_18__ TYPE_15__ ;


typedef int u8 ;
typedef int s32 ;
struct TYPE_20__ {scalar_t__ (* fBtcRead4Byte ) (TYPE_1__*,int) ;scalar_t__ (* fBtcRead2Byte ) (TYPE_1__*,int) ;int (* fBtcWrite1ByteBitMask ) (TYPE_1__*,int,int,int) ;int (* fBtcGet ) (TYPE_1__*,int ,int*) ;} ;
struct TYPE_19__ {scalar_t__ btStatus; } ;
struct TYPE_18__ {scalar_t__ nCRCOK_CCK; scalar_t__ nCRCOK_11g; scalar_t__ nCRCOK_11n; scalar_t__ nCRCOK_11nAgg; scalar_t__ nCRCErr_CCK; scalar_t__ nCRCErr_11g; scalar_t__ nCRCErr_11n; scalar_t__ nCRCErr_11nAgg; int bPreCCKLock; int bCCKLock; scalar_t__ bUnderIps; } ;
typedef TYPE_1__* PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_16__* VAR_6 ;
 TYPE_15__* VAR_7 ;
 int FUNC_0 (TYPE_1__*,int ,int*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int,int,int) ;
 int FUNC_4 (TYPE_1__*,int,int,int) ;
 int FUNC_5 (TYPE_1__*,int ,int*) ;
 int FUNC_6 (TYPE_1__*,int ,int*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int) ;
 scalar_t__ FUNC_10 (TYPE_1__*,int) ;
 scalar_t__ FUNC_11 (TYPE_1__*,int) ;
 scalar_t__ FUNC_12 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_13(PBTC_COEXIST VAR_8)
{
 s32 VAR_9 = 0;
 bool VAR_10 = 0, VAR_11 = 0;
 static u8 VAR_12;

 VAR_8->fBtcGet(VAR_8, VAR_0, &VAR_10);
 VAR_8->fBtcGet(VAR_8, VAR_2, &VAR_9);
 VAR_8->fBtcGet(
  VAR_8, VAR_1, &VAR_11
 );

 if (VAR_7->bUnderIps) {
  VAR_7->nCRCOK_CCK = 0;
  VAR_7->nCRCOK_11g = 0;
  VAR_7->nCRCOK_11n = 0;
  VAR_7->nCRCOK_11nAgg = 0;

  VAR_7->nCRCErr_CCK = 0;
  VAR_7->nCRCErr_11g = 0;
  VAR_7->nCRCErr_11n = 0;
  VAR_7->nCRCErr_11nAgg = 0;
 } else {
  VAR_7->nCRCOK_CCK = VAR_8->fBtcRead4Byte(VAR_8, 0xf88);
  VAR_7->nCRCOK_11g = VAR_8->fBtcRead2Byte(VAR_8, 0xf94);
  VAR_7->nCRCOK_11n = VAR_8->fBtcRead2Byte(VAR_8, 0xf90);
  VAR_7->nCRCOK_11nAgg = VAR_8->fBtcRead2Byte(VAR_8, 0xfb8);

  VAR_7->nCRCErr_CCK = VAR_8->fBtcRead4Byte(VAR_8, 0xf84);
  VAR_7->nCRCErr_11g = VAR_8->fBtcRead2Byte(VAR_8, 0xf96);
  VAR_7->nCRCErr_11n = VAR_8->fBtcRead2Byte(VAR_8, 0xf92);
  VAR_7->nCRCErr_11nAgg = VAR_8->fBtcRead2Byte(VAR_8, 0xfba);
 }



 VAR_8->fBtcWrite1ByteBitMask(VAR_8, 0xf16, 0x1, 0x1);
 VAR_8->fBtcWrite1ByteBitMask(VAR_8, 0xf16, 0x1, 0x0);

 if (VAR_10 && (VAR_9 >= 30) && !VAR_11) {
  if (
   (VAR_6->btStatus == VAR_3) ||
   (VAR_6->btStatus == VAR_4) ||
   (VAR_6->btStatus == VAR_5)
  ) {
   if (
    VAR_7->nCRCOK_CCK > (
     VAR_7->nCRCOK_11g +
     VAR_7->nCRCOK_11n +
     VAR_7->nCRCOK_11nAgg
    )
   ) {
    if (VAR_12 < 5)
     VAR_12++;
   } else {
    if (VAR_12 > 0)
     VAR_12--;
   }

  } else {
   if (VAR_12 > 0)
     VAR_12--;
  }
 } else {
  if (VAR_12 > 0)
   VAR_12--;
 }

 if (!VAR_7->bPreCCKLock) {

  if (VAR_12 >= 5)
   VAR_7->bCCKLock = 1;
  else
   VAR_7->bCCKLock = 0;
 } else {
  if (VAR_12 == 0)
   VAR_7->bCCKLock = 0;
  else
   VAR_7->bCCKLock = 1;
 }

 VAR_7->bPreCCKLock = VAR_7->bCCKLock;


}
