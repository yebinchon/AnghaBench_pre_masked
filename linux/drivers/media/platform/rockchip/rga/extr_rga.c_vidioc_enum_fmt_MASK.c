
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fmtdesc {size_t index; int pixelformat; } ;
struct rga_fmt {int fourcc; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct rga_fmt* VAR_2 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_3, void *VAR_4, struct v4l2_fmtdesc *VAR_5)
{
 struct rga_fmt *VAR_6;

 if (VAR_5->index >= VAR_1)
  return -VAR_0;

 VAR_6 = &VAR_2[VAR_5->index];
 VAR_5->pixelformat = VAR_6->fourcc;

 return 0;
}
