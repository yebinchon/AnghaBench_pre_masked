
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static u32 FUNC_0(u32 VAR_1, u32 VAR_2)
{
 u32 VAR_3, VAR_4 = 1;

 while (VAR_1 > VAR_0) {
  VAR_1 -= VAR_0;
  VAR_4++;
 }

 VAR_3 = VAR_2;
 while ((VAR_3 & VAR_4) == 0)
  VAR_3 >>= 1;

 if (VAR_4 != VAR_3)
  VAR_3 <<= 1;

 return VAR_3;
}
