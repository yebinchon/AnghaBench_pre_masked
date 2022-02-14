
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(u32 VAR_1, u32 VAR_2, u16 *VAR_3)
{
 u32 VAR_4;

 if (!VAR_2)
  return -VAR_0;

 if (VAR_2 == VAR_1) {
  *VAR_3 = 1 << 10;
  return 0;
 }

 VAR_4 = (VAR_1 << 10) / VAR_2;
 if ((VAR_4 > 0xFFFF) || (!VAR_4))

  return -VAR_0;

 *VAR_3 = (u16)VAR_4;

 return 0;
}
