
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;
struct v4l2_subdev_format {int which; struct v4l2_mbus_framefmt format; int pad; } ;
struct v4l2_subdev {int dummy; } ;
struct iss_ipipeif_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct v4l2_mbus_framefmt* FUNC_0 (struct iss_ipipeif_device*,struct v4l2_subdev_pad_config*,int ,int ) ;
 int FUNC_1 (struct iss_ipipeif_device*,struct v4l2_subdev_pad_config*,int ,struct v4l2_mbus_framefmt*,int ) ;
 struct iss_ipipeif_device* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_4,
         struct v4l2_subdev_pad_config *VAR_5,
         struct v4l2_subdev_format *VAR_6)
{
 struct iss_ipipeif_device *VAR_7 = FUNC_2(VAR_4);
 struct v4l2_mbus_framefmt *VAR_8;

 VAR_8 = FUNC_0(VAR_7, VAR_5, VAR_6->pad, VAR_6->which);
 if (!VAR_8)
  return -VAR_0;

 FUNC_1(VAR_7, VAR_5, VAR_6->pad, &VAR_6->format, VAR_6->which);
 *VAR_8 = VAR_6->format;


 if (VAR_6->pad == VAR_1) {
  VAR_8 = FUNC_0(VAR_7, VAR_5,
           VAR_2,
           VAR_6->which);
  *VAR_8 = VAR_6->format;
  FUNC_1(VAR_7, VAR_5, VAR_2,
       VAR_8, VAR_6->which);

  VAR_8 = FUNC_0(VAR_7, VAR_5,
           VAR_3,
           VAR_6->which);
  *VAR_8 = VAR_6->format;
  FUNC_1(VAR_7, VAR_5, VAR_3, VAR_8,
       VAR_6->which);
 }

 return 0;
}
