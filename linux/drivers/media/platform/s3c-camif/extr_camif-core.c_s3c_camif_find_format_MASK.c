
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct camif_vp {int fmt_flags; } ;
struct camif_fmt {int flags; scalar_t__ const fourcc; } ;


 unsigned int FUNC_0 (struct camif_fmt*) ;
 struct camif_fmt* VAR_0 ;

const struct camif_fmt *FUNC_1(struct camif_vp *VAR_1,
           const u32 *VAR_2,
           int VAR_3)
{
 const struct camif_fmt *VAR_4, *VAR_5 = ((void*)0);
 unsigned int VAR_6;
 int VAR_7 = 0;

 if (VAR_3 >= (int)FUNC_0(VAR_0))
  return ((void*)0);

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); ++VAR_6) {
  VAR_4 = &VAR_0[VAR_6];
  if (VAR_1 && !(VAR_1->fmt_flags & VAR_4->flags))
   continue;
  if (VAR_2 && VAR_4->fourcc == *VAR_2)
   return VAR_4;
  if (VAR_3 == VAR_7)
   VAR_5 = VAR_4;
  VAR_7++;
 }
 return VAR_5;
}
