
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtsx_chip {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtsx_chip*,scalar_t__,int*) ;
 int FUNC_1 (struct rtsx_chip*,scalar_t__,int,int) ;

int FUNC_2(struct rtsx_chip *VAR_6, u8 VAR_7, u16 VAR_8, u32 VAR_9,
        u32 VAR_10)
{
 int VAR_11;
 u8 VAR_12 = 0, VAR_13;
 int VAR_14;

 for (VAR_14 = 0; VAR_14 < 4; VAR_14++) {
  if (VAR_9 & 0xFF) {
   VAR_11 = FUNC_1(VAR_6, VAR_2 + VAR_14,
           0xFF,
           (u8)(VAR_10 & VAR_9 & 0xFF));
   if (VAR_11)
    return VAR_11;
   VAR_12 |= (1 << VAR_14);
  }
  VAR_9 >>= 8;
  VAR_10 >>= 8;
 }

 if (VAR_12) {
  VAR_11 = FUNC_1(VAR_6, VAR_0, 0xFF, (u8)VAR_8);
  if (VAR_11)
   return VAR_11;
  VAR_11 = FUNC_1(VAR_6, VAR_1, 0xFF,
          (u8)(VAR_8 >> 8));
  if (VAR_11)
   return VAR_11;

  VAR_11 = FUNC_1(VAR_6, VAR_3, 0xFF,
          0x80 | VAR_12 |
          ((VAR_7 & 0x03) << 4));
  if (VAR_11)
   return VAR_11;

  for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++) {
   VAR_11 = FUNC_0(VAR_6, VAR_3, &VAR_13);
   if (VAR_11)
    return VAR_11;
   if ((VAR_13 & 0x80) == 0)
    break;
  }
 }

 return VAR_5;
}
