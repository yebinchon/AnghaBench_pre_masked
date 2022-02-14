
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct gsc_fmt {scalar_t__ pixelformat; scalar_t__ mbus_code; } ;


 unsigned int FUNC_0 (int ) ;
 struct gsc_fmt* FUNC_1 (unsigned int) ;
 int VAR_0 ;

const struct gsc_fmt *FUNC_2(u32 *VAR_1, u32 *VAR_2, u32 VAR_3)
{
 const struct gsc_fmt *VAR_4, *VAR_5 = ((void*)0);
 unsigned int VAR_6;

 if (VAR_3 >= FUNC_0(VAR_0))
  return ((void*)0);

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); ++VAR_6) {
  VAR_4 = FUNC_1(VAR_6);
  if (VAR_1 && VAR_4->pixelformat == *VAR_1)
   return VAR_4;
  if (VAR_2 && VAR_4->mbus_code == *VAR_2)
   return VAR_4;
  if (VAR_3 == VAR_6)
   VAR_5 = VAR_4;
 }
 return VAR_5;

}
