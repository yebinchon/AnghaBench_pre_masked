
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct mt9v111_dev {int oe; int standby; int sysclk; int clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 struct mt9v111_dev* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_0)
{
 struct mt9v111_dev *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1->clk);
 if (VAR_2)
  return VAR_2;

 FUNC_1(VAR_1->clk, VAR_1->sysclk);

 FUNC_2(VAR_1->standby, 0);
 FUNC_4(500, 1000);

 FUNC_2(VAR_1->oe, 1);
 FUNC_4(500, 1000);

 return 0;
}
