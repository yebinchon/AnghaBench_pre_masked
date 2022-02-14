
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fmtdesc {int pixelformat; int index; } ;
struct file {int dummy; } ;
struct camif_vp {int dummy; } ;
struct camif_fmt {int fourcc; } ;


 int VAR_0 ;
 struct camif_fmt* FUNC_0 (struct camif_vp*,int *,int ) ;
 struct camif_vp* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2,
         struct v4l2_fmtdesc *VAR_3)
{
 struct camif_vp *VAR_4 = FUNC_1(VAR_1);
 const struct camif_fmt *VAR_5;

 VAR_5 = FUNC_0(VAR_4, ((void*)0), VAR_3->index);
 if (!VAR_5)
  return -VAR_0;

 VAR_3->pixelformat = VAR_5->fourcc;
 return 0;
}
