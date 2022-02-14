
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;
struct v4l2_subdev_format {int which; struct v4l2_mbus_framefmt format; int pad; } ;
struct v4l2_subdev {int dummy; } ;
struct csiphy_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct v4l2_mbus_framefmt* FUNC_0 (struct csiphy_device*,struct v4l2_subdev_pad_config*,int ,int ) ;
 int FUNC_1 (struct csiphy_device*,struct v4l2_subdev_pad_config*,int ,struct v4l2_mbus_framefmt*,int ) ;
 struct csiphy_device* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_3,
        struct v4l2_subdev_pad_config *VAR_4,
        struct v4l2_subdev_format *VAR_5)
{
 struct csiphy_device *VAR_6 = FUNC_2(VAR_3);
 struct v4l2_mbus_framefmt *VAR_7;

 VAR_7 = FUNC_0(VAR_6, VAR_4, VAR_5->pad, VAR_5->which);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 FUNC_1(VAR_6, VAR_4, VAR_5->pad, &VAR_5->format, VAR_5->which);
 *VAR_7 = VAR_5->format;


 if (VAR_5->pad == VAR_1) {
  VAR_7 = FUNC_0(VAR_6, VAR_4, VAR_2,
          VAR_5->which);

  *VAR_7 = VAR_5->format;
  FUNC_1(VAR_6, VAR_4, VAR_2, VAR_7,
      VAR_5->which);
 }

 return 0;
}
