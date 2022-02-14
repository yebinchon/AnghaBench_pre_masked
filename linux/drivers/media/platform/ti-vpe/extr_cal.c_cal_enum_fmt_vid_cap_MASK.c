
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fmtdesc {size_t index; int type; int pixelformat; } ;
struct file {int dummy; } ;
struct cal_fmt {int fourcc; } ;
struct cal_ctx {size_t num_active_fmt; struct cal_fmt** active_fmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cal_ctx* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
    struct v4l2_fmtdesc *VAR_4)
{
 struct cal_ctx *VAR_5 = FUNC_0(VAR_2);
 const struct cal_fmt *VAR_6 = ((void*)0);

 if (VAR_4->index >= VAR_5->num_active_fmt)
  return -VAR_0;

 VAR_6 = VAR_5->active_fmt[VAR_4->index];

 VAR_4->pixelformat = VAR_6->fourcc;
 VAR_4->type = VAR_1;
 return 0;
}
