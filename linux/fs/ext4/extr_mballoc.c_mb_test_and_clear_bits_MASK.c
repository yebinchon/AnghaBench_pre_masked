
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ __u32 ;


 int FUNC_0 (scalar_t__*,int,int ) ;
 int FUNC_1 (int,void*) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, int VAR_1, int VAR_2)
{
 __u32 *VAR_3;
 int VAR_4 = -1;

 VAR_2 = VAR_1 + VAR_2;
 while (VAR_1 < VAR_2) {
  if ((VAR_1 & 31) == 0 && (VAR_2 - VAR_1) >= 32) {

   VAR_3 = VAR_0 + (VAR_1 >> 3);
   if (*VAR_3 != (__u32)(-1) && VAR_4 == -1)
    VAR_4 = VAR_1 + FUNC_0(VAR_3, 32, 0);
   *VAR_3 = 0;
   VAR_1 += 32;
   continue;
  }
  if (!FUNC_1(VAR_1, VAR_0) && VAR_4 == -1)
   VAR_4 = VAR_1;
  VAR_1++;
 }

 return VAR_4;
}
