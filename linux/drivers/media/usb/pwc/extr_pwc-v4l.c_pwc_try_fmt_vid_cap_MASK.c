
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_format {int dummy; } ;
struct pwc_device {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct pwc_device*,struct v4l2_format*) ;
 struct pwc_device* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1, struct v4l2_format *VAR_2)
{
 struct pwc_device *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_3, VAR_2);
}
