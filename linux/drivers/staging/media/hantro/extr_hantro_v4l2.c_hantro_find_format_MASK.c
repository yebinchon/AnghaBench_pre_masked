
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hantro_fmt {scalar_t__ fourcc; } ;



__attribute__((used)) static const struct hantro_fmt *
FUNC_0(const struct hantro_fmt *VAR_0, unsigned int VAR_1,
     u32 VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  if (VAR_0[VAR_3].fourcc == VAR_2)
   return &VAR_0[VAR_3];
 return ((void*)0);
}
