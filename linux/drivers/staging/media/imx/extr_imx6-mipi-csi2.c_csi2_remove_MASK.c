
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int entity; } ;
struct platform_device {int dummy; } ;
struct csi2_dev {int lock; int pllref_clk; int dphy_clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct v4l2_subdev* FUNC_3 (struct platform_device*) ;
 struct csi2_dev* FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct v4l2_subdev *VAR_1 = FUNC_3(VAR_0);
 struct csi2_dev *VAR_2 = FUNC_4(VAR_1);

 FUNC_5(VAR_1);
 FUNC_0(VAR_2->dphy_clk);
 FUNC_0(VAR_2->pllref_clk);
 FUNC_2(&VAR_2->lock);
 FUNC_1(&VAR_1->entity);

 return 0;
}
