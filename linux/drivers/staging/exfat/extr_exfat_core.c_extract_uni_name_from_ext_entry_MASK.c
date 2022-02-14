
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ext_dentry_t {scalar_t__ unicode_11_12; scalar_t__ unicode_5_10; scalar_t__ unicode_0_4; } ;
typedef int s32 ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

s32 FUNC_2(struct ext_dentry_t *VAR_0, u16 *VAR_1,
        s32 VAR_2)
{
 int VAR_3, VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < 10; VAR_3 += 2) {
  *VAR_1 = FUNC_0(VAR_0->unicode_0_4 + VAR_3);
  if (*VAR_1 == 0x0)
   return VAR_4;
  VAR_1++;
  VAR_4++;
 }

 if (VAR_2 < 20) {
  for (VAR_3 = 0; VAR_3 < 12; VAR_3 += 2) {
   *VAR_1 = FUNC_1(VAR_0->unicode_5_10 + VAR_3);
   if (*VAR_1 == 0x0)
    return VAR_4;
   VAR_1++;
   VAR_4++;
  }
 } else {
  for (VAR_3 = 0; VAR_3 < 8; VAR_3 += 2) {
   *VAR_1 = FUNC_1(VAR_0->unicode_5_10 + VAR_3);
   if (*VAR_1 == 0x0)
    return VAR_4;
   VAR_1++;
   VAR_4++;
  }
  *VAR_1 = 0x0;
  return VAR_4;
 }

 for (VAR_3 = 0; VAR_3 < 4; VAR_3 += 2) {
  *VAR_1 = FUNC_1(VAR_0->unicode_11_12 + VAR_3);
  if (*VAR_1 == 0x0)
   return VAR_4;
  VAR_1++;
  VAR_4++;
 }

 *VAR_1 = 0x0;
 return VAR_4;
}
