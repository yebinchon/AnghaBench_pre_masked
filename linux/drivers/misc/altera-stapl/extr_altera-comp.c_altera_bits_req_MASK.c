
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;

__attribute__((used)) static u32 FUNC_0(u32 VAR_1)
{
 u32 VAR_2 = VAR_0;

 if (VAR_1 == 0)
  VAR_2 = 1;
 else {

  while ((VAR_1 & (1 << (VAR_0 - 1))) == 0) {
   VAR_1 <<= 1;
   --VAR_2;
  }
 }

 return VAR_2;
}
