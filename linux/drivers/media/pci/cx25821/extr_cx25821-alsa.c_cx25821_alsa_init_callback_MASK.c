
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_device {int dummy; } ;
struct device {int dummy; } ;
struct cx25821_dev {int dummy; } ;


 int FUNC_0 (struct cx25821_dev*) ;
 struct v4l2_device* FUNC_1 (struct device*) ;
 struct cx25821_dev* FUNC_2 (struct v4l2_device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, void *VAR_1)
{
 struct v4l2_device *VAR_2 = FUNC_1(VAR_0);
 struct cx25821_dev *VAR_3 = FUNC_2(VAR_2);

 FUNC_0(VAR_3);
 return 0;
}
