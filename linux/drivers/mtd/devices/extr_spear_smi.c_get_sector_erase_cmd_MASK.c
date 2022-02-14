
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct spear_snor_flash {int erase_cmd; } ;



__attribute__((used)) static inline u32
FUNC_0(struct spear_snor_flash *VAR_0, u32 VAR_1)
{
 u32 VAR_2;
 u8 *VAR_3 = (u8 *)&VAR_2;

 VAR_3[0] = VAR_0->erase_cmd;
 VAR_3[1] = VAR_1 >> 16;
 VAR_3[2] = VAR_1 >> 8;
 VAR_3[3] = VAR_1;

 return VAR_2;
}
