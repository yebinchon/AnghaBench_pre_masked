
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {unsigned int width; unsigned int height; int field; int colorspace; int code; } ;
struct iss_ipipeif_device {int dummy; } ;
typedef enum v4l2_subdev_format_whence { ____Placeholder_v4l2_subdev_format_whence } v4l2_subdev_format_whence ;


 unsigned int FUNC_0 (int *) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct v4l2_mbus_framefmt* FUNC_1 (struct iss_ipipeif_device*,struct v4l2_subdev_pad_config*,int const,int) ;
 void* FUNC_2 (int ,unsigned int,int,int) ;
 int * VAR_3 ;
 int FUNC_3 (struct v4l2_mbus_framefmt*,struct v4l2_mbus_framefmt*,int) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_4(struct iss_ipipeif_device *VAR_5,
     struct v4l2_subdev_pad_config *VAR_6, unsigned int VAR_7,
     struct v4l2_mbus_framefmt *VAR_8,
     enum v4l2_subdev_format_whence VAR_9)
{
 struct v4l2_mbus_framefmt *VAR_10;
 unsigned int VAR_11 = VAR_8->width;
 unsigned int VAR_12 = VAR_8->height;
 unsigned int VAR_13;

 switch (VAR_7) {
 case 130:



  for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_3); VAR_13++) {
   if (VAR_8->code == VAR_3[VAR_13])
    break;
  }


  if (VAR_13 >= FUNC_0(VAR_3))
   VAR_8->code = VAR_0;


  VAR_8->width = FUNC_2(VAR_4, VAR_11, 1, 8192);
  VAR_8->height = FUNC_2(VAR_4, VAR_12, 1, 8192);
  break;

 case 129:
  VAR_10 = FUNC_1(VAR_5, VAR_6, 130,
           VAR_9);
  FUNC_3(VAR_8, VAR_10, sizeof(*VAR_8));






  VAR_8->width = FUNC_2(VAR_4, VAR_11, 32, (VAR_8->width + 15) & ~15);
  VAR_8->width &= ~15;
  VAR_8->height = FUNC_2(VAR_4, VAR_12, 32, VAR_8->height);
  break;

 case 128:
  VAR_10 = FUNC_1(VAR_5, VAR_6, 130,
           VAR_9);
  FUNC_3(VAR_8, VAR_10, sizeof(*VAR_8));

  VAR_8->width = FUNC_2(VAR_4, VAR_11, 32, VAR_8->width);
  VAR_8->height = FUNC_2(VAR_4, VAR_12, 32, VAR_8->height);
  break;
 }




 VAR_8->colorspace = VAR_1;
 VAR_8->field = VAR_2;
}
