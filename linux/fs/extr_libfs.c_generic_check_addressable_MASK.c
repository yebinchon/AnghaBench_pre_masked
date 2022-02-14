
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
typedef unsigned int sector_t ;
typedef unsigned int pgoff_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;

int FUNC_1(unsigned VAR_3, u64 VAR_4)
{
 u64 VAR_5 = VAR_4 - 1;
 u64 VAR_6 =
  VAR_5 >> (VAR_2 - VAR_3);

 if (FUNC_0(VAR_4 == 0))
  return 0;

 if ((VAR_3 < 9) || (VAR_3 > VAR_2))
  return -VAR_1;

 if ((VAR_5 > (sector_t)(~0ULL) >> (VAR_3 - 9)) ||
     (VAR_6 > (pgoff_t)(~0ULL))) {
  return -VAR_0;
 }
 return 0;
}
