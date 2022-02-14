
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct _adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct _adapter*,scalar_t__) ;
 int FUNC_1 (struct _adapter*,scalar_t__,int) ;

__attribute__((used)) static u8 FUNC_2(struct _adapter *VAR_1, u8 VAR_2, u16 VAR_3,
       u8 *VAR_4)
{
 u8 VAR_5 = 0, VAR_6 = 0, VAR_7;


 FUNC_1(VAR_1, VAR_0 + 1, (u8)(VAR_3 & 0xFF));
 VAR_6 = ((u8)((VAR_3 >> 8) & 0x03)) |
   (FUNC_0(VAR_1, VAR_0 + 2) & 0xFC);
 FUNC_1(VAR_1, VAR_0 + 2, VAR_6);
 if (VAR_2) {
  FUNC_1(VAR_1, VAR_0 + 3, 0x72);
  while (!(0x80 & FUNC_0(VAR_1, VAR_0 + 3)) &&
         (VAR_5 < 100))
   VAR_5++;
  if (VAR_5 < 100) {
   *VAR_4 = FUNC_0(VAR_1, VAR_0);
   VAR_7 = 1;
  } else {
   *VAR_4 = 0;
   VAR_7 = 0;
  }
 } else {
  FUNC_1(VAR_1, VAR_0, *VAR_4);
  FUNC_1(VAR_1, VAR_0 + 3, 0xF2);
  while ((0x80 & FUNC_0(VAR_1, VAR_0 + 3)) &&
         (VAR_5 < 100))
   VAR_5++;
  if (VAR_5 < 100)
   VAR_7 = 1;
  else
   VAR_7 = 0;
 }
 return VAR_7;
}
