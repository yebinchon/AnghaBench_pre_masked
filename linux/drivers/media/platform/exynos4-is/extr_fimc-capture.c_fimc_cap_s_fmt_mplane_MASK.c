
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_format {int dummy; } ;
struct fimc_dev {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct fimc_dev*,struct v4l2_format*) ;
 struct fimc_dev* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1,
     struct v4l2_format *VAR_2)
{
 struct fimc_dev *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_3, VAR_2);
}
