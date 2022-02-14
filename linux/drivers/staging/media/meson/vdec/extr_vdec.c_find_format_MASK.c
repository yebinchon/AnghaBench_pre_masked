
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct amvdec_format {unsigned int pixfmt; } ;



__attribute__((used)) static const struct amvdec_format *
FUNC_0(const struct amvdec_format *VAR_0, u32 VAR_1, u32 VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_0[VAR_3].pixfmt == VAR_2)
   return &VAR_0[VAR_3];
 }

 return ((void*)0);
}
