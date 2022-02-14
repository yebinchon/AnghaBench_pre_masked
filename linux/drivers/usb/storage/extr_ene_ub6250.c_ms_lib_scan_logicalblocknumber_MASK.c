
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct us_data {scalar_t__ extra; } ;
struct ms_lib_type_extdat {int ovrflg; int mngflg; scalar_t__ logadr; } ;
struct TYPE_2__ {scalar_t__ NumberOfPhyBlock; } ;
struct ene_ub6250_info {void** bbuf; TYPE_1__ MS_Lib; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

 int VAR_8 ;
 scalar_t__ FUNC_0 (void*,void*) ;
 scalar_t__ FUNC_1 (struct us_data*,scalar_t__) ;
 int FUNC_2 (struct us_data*,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_4 (struct us_data*,scalar_t__,int ,struct ms_lib_type_extdat*) ;
 int FUNC_5 (struct us_data*,scalar_t__,int ,int,void**) ;
 int FUNC_6 (struct us_data*,scalar_t__,scalar_t__) ;
 int FUNC_7 (struct us_data*,scalar_t__) ;
 int FUNC_8 (struct ene_ub6250_info*,scalar_t__) ;
 scalar_t__ FUNC_9 (struct ene_ub6250_info*,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct us_data *VAR_9, u16 VAR_10)
{
 u16 VAR_11, VAR_12, VAR_13;
 u16 VAR_14, VAR_15;
 struct ms_lib_type_extdat VAR_16;
 u32 VAR_17 = 0, VAR_18 = 0;
 struct ene_ub6250_info *VAR_19 = (struct ene_ub6250_info *) VAR_9->extra;
 u8 *VAR_20 = VAR_19->bbuf;

 for (VAR_11 = 0; VAR_11 < VAR_19->MS_Lib.NumberOfPhyBlock;) {
  FUNC_3(VAR_11, &VAR_14, &VAR_15);

  for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++, VAR_11++) {
   switch (FUNC_8(VAR_19, VAR_11)) {
   case 128:
    continue;
   default:
    break;
   }

   if (VAR_17 == VAR_11) {
    FUNC_5(VAR_9, VAR_11, 0, 0x80,
      VAR_20);
    VAR_17 += 0x80;
   }
   VAR_18 = (VAR_11 % 0x80) * 4;

   VAR_16.ovrflg = VAR_20[VAR_18];
   VAR_16.mngflg = VAR_20[VAR_18+1];
   VAR_16.logadr = FUNC_0(VAR_20[VAR_18+2],
     VAR_20[VAR_18+3]);

   if ((VAR_16.ovrflg & VAR_4) != VAR_5) {
    FUNC_7(VAR_9, VAR_11);
    continue;
   }

   if ((VAR_16.mngflg & VAR_2) == VAR_3) {
    FUNC_2(VAR_9, VAR_11);
    continue;
   }

   if (VAR_16.logadr != VAR_0) {
    if ((VAR_16.logadr < VAR_14) || (VAR_15 <= VAR_16.logadr)) {
     FUNC_2(VAR_9, VAR_11);
     continue;
    }

    VAR_12 = FUNC_9(VAR_19, VAR_16.logadr);

    if (VAR_12 != VAR_0) {
     if (VAR_16.logadr == 0) {
      FUNC_6(VAR_9, VAR_16.logadr, VAR_11);
      if (FUNC_1(VAR_9, VAR_10)) {
       FUNC_6(VAR_9, VAR_16.logadr, VAR_12);
       continue;
      }
     }

     FUNC_4(VAR_9, VAR_12, 0, &VAR_16);
     if ((VAR_16.ovrflg & VAR_6) == VAR_7) {
      FUNC_2(VAR_9, VAR_11);
      continue;
     } else {
      FUNC_2(VAR_9, VAR_12);
     }
    }

    FUNC_6(VAR_9, VAR_16.logadr, VAR_11);
   }
  }
 }

 return VAR_8;
}
