
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static int FUNC_0(u32 VAR_0, int VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_0 / VAR_1;

 if (!VAR_2)
  return 1;

 VAR_2++;

 while (VAR_2 & (VAR_2 - 1))
  VAR_2++;

 return VAR_2;
}
