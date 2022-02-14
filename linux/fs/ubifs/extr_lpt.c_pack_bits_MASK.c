
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ubifs_info {int dummy; } ;


 int FUNC_0 (struct ubifs_info const*,int) ;

__attribute__((used)) static void FUNC_1(const struct ubifs_info *VAR_0, uint8_t **VAR_1, int *VAR_2, uint32_t VAR_3, int VAR_4)
{
 uint8_t *VAR_5 = *VAR_1;
 int VAR_6 = *VAR_2;

 FUNC_0(VAR_0, VAR_4 > 0);
 FUNC_0(VAR_0, VAR_4 <= 32);
 FUNC_0(VAR_0, *VAR_2 >= 0);
 FUNC_0(VAR_0, *VAR_2 < 8);
 FUNC_0(VAR_0, (VAR_3 >> VAR_4) == 0 || VAR_4 == 32);
 if (VAR_6) {
  *VAR_5 |= ((uint8_t)VAR_3) << VAR_6;
  VAR_4 += VAR_6;
  if (VAR_4 > 8) {
   *++VAR_5 = (uint8_t)(VAR_3 >>= (8 - VAR_6));
   if (VAR_4 > 16) {
    *++VAR_5 = (uint8_t)(VAR_3 >>= 8);
    if (VAR_4 > 24) {
     *++VAR_5 = (uint8_t)(VAR_3 >>= 8);
     if (VAR_4 > 32)
      *++VAR_5 = (uint8_t)(VAR_3 >>= 8);
    }
   }
  }
 } else {
  *VAR_5 = (uint8_t)VAR_3;
  if (VAR_4 > 8) {
   *++VAR_5 = (uint8_t)(VAR_3 >>= 8);
   if (VAR_4 > 16) {
    *++VAR_5 = (uint8_t)(VAR_3 >>= 8);
    if (VAR_4 > 24)
     *++VAR_5 = (uint8_t)(VAR_3 >>= 8);
   }
  }
 }
 VAR_6 = VAR_4 & 7;
 if (VAR_6 == 0)
  VAR_5++;
 *VAR_1 = VAR_5;
 *VAR_2 = VAR_6;
}
