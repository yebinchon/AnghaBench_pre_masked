
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct super_block {int s_maxbytes; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct super_block *VAR_2,
          u64 VAR_3, u64 VAR_4, u64 *VAR_5)
{
 u64 VAR_6 = (u64) VAR_2->s_maxbytes;

 *VAR_5 = VAR_4;

 if (VAR_4 == 0)
  return -VAR_1;

 if (VAR_3 > VAR_6)
  return -VAR_0;




 if (VAR_4 > VAR_6 || (VAR_6 - VAR_4) < VAR_3)
  *VAR_5 = VAR_6 - VAR_3;

 return 0;
}
