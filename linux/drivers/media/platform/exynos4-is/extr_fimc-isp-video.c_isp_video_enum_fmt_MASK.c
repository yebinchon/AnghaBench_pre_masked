
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fmtdesc {scalar_t__ index; int pixelformat; } ;
struct fimc_fmt {int fourcc; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 struct fimc_fmt* FUNC_1 (int *,int *,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
         struct v4l2_fmtdesc *VAR_4)
{
 const struct fimc_fmt *VAR_5;

 if (VAR_4->index >= VAR_1)
  return -VAR_0;

 VAR_5 = FUNC_1(((void*)0), ((void*)0), VAR_4->index);
 if (FUNC_0(VAR_5 == ((void*)0)))
  return -VAR_0;

 VAR_4->pixelformat = VAR_5->fourcc;

 return 0;
}
