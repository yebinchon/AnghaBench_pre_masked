
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fmtdesc {int pixelformat; int index; int type; } ;
struct fimc_fmt {int fourcc; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 struct fimc_fmt* FUNC_0 (int *,int *,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2,
        struct v4l2_fmtdesc *VAR_3)
{
 struct fimc_fmt *VAR_4;

 VAR_4 = FUNC_0(((void*)0), ((void*)0), FUNC_1(VAR_3->type),
          VAR_3->index);
 if (!VAR_4)
  return -VAR_0;

 VAR_3->pixelformat = VAR_4->fourcc;
 return 0;
}
