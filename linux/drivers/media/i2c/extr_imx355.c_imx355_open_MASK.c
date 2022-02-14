
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_fh {int pad; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int field; int code; int height; int width; } ;
struct imx355 {int mutex; TYPE_1__* cur_mode; } ;
struct TYPE_2__ {int height; int width; } ;


 int VAR_0 ;
 int FUNC_0 (struct imx355*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct imx355* FUNC_3 (struct v4l2_subdev*) ;
 struct v4l2_mbus_framefmt* FUNC_4 (struct v4l2_subdev*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_1, struct v4l2_subdev_fh *VAR_2)
{
 struct imx355 *VAR_3 = FUNC_3(VAR_1);
 struct v4l2_mbus_framefmt *VAR_4 =
  FUNC_4(VAR_1, VAR_2->pad, 0);

 FUNC_1(&VAR_3->mutex);


 VAR_4->width = VAR_3->cur_mode->width;
 VAR_4->height = VAR_3->cur_mode->height;
 VAR_4->code = FUNC_0(VAR_3);
 VAR_4->field = VAR_0;

 FUNC_2(&VAR_3->mutex);

 return 0;
}
