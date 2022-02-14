
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct name_dentry_t {scalar_t__ unicode_0_14; } ;
typedef int s32 ;


 int FUNC_0 (scalar_t__) ;

s32 FUNC_1(struct name_dentry_t *VAR_0, u16 *VAR_1,
         s32 VAR_2)
{
 int VAR_3, VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < 30; VAR_3 += 2) {
  *VAR_1 = FUNC_0(VAR_0->unicode_0_14 + VAR_3);
  if (*VAR_1 == 0x0)
   return VAR_4;
  VAR_1++;
  VAR_4++;
 }

 *VAR_1 = 0x0;
 return VAR_4;
}
