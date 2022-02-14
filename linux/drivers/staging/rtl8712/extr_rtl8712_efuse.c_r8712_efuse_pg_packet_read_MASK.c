
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct _adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct _adapter*,scalar_t__,int*) ;
 int FUNC_2 (int*,int,int) ;
 int FUNC_3 (int,int*,int*) ;

u8 FUNC_4(struct _adapter *VAR_2, u8 VAR_3, u8 *VAR_4)
{
 u8 VAR_5 = 0, VAR_6 = 0, VAR_7 = 0;
 u16 VAR_8 = 0;
 u8 VAR_9;
 u8 VAR_10 = 0;
 u8 VAR_11[VAR_0];
 u8 VAR_12 = 1;

 if (!VAR_4)
  return 0;
 if (VAR_3 > 0x0f)
  return 0;
 FUNC_2(VAR_4, 0xFF, sizeof(u8) * VAR_0);
 while (VAR_8 < VAR_1) {
  if (FUNC_1(VAR_2, VAR_8, &VAR_9)) {
   if (VAR_9 == 0xFF)
    break;
   VAR_5 = (VAR_9 >> 4) & 0x0F;
   VAR_6 = VAR_9 & 0x0F;
   VAR_7 = FUNC_0(VAR_6);
   if (VAR_5 == VAR_3) {
    FUNC_2(VAR_11, 0xFF, VAR_0);
    for (VAR_10 = 0; VAR_10 < VAR_7 * 2;
         VAR_10++) {
     if (FUNC_1(VAR_2,
         VAR_8 + 1 + VAR_10,
         &VAR_9)) {
      VAR_11[VAR_10] = VAR_9;
     } else {
      VAR_12 = 0;
     }
    }
    FUNC_3(VAR_6, VAR_11, VAR_4);
   }
   VAR_8 += 1 + (VAR_7 * 2);
  } else {
   VAR_12 = 0;
   break;
  }
 }
 return VAR_12;
}
