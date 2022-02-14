
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ext4_group_t ;



__attribute__((used)) static inline int FUNC_0(ext4_group_t VAR_0, int VAR_1)
{
 while (1) {
  if (VAR_0 < VAR_1)
   return 0;
  if (VAR_0 == VAR_1)
   return 1;
  if ((VAR_0 % VAR_1) != 0)
   return 0;
  VAR_0 = VAR_0 / VAR_1;
 }
}
