
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct mvs_info {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct mvs_info *VAR_1,
   u32 *VAR_2,
   u8 VAR_3,
   u8 VAR_4,
   u8 VAR_5,
   u32 VAR_6
   )
{
 u32 VAR_7;

 VAR_7 = ((u32)VAR_3 << 24) | ((u32)VAR_5 << 19);
 if (VAR_4)
  VAR_7 |= 1U<<23;

 if (VAR_6 != VAR_0) {
  VAR_7 |= 1U<<22;
  VAR_7 |= (VAR_6 & 0x0003FFFF);
 }

 *VAR_2 = VAR_7;
 return 0;
}
