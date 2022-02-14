
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __le32 ;


 scalar_t__ FUNC_0 (int *,unsigned int,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static unsigned FUNC_2(__le32 *VAR_0, unsigned *VAR_1)
{
 unsigned VAR_2;
 while (FUNC_0(VAR_0, *VAR_1, 1)) {
  (*VAR_1)++;
  if (FUNC_1(*VAR_1 >= 0x4000))
   return 0;
 }
 VAR_2 = 1;
 while (!FUNC_0(VAR_0, *VAR_1 + VAR_2, 1))
  VAR_2++;
 return VAR_2;
}
