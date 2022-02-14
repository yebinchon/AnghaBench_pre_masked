
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fmtdesc {int pixelformat; int index; } ;
struct fimc_fmt {int fourcc; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct fimc_fmt* FUNC_0 (int *,int *,int,int ) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3, void *VAR_4,
        struct v4l2_fmtdesc *VAR_5)
{
 struct fimc_fmt *VAR_6;

 VAR_6 = FUNC_0(((void*)0), ((void*)0), VAR_1 | VAR_2,
          VAR_5->index);
 if (!VAR_6)
  return -VAR_0;
 VAR_5->pixelformat = VAR_6->fourcc;
 return 0;
}
