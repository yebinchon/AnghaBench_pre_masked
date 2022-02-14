
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtsx_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct rtsx_chip*) ;
 int FUNC_3 (struct rtsx_chip*,scalar_t__,int,int*) ;
 int FUNC_4 (int*) ;
 int* FUNC_5 (int ) ;

int FUNC_6(struct rtsx_chip *VAR_3, u8 VAR_4, u16 VAR_5, u8 *VAR_6,
        int VAR_7)
{
 u32 *VAR_8;
 u16 VAR_9 = VAR_5 % 4;
 u16 VAR_10 = VAR_5 - VAR_9;
 int VAR_11, VAR_12, VAR_13;
 int VAR_14;

 if ((VAR_7 + VAR_9) % 4)
  VAR_11 = (VAR_7 + VAR_9) / 4 + 1;
 else
  VAR_11 = (VAR_7 + VAR_9) / 4;

 FUNC_1(FUNC_2(VAR_3), "dw_len = %d\n", VAR_11);

 VAR_8 = FUNC_5(FUNC_0(VAR_11, 4));
 if (!VAR_8)
  return VAR_1;

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  VAR_14 = FUNC_3(VAR_3, VAR_4, VAR_10 + VAR_12 * 4,
       VAR_8 + VAR_12);
  if (VAR_14 != VAR_2) {
   FUNC_4(VAR_8);
   return VAR_0;
  }
 }

 if (VAR_6) {
  VAR_13 = 0;

  for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
   VAR_6[VAR_12] = (u8)(VAR_8[VAR_13] >> (VAR_9 * 8));
   if (++VAR_9 == 4) {
    VAR_13++;
    VAR_9 = 0;
   }
  }
 }

 FUNC_4(VAR_8);

 return VAR_2;
}
