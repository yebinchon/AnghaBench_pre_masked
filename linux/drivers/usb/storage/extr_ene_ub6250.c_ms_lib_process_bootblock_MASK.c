
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct us_data {scalar_t__ extra; } ;
struct ms_lib_type_extdat {int dummy; } ;
struct ms_bootblock_sysinf {scalar_t__ bMsClass; int wPageSize; int bSecuritySupport; scalar_t__ bReserved1; scalar_t__ bReserved2; scalar_t__ bFormatType; scalar_t__ bUsage; int wBlockSize; int wBlockNumber; int wTotalBlockNumber; int wMemorySize; int bCardType; } ;
struct ms_bootblock_sysent {TYPE_1__* entry; } ;
struct ms_bootblock_page0 {struct ms_bootblock_sysent sysent; struct ms_bootblock_sysinf sysinf; } ;
struct ms_bootblock_idi {int wIDIbytesPerSector; int wIDIgeneralConfiguration; } ;
struct TYPE_5__ {struct ms_bootblock_idi idi; } ;
struct ms_bootblock_cis_idi {TYPE_2__ idi; } ;
struct TYPE_6__ {int blockSize; int NumberOfPhyBlock; int PagesPerBlock; int NumberOfSegment; int BytesPerSector; scalar_t__ NumberOfLogBlock; int cardType; } ;
struct ene_ub6250_info {TYPE_3__ MS_Lib; scalar_t__ MS_Model; } ;
struct TYPE_4__ {scalar_t__ bType; int dwSize; int dwStart; } ;


 int VAR_0 ;
 int VAR_1 ;

 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;



 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__* FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct us_data*) ;
 int FUNC_6 (struct ene_ub6250_info*,int ) ;
 int FUNC_7 (struct ene_ub6250_info*,int ) ;
 int FUNC_8 (struct us_data*) ;
 int FUNC_9 (struct us_data*,int) ;
 int FUNC_10 (struct us_data*,int) ;
 int FUNC_11 (struct us_data*,int,scalar_t__,int*,struct ms_lib_type_extdat*) ;

__attribute__((used)) static int FUNC_12(struct us_data *VAR_17, u16 VAR_18, u8 *VAR_19)
{
 struct ms_bootblock_sysent *VAR_20;
 struct ms_bootblock_sysinf *VAR_21;
 u32 VAR_22, VAR_23;
 u8 VAR_24;
 u8 *VAR_25;
 struct ms_lib_type_extdat VAR_26;
 struct ene_ub6250_info *VAR_27 = (struct ene_ub6250_info *) VAR_17->extra;

 VAR_25 = FUNC_3(VAR_1, VAR_0);
 if (VAR_25 == ((void*)0))
  return (u32)-1;

 VAR_23 = (u32)-1;

 VAR_21 = &(((struct ms_bootblock_page0 *)VAR_19)->sysinf);

 if ((VAR_21->bMsClass != VAR_9) ||
  (FUNC_0(VAR_21->wPageSize) != VAR_10) ||
  ((VAR_21->bSecuritySupport & VAR_13) == VAR_14) ||
  (VAR_21->bReserved1 != VAR_11) ||
  (VAR_21->bReserved2 != VAR_12) ||
  (VAR_21->bFormatType != VAR_8) ||
  (VAR_21->bUsage != VAR_15))
  goto exit;

 switch (VAR_27->MS_Lib.cardType = VAR_21->bCardType) {
 case 129:
  FUNC_7(VAR_27, VAR_3);
  break;
 case 128:
  FUNC_6(VAR_27, VAR_3);
  break;
 case 130:
 default:
  goto exit;
 }

 VAR_27->MS_Lib.blockSize = FUNC_0(VAR_21->wBlockSize);
 VAR_27->MS_Lib.NumberOfPhyBlock = FUNC_0(VAR_21->wBlockNumber);
 VAR_27->MS_Lib.NumberOfLogBlock = FUNC_0(VAR_21->wTotalBlockNumber)-2;
 VAR_27->MS_Lib.PagesPerBlock = VAR_27->MS_Lib.blockSize * VAR_16 / VAR_1;
 VAR_27->MS_Lib.NumberOfSegment = VAR_27->MS_Lib.NumberOfPhyBlock / VAR_5;
 VAR_27->MS_Model = FUNC_0(VAR_21->wMemorySize);


 if (FUNC_5(VAR_17))
  goto exit;


 FUNC_9(VAR_17, VAR_18);

 VAR_20 = &(((struct ms_bootblock_page0 *)VAR_19)->sysent);

 for (VAR_22 = 0; VAR_22 < VAR_4; VAR_22++) {
  u32 VAR_28, VAR_29;

  VAR_28 = FUNC_1(VAR_20->entry[VAR_22].dwStart);

  if (VAR_28 == 0xffffff)
   continue;
  VAR_29 = FUNC_1(VAR_20->entry[VAR_22].dwSize);

  if (VAR_29 == 0)
   continue;

  if (VAR_28 + VAR_1 + VAR_29 > VAR_27->MS_Lib.blockSize * (u32)VAR_16)
   continue;

  if (VAR_22 == 0) {
   u8 VAR_30 = 0;
   u16 VAR_31;

   if (VAR_20->entry[VAR_22].bType != VAR_7)
    goto exit;

   while (VAR_29 > 0) {

    VAR_24 = (u8)(VAR_28 / VAR_1 + 1);
    if (VAR_24 != VAR_30) {
     switch (FUNC_11(VAR_17, VAR_18, VAR_24, (u32 *)VAR_25, &VAR_26)) {
     case 132:
      break;
     case 131:
     case 134:
     case 133:
     default:
      goto exit;
     }

     VAR_30 = VAR_24;
    }

    VAR_31 = FUNC_0(*(u16 *)(VAR_25 + (VAR_28 % VAR_1)));
    if (VAR_31 < 0x0fff)
     FUNC_10(VAR_17, VAR_31);

    VAR_28 += 2;
    VAR_29 -= 2;
   }
  } else if (VAR_22 == 1) {
   struct ms_bootblock_idi *VAR_32;

   if (VAR_20->entry[VAR_22].bType != VAR_6)
    goto exit;

   switch (FUNC_11(VAR_17, VAR_18, (u8)(VAR_28 / VAR_1 + 1), (u32 *)VAR_25, &VAR_26)) {
   case 132:
    break;
   case 131:
   case 134:
   case 133:
   default:
    goto exit;
   }

   VAR_32 = &((struct ms_bootblock_cis_idi *)(VAR_25 + (VAR_28 % VAR_1)))->idi.idi;
   if (FUNC_4(VAR_32->wIDIgeneralConfiguration) != VAR_2)
    goto exit;

   VAR_27->MS_Lib.BytesPerSector = FUNC_4(VAR_32->wIDIbytesPerSector);
   if (VAR_27->MS_Lib.BytesPerSector != VAR_1)
    goto exit;
  }
 }

 VAR_23 = 0;

exit:
 if (VAR_23)
  FUNC_8(VAR_17);

 FUNC_2(VAR_25);

 VAR_23 = 0;
 return VAR_23;
}
