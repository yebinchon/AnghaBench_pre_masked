
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_format {int dummy; } ;
struct file {int dummy; } ;
struct camss_video {struct v4l2_format active_fmt; int vb2_q; } ;


 int VAR_0 ;
 int FUNC_0 (struct camss_video*,struct v4l2_format*) ;
 scalar_t__ FUNC_1 (int *) ;
 struct camss_video* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, void *VAR_2, struct v4l2_format *VAR_3)
{
 struct camss_video *VAR_4 = FUNC_2(VAR_1);
 int VAR_5;

 if (FUNC_1(&VAR_4->vb2_q))
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_4, VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_4->active_fmt = *VAR_3;

 return 0;
}
