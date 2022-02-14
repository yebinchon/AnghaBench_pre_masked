
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int VAR_0 ;

__attribute__((used)) static inline u8 FUNC_0(u32 VAR_1)
{
 u8 VAR_2 = (VAR_1 + (VAR_0 - 1))
    / (VAR_0);
 if (VAR_2 > 3)
  return 3;
 return VAR_2;
}
