
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct e1000_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ,scalar_t__) ;
 int FUNC_1 (struct e1000_hw*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_3, u8 *VAR_4,
       u16 VAR_5, u16 VAR_6, u8 *VAR_7)
{
 u8 *VAR_8;
 u8 *VAR_9 = VAR_4;
 u32 VAR_10 = 0;
 u16 VAR_11, VAR_12, VAR_13, VAR_14;



 if (VAR_5 == 0 || VAR_6 + VAR_5 > VAR_1)
  return -VAR_0;

 VAR_8 = (u8 *)&VAR_10;
 VAR_14 = VAR_6 & 0x3;
 VAR_6 >>= 2;

 if (VAR_14) {
  VAR_10 = FUNC_0(VAR_3, VAR_2, VAR_6);
  for (VAR_13 = VAR_14; VAR_13 < sizeof(u32); VAR_13++) {
   *(VAR_8 + VAR_13) = *VAR_9++;
   *VAR_7 += *(VAR_8 + VAR_13);
  }
  FUNC_1(VAR_3, VAR_2, VAR_6, VAR_10);
  VAR_5 -= VAR_13 - VAR_14;
  VAR_6++;
 }

 VAR_11 = VAR_5 & 0x3;
 VAR_5 -= VAR_11;


 VAR_5 >>= 2;




 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  for (VAR_13 = 0; VAR_13 < sizeof(u32); VAR_13++) {
   *(VAR_8 + VAR_13) = *VAR_9++;
   *VAR_7 += *(VAR_8 + VAR_13);
  }

  FUNC_1(VAR_3, VAR_2, VAR_6 + VAR_12, VAR_10);
 }
 if (VAR_11) {
  for (VAR_13 = 0; VAR_13 < sizeof(u32); VAR_13++) {
   if (VAR_13 < VAR_11)
    *(VAR_8 + VAR_13) = *VAR_9++;
   else
    *(VAR_8 + VAR_13) = 0;

   *VAR_7 += *(VAR_8 + VAR_13);
  }
  FUNC_1(VAR_3, VAR_2, VAR_6 + VAR_12, VAR_10);
 }

 return 0;
}
