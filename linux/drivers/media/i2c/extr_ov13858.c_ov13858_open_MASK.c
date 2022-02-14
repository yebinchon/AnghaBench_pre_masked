
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_fh {int pad; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int field; int code; int height; int width; } ;
struct ov13858 {int mutex; TYPE_1__* cur_mode; } ;
struct TYPE_2__ {int height; int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct ov13858* FUNC_2 (struct v4l2_subdev*) ;
 struct v4l2_mbus_framefmt* FUNC_3 (struct v4l2_subdev*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_2, struct v4l2_subdev_fh *VAR_3)
{
 struct ov13858 *VAR_4 = FUNC_2(VAR_2);
 struct v4l2_mbus_framefmt *VAR_5 = FUNC_3(VAR_2,
         VAR_3->pad,
         0);

 FUNC_0(&VAR_4->mutex);


 VAR_5->width = VAR_4->cur_mode->width;
 VAR_5->height = VAR_4->cur_mode->height;
 VAR_5->code = VAR_0;
 VAR_5->field = VAR_1;


 FUNC_1(&VAR_4->mutex);

 return 0;
}
