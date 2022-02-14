
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_format {int dummy; } ;
struct vpfe_device {struct v4l2_format fmt; int v4l2_dev; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int *,char*) ;
 struct vpfe_device* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2,
    struct v4l2_format *VAR_3)
{
 struct vpfe_device *VAR_4 = FUNC_1(VAR_1);

 FUNC_0(1, VAR_0, &VAR_4->v4l2_dev, "vpfe_g_fmt_vid_cap\n");

 *VAR_3 = VAR_4->fmt;
 return 0;
}
