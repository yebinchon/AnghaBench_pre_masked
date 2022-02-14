
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via_format {int mbus_code; int pixelformat; } ;
struct via_camera {int dummy; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_format {int format; int which; } ;
struct v4l2_pix_format {int pixelformat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct via_camera*,int ,int ,struct v4l2_subdev_pad_config*,struct v4l2_subdev_format*) ;
 int VAR_2 ;
 int FUNC_1 (int *,struct v4l2_pix_format*,int ) ;
 int FUNC_2 (struct v4l2_pix_format*,int *) ;
 struct via_format* FUNC_3 (int ) ;
 int FUNC_4 (struct v4l2_pix_format*,struct v4l2_pix_format*) ;
 int FUNC_5 (struct v4l2_pix_format*,struct v4l2_pix_format*) ;

__attribute__((used)) static int FUNC_6(struct via_camera *VAR_3,
  struct v4l2_pix_format *VAR_4, struct v4l2_pix_format *VAR_5)
{
 int VAR_6;
 struct v4l2_subdev_pad_config VAR_7;
 struct v4l2_subdev_format VAR_8 = {
  .which = VAR_0,
 };
 struct via_format *VAR_9 = FUNC_3(VAR_4->pixelformat);

 VAR_4->pixelformat = VAR_9->pixelformat;
 FUNC_5(VAR_4, VAR_5);
 FUNC_1(&VAR_8.format, VAR_5, VAR_9->mbus_code);
 VAR_6 = FUNC_0(VAR_3, VAR_1, VAR_2, &VAR_7, &VAR_8);
 FUNC_2(VAR_5, &VAR_8.format);
 FUNC_4(VAR_4, VAR_5);
 return VAR_6;
}
