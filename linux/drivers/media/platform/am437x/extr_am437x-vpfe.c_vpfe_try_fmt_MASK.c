
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpfe_device {int dummy; } ;
struct v4l2_format {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct vpfe_device*,struct v4l2_format*,unsigned int*) ;
 struct vpfe_device* FUNC_1 (struct file*) ;
 int FUNC_2 (int,struct vpfe_device*,char*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0, void *VAR_1,
   struct v4l2_format *VAR_2)
{
 struct vpfe_device *VAR_3 = FUNC_1(VAR_0);
 unsigned int VAR_4;

 FUNC_2(2, VAR_3, "vpfe_try_fmt\n");

 return FUNC_0(VAR_3, VAR_2, &VAR_4);
}
