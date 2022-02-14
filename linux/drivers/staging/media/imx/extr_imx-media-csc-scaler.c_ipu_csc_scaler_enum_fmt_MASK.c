
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_fmtdesc {int pixelformat; int index; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
       struct v4l2_fmtdesc *VAR_3)
{
 u32 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_4, VAR_3->index, VAR_0);
 if (VAR_5)
  return VAR_5;

 VAR_3->pixelformat = VAR_4;

 return 0;
}
