
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long*) ;

__attribute__((used)) static int FUNC_1(substring_t VAR_1[], unsigned long *VAR_2,
  unsigned long VAR_3, unsigned long VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_2);
 if (VAR_5 != 0)
  return VAR_5;
 if (*VAR_2 < VAR_3 || *VAR_2 > VAR_4)
  return -VAR_0;
 return 0;
}
