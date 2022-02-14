
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;
struct imx7_csi {int * cc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_mbus_framefmt*,int,int,int ,int ,int *) ;
 struct imx7_csi* FUNC_1 (struct v4l2_subdev*) ;
 struct v4l2_mbus_framefmt* FUNC_2 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,int) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_2,
        struct v4l2_subdev_pad_config *VAR_3)
{
 struct imx7_csi *VAR_4 = FUNC_1(VAR_2);
 struct v4l2_mbus_framefmt *VAR_5;
 int VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_7);

  VAR_6 = FUNC_0(VAR_5, 800, 600, 0, VAR_1,
           &VAR_4->cc[VAR_7]);
  if (VAR_6 < 0)
   return VAR_6;
 }

 return 0;
}
