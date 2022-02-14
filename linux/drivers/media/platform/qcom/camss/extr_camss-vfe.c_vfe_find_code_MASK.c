
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;



__attribute__((used)) static u32 FUNC_0(u32 *VAR_0, unsigned int VAR_1,
    unsigned int VAR_2, u32 VAR_3)
{
 int VAR_4;

 if (!VAR_3 && (VAR_2 >= VAR_1))
  return 0;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  if (VAR_3) {
   if (VAR_3 == VAR_0[VAR_4])
    return VAR_3;
  } else {
   if (VAR_4 == VAR_2)
    return VAR_0[VAR_4];
  }

 return VAR_0[0];
}
