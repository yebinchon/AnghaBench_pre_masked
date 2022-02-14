
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {unsigned int width; unsigned int height; int field; int colorspace; int code; } ;
struct iss_ipipe_device {int dummy; } ;
typedef enum v4l2_subdev_format_whence { ____Placeholder_v4l2_subdev_format_whence } v4l2_subdev_format_whence ;


 unsigned int FUNC_0 (int *) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct v4l2_mbus_framefmt* FUNC_1 (struct iss_ipipe_device*,struct v4l2_subdev_pad_config*,int const,int) ;
 void* FUNC_2 (int ,unsigned int,int,int) ;
 int * VAR_5 ;
 int FUNC_3 (struct v4l2_mbus_framefmt*,struct v4l2_mbus_framefmt*,int) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_4(struct iss_ipipe_device *VAR_7,
   struct v4l2_subdev_pad_config *VAR_8,
   unsigned int VAR_9,
   struct v4l2_mbus_framefmt *VAR_10,
   enum v4l2_subdev_format_whence VAR_11)
{
 struct v4l2_mbus_framefmt *VAR_12;
 unsigned int VAR_13 = VAR_10->width;
 unsigned int VAR_14 = VAR_10->height;
 unsigned int VAR_15;

 switch (VAR_9) {
 case 129:
  for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_5); VAR_15++) {
   if (VAR_10->code == VAR_5[VAR_15])
    break;
  }


  if (VAR_15 >= FUNC_0(VAR_5))
   VAR_10->code = VAR_0;


  VAR_10->width = FUNC_2(VAR_6, VAR_13, 1, 8192);
  VAR_10->height = FUNC_2(VAR_6, VAR_14, 1, 8192);
  VAR_10->colorspace = VAR_3;
  break;

 case 128:
  VAR_12 = FUNC_1(VAR_7, VAR_8, 129, VAR_11);
  FUNC_3(VAR_10, VAR_12, sizeof(*VAR_10));

  VAR_10->code = VAR_1;
  VAR_10->width = FUNC_2(VAR_6, VAR_13, 32, VAR_10->width);
  VAR_10->height = FUNC_2(VAR_6, VAR_14, 32, VAR_10->height);
  VAR_10->colorspace = VAR_2;
  break;
 }

 VAR_10->field = VAR_4;
}
