
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static u32 FUNC_0(u32 VAR_0)
{
 u32 VAR_1 = 0;

 VAR_0 /= 1000000;
 VAR_1 = VAR_0 % 100;
 if (VAR_1) {
  VAR_0 -= VAR_1;
  VAR_0 += 100;
 }

 do {
  VAR_0 -= 100;

 } while (1000 % VAR_0);

 return VAR_0 * 1000000;
}
