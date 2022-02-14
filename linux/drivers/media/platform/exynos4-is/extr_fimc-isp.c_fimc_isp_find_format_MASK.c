
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct fimc_fmt {scalar_t__ const fourcc; scalar_t__ const mbus_code; } ;


 unsigned int FUNC_0 (struct fimc_fmt*) ;
 struct fimc_fmt* VAR_0 ;

const struct fimc_fmt *FUNC_1(const u32 *VAR_1,
     const u32 *VAR_2, int VAR_3)
{
 const struct fimc_fmt *VAR_4, *VAR_5 = ((void*)0);
 unsigned int VAR_6;
 int VAR_7 = 0;

 if (VAR_3 >= (int)FUNC_0(VAR_0))
  return ((void*)0);

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); ++VAR_6) {
  VAR_4 = &VAR_0[VAR_6];
  if (VAR_1 && VAR_4->fourcc == *VAR_1)
   return VAR_4;
  if (VAR_2 && VAR_4->mbus_code == *VAR_2)
   return VAR_4;
  if (VAR_3 == VAR_7)
   VAR_5 = VAR_4;
  VAR_7++;
 }
 return VAR_5;
}
