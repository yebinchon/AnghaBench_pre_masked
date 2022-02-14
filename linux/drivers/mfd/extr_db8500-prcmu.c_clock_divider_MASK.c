
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static u32 FUNC_0(unsigned long VAR_0, unsigned long VAR_1)
{
 u32 VAR_2;

 VAR_2 = (VAR_0 / VAR_1);
 if (VAR_2 == 0)
  return 1;
 if (VAR_1 < (VAR_0 / VAR_2))
  VAR_2++;
 return VAR_2;
}
