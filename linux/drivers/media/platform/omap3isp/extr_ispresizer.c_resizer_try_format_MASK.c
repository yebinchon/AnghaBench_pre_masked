
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_rect {int dummy; } ;
struct v4l2_mbus_framefmt {int field; int colorspace; int code; void* height; void* width; } ;
struct resizer_ratio {int dummy; } ;
struct isp_res_device {int dummy; } ;
typedef enum v4l2_subdev_format_whence { ____Placeholder_v4l2_subdev_format_whence } v4l2_subdev_format_whence ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 struct v4l2_rect* FUNC_0 (struct isp_res_device*,struct v4l2_subdev_pad_config*,int) ;
 struct v4l2_mbus_framefmt* FUNC_1 (struct isp_res_device*,struct v4l2_subdev_pad_config*,int const,int) ;
 void* FUNC_2 (int ,void*,int ,int ) ;
 int FUNC_3 (struct isp_res_device*,struct v4l2_rect*,struct v4l2_mbus_framefmt*,struct resizer_ratio*) ;
 int FUNC_4 (struct isp_res_device*) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_5(struct isp_res_device *VAR_8,
          struct v4l2_subdev_pad_config *VAR_9, unsigned int VAR_10,
          struct v4l2_mbus_framefmt *VAR_11,
          enum v4l2_subdev_format_whence VAR_12)
{
 struct v4l2_mbus_framefmt *VAR_13;
 struct resizer_ratio VAR_14;
 struct v4l2_rect VAR_15;

 switch (VAR_10) {
 case 129:
  if (VAR_11->code != VAR_2 &&
      VAR_11->code != VAR_1)
   VAR_11->code = VAR_2;

  VAR_11->width = FUNC_2(VAR_7, VAR_11->width, VAR_4,
         FUNC_4(VAR_8));
  VAR_11->height = FUNC_2(VAR_7, VAR_11->height, VAR_3,
          VAR_0);
  break;

 case 128:
  VAR_13 = FUNC_1(VAR_8, VAR_9, 129, VAR_12);
  VAR_11->code = VAR_13->code;

  VAR_15 = *FUNC_0(VAR_8, VAR_9, VAR_12);
  FUNC_3(VAR_8, &VAR_15, VAR_11, &VAR_14);
  break;
 }

 VAR_11->colorspace = VAR_5;
 VAR_11->field = VAR_6;
}
