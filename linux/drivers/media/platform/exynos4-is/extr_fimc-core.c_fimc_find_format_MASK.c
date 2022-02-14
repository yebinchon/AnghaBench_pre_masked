
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct fimc_fmt {unsigned int flags; scalar_t__ const fourcc; scalar_t__ const mbus_code; } ;


 unsigned int FUNC_0 (struct fimc_fmt*) ;
 struct fimc_fmt* VAR_0 ;

struct fimc_fmt *FUNC_1(const u32 *VAR_1, const u32 *VAR_2,
      unsigned int VAR_3, int VAR_4)
{
 struct fimc_fmt *VAR_5, *VAR_6 = ((void*)0);
 unsigned int VAR_7;
 int VAR_8 = 0;

 if (VAR_4 >= (int)FUNC_0(VAR_0))
  return ((void*)0);

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_0); ++VAR_7) {
  VAR_5 = &VAR_0[VAR_7];
  if (!(VAR_5->flags & VAR_3))
   continue;
  if (VAR_1 && VAR_5->fourcc == *VAR_1)
   return VAR_5;
  if (VAR_2 && VAR_5->mbus_code == *VAR_2)
   return VAR_5;
  if (VAR_4 == VAR_8)
   VAR_6 = VAR_5;
  VAR_8++;
 }
 return VAR_6;
}
