
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_format {int dummy; } ;
struct vpfe_device {struct v4l2_format fmt; } ;
struct file {int dummy; } ;


 struct vpfe_device* FUNC_0 (struct file*) ;
 int FUNC_1 (int,struct vpfe_device*,char*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1,
        struct v4l2_format *VAR_2)
{
 struct vpfe_device *VAR_3 = FUNC_0(VAR_0);

 FUNC_1(2, VAR_3, "vpfe_g_fmt\n");

 *VAR_2 = VAR_3->fmt;

 return 0;
}
