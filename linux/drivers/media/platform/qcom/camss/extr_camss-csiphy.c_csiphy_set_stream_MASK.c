
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct csiphy_device {int dummy; } ;


 int FUNC_0 (struct csiphy_device*) ;
 int FUNC_1 (struct csiphy_device*) ;
 struct csiphy_device* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct csiphy_device *VAR_2 = FUNC_2(VAR_0);
 int VAR_3 = 0;

 if (VAR_1)
  VAR_3 = FUNC_1(VAR_2);
 else
  FUNC_0(VAR_2);

 return VAR_3;
}
