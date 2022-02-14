
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct TYPE_2__ {size_t physical_size; size_t protect_size; size_t logical_size; } ;
struct rtw_dev {TYPE_1__ efuse; } ;


 int VAR_0 ;
 size_t FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct rtw_dev *VAR_1, u8 *VAR_2,
          u8 *VAR_3)
{
 u32 VAR_4 = VAR_1->efuse.physical_size;
 u32 VAR_5 = VAR_1->efuse.protect_size;
 u32 VAR_6 = VAR_1->efuse.logical_size;
 u32 VAR_7, VAR_8;
 u8 VAR_9, VAR_10;
 u8 VAR_11;
 u8 VAR_12;
 int VAR_13;

 for (VAR_7 = 0; VAR_7 < VAR_4 - VAR_5;) {
  VAR_9 = VAR_2[VAR_7];
  VAR_10 = VAR_2[VAR_7 + 1];
  if (FUNC_4(VAR_9, VAR_10))
   break;

  if ((VAR_9 & 0x1f) == 0xf) {

   VAR_11 = FUNC_2(VAR_9, VAR_10);
   VAR_12 = VAR_10 & 0xf;
   VAR_7 += 2;
  } else {

   VAR_11 = FUNC_1(VAR_9);
   VAR_12 = VAR_9 & 0xf;
   VAR_7 += 1;
  }

  for (VAR_13 = 0; VAR_13 < 4; VAR_13++) {
   if (FUNC_3(VAR_12, VAR_13))
    continue;

   VAR_8 = FUNC_0(VAR_11, VAR_13);
   if (VAR_7 + 1 > VAR_4 - VAR_5 ||
       VAR_8 + 1 > VAR_6)
    return -VAR_0;

   VAR_3[VAR_8] = VAR_2[VAR_7];
   VAR_3[VAR_8 + 1] = VAR_2[VAR_7 + 1];
   VAR_7 += 2;
  }
 }
 return 0;
}
