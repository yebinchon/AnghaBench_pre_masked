
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_mbus_framefmt {int dummy; } ;
struct xtpg_device {int npads; struct v4l2_mbus_framefmt default_format; } ;
struct v4l2_subdev_fh {int pad; } ;
struct v4l2_subdev {int dummy; } ;


 struct xtpg_device* FUNC_0 (struct v4l2_subdev*) ;
 struct v4l2_mbus_framefmt* FUNC_1 (struct v4l2_subdev*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0, struct v4l2_subdev_fh *VAR_1)
{
 struct xtpg_device *VAR_2 = FUNC_0(VAR_0);
 struct v4l2_mbus_framefmt *VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1->pad, 0);
 *VAR_3 = VAR_2->default_format;

 if (VAR_2->npads == 2) {
  VAR_3 = FUNC_1(VAR_0, VAR_1->pad, 1);
  *VAR_3 = VAR_2->default_format;
 }

 return 0;
}
