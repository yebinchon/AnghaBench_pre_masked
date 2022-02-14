
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct amvdec_format {scalar_t__* pixfmts_cap; } ;



__attribute__((used)) static unsigned int
FUNC_0(const struct amvdec_format *VAR_0, u32 VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_0->pixfmts_cap[VAR_2]; VAR_2++)
  if (VAR_0->pixfmts_cap[VAR_2] == VAR_1)
   return 1;

 return 0;
}
