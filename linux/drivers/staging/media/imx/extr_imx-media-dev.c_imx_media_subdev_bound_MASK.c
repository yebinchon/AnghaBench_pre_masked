
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int grp_id; int name; } ;
struct v4l2_async_subdev {int dummy; } ;
struct v4l2_async_notifier {int dummy; } ;
struct imx_media_dev {int v4l2_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct imx_media_dev*,struct v4l2_subdev*) ;
 struct imx_media_dev* FUNC_1 (struct v4l2_async_notifier*) ;
 int FUNC_2 (int *,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct v4l2_async_notifier *VAR_1,
      struct v4l2_subdev *VAR_2,
      struct v4l2_async_subdev *VAR_3)
{
 struct imx_media_dev *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;

 if (VAR_2->grp_id & VAR_0) {

  VAR_5 = FUNC_0(VAR_4, VAR_2);
  if (VAR_5)
   return VAR_5;
 }

 FUNC_2(&VAR_4->v4l2_dev, "subdev %s bound\n", VAR_2->name);

 return 0;
}
