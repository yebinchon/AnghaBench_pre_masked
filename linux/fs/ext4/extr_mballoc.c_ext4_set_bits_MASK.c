
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u32 ;


 int FUNC_0 (int,void*) ;

void FUNC_1(void *VAR_0, int VAR_1, int VAR_2)
{
 __u32 *VAR_3;

 VAR_2 = VAR_1 + VAR_2;
 while (VAR_1 < VAR_2) {
  if ((VAR_1 & 31) == 0 && (VAR_2 - VAR_1) >= 32) {

   VAR_3 = VAR_0 + (VAR_1 >> 3);
   *VAR_3 = 0xffffffff;
   VAR_1 += 32;
   continue;
  }
  FUNC_0(VAR_1, VAR_0);
  VAR_1++;
 }
}
