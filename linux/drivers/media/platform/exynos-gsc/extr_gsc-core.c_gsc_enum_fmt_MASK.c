
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fmtdesc {int pixelformat; int index; } ;
struct gsc_fmt {int pixelformat; } ;


 int VAR_0 ;
 struct gsc_fmt* FUNC_0 (int *,int *,int ) ;

int FUNC_1(struct v4l2_fmtdesc *VAR_1)
{
 const struct gsc_fmt *VAR_2;

 VAR_2 = FUNC_0(((void*)0), ((void*)0), VAR_1->index);
 if (!VAR_2)
  return -VAR_0;

 VAR_1->pixelformat = VAR_2->pixelformat;

 return 0;
}
