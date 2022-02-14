
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;



__attribute__((used)) static inline int FUNC_0(u32 VAR_0)
{
 bool VAR_1 = 1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 4; VAR_2++) {
  u8 VAR_3 = (u8)(VAR_0 >> (VAR_2 * 8));

  if ((VAR_3 < 0x01) || (VAR_3 > 0x04)) {
   VAR_1 = 0;
   break;
  }
 }

 return VAR_1;
}
