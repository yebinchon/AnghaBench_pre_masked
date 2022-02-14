
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef size_t u32 ;
typedef scalar_t__ s32 ;
typedef int s16 ;
typedef int in_length ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (scalar_t__*,size_t,size_t*,size_t*) ;

u32 FUNC_2(u8 *VAR_3, u32 VAR_4, u8 *VAR_5, u32 VAR_6, s32 VAR_7)
{
 u32 VAR_8, VAR_9, VAR_10 = 0L;
 u32 VAR_11, VAR_12;
 u32 VAR_13 = VAR_2;
 u32 VAR_14 = VAR_0;
 u32 VAR_15 = 0L;

 if (VAR_7 > 0)
  --VAR_13;

 for (VAR_8 = 0; VAR_8 < VAR_6; ++VAR_8)
  VAR_5[VAR_8] = 0;


 for (VAR_8 = 0; VAR_8 < sizeof(VAR_4); ++VAR_8) {
  VAR_10 = VAR_10 | (
   FUNC_1(VAR_3,
     VAR_0,
     &VAR_14,
     &VAR_15) << (VAR_8 * VAR_0));
 }

 if (VAR_10 > VAR_6) {
  VAR_10 = 0L;
  return VAR_10;
 }

 VAR_8 = 0;
 while (VAR_8 < VAR_10) {

  if (FUNC_1(VAR_3, 1, &VAR_14,
      &VAR_15) == 0) {
   for (VAR_9 = 0; VAR_9 < VAR_1; ++VAR_9) {
    if (VAR_8 < VAR_10) {
     VAR_5[VAR_8] = (u8)FUNC_1(VAR_3,
       VAR_0,
       &VAR_14,
       &VAR_15);
     VAR_8++;
    }
   }
  } else {

   VAR_11 = FUNC_1(VAR_3, FUNC_0((s16)
     (VAR_8 > VAR_13 ?
      VAR_13 : VAR_8)),
     &VAR_14,
     &VAR_15);
   VAR_12 = FUNC_1(VAR_3, VAR_0,
     &VAR_14,
     &VAR_15);
   for (VAR_9 = 0; VAR_9 < VAR_12; ++VAR_9) {
    if (VAR_8 < VAR_10) {
     VAR_5[VAR_8] = VAR_5[VAR_8 - VAR_11];
     VAR_8++;
    }
   }
  }
 }

 return VAR_10;
}
