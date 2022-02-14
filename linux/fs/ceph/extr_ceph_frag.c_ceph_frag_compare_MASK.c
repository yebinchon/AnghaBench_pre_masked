
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u32 ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;

int FUNC_2(__u32 VAR_0, __u32 VAR_1)
{
 unsigned VAR_2 = FUNC_1(VAR_0);
 unsigned VAR_3 = FUNC_1(VAR_1);
 if (VAR_2 < VAR_3)
  return -1;
 if (VAR_2 > VAR_3)
  return 1;
 VAR_2 = FUNC_0(VAR_0);
 VAR_3 = FUNC_0(VAR_1);
 if (VAR_2 < VAR_3)
  return -1;
 if (VAR_2 > VAR_3)
  return 1;
 return 0;
}
