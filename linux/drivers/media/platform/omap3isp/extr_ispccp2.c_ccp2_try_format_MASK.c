
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int colorspace; int field; void* code; void* height; void* width; } ;
struct isp_ccp2_device {int input; } ;
typedef enum v4l2_subdev_format_whence { ____Placeholder_v4l2_subdev_format_whence } v4l2_subdev_format_whence ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct v4l2_mbus_framefmt* FUNC_0 (struct isp_ccp2_device*,struct v4l2_subdev_pad_config*,int const,int) ;
 void* FUNC_1 (int ,void*,int ,int ) ;
 int FUNC_2 (struct v4l2_mbus_framefmt*,struct v4l2_mbus_framefmt*,int) ;
 int VAR_14 ;

__attribute__((used)) static void FUNC_3(struct isp_ccp2_device *VAR_15,
          struct v4l2_subdev_pad_config *VAR_16, unsigned int VAR_17,
          struct v4l2_mbus_framefmt *VAR_18,
          enum v4l2_subdev_format_whence VAR_19)
{
 struct v4l2_mbus_framefmt *VAR_20;

 switch (VAR_17) {
 case 129:
  if (VAR_18->code != VAR_11)
   VAR_18->code = VAR_10;

  if (VAR_15->input == VAR_1) {
   VAR_18->width = FUNC_1(VAR_14, VAR_18->width,
          VAR_5,
          VAR_4);
   VAR_18->height = FUNC_1(VAR_14, VAR_18->height,
           VAR_3,
           VAR_2);
  } else if (VAR_15->input == VAR_0) {
   VAR_18->width = FUNC_1(VAR_14, VAR_18->width,
          VAR_7,
          VAR_6);
   VAR_18->height = FUNC_1(VAR_14, VAR_18->height,
           VAR_9,
           VAR_8);
  }
  break;

 case 128:





  VAR_20 = FUNC_0(VAR_15, VAR_16, 129, VAR_19);
  FUNC_2(VAR_18, VAR_20, sizeof(*VAR_18));
  VAR_18->code = VAR_10;
  break;
 }

 VAR_18->field = VAR_13;
 VAR_18->colorspace = VAR_12;
}
