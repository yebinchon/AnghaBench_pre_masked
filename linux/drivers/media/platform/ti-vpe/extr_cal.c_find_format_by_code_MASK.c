
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct cal_fmt {scalar_t__ code; } ;
struct cal_ctx {unsigned int num_active_fmt; struct cal_fmt** active_fmt; } ;



__attribute__((used)) static const struct cal_fmt *FUNC_0(struct cal_ctx *VAR_0,
       u32 VAR_1)
{
 const struct cal_fmt *VAR_2;
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->num_active_fmt; VAR_3++) {
  VAR_2 = VAR_0->active_fmt[VAR_3];
  if (VAR_2->code == VAR_1)
   return VAR_2;
 }

 return ((void*)0);
}
