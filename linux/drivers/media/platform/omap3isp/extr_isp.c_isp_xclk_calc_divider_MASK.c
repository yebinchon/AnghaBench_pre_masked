
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 unsigned long VAR_0 ;

__attribute__((used)) static u32 FUNC_1(unsigned long *VAR_1, unsigned long VAR_2)
{
 u32 VAR_3;

 if (*VAR_1 >= VAR_2) {
  *VAR_1 = VAR_2;
  return VAR_0;
 }

 if (*VAR_1 == 0)
  *VAR_1 = 1;

 VAR_3 = FUNC_0(VAR_2, *VAR_1);
 if (VAR_3 >= VAR_0)
  VAR_3 = VAR_0 - 1;

 *VAR_1 = VAR_2 / VAR_3;
 return VAR_3;
}
