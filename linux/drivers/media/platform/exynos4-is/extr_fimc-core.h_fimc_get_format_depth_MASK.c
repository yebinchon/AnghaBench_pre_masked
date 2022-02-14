
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct fimc_fmt {size_t colplanes; scalar_t__* depth; } ;



__attribute__((used)) static inline u32 FUNC_0(struct fimc_fmt *VAR_0)
{
 u32 VAR_1, VAR_2 = 0;

 if (VAR_0 != ((void*)0))
  for (VAR_1 = 0; VAR_1 < VAR_0->colplanes; VAR_1++)
   VAR_2 += VAR_0->depth[VAR_1];
 return VAR_2;
}
