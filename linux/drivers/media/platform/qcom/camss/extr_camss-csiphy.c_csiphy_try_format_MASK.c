
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int colorspace; int field; void* height; void* width; int code; } ;
struct csiphy_device {unsigned int nformats; TYPE_1__* formats; } ;
typedef enum v4l2_subdev_format_whence { ____Placeholder_v4l2_subdev_format_whence } v4l2_subdev_format_whence ;
struct TYPE_2__ {int code; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 struct v4l2_mbus_framefmt* FUNC_0 (struct csiphy_device*,struct v4l2_subdev_pad_config*,int ,int) ;
 void* FUNC_1 (int ,void*,int,int) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(struct csiphy_device *VAR_5,
         struct v4l2_subdev_pad_config *VAR_6,
         unsigned int VAR_7,
         struct v4l2_mbus_framefmt *VAR_8,
         enum v4l2_subdev_format_whence VAR_9)
{
 unsigned int VAR_10;

 switch (VAR_7) {
 case 129:


  for (VAR_10 = 0; VAR_10 < VAR_5->nformats; VAR_10++)
   if (VAR_8->code == VAR_5->formats[VAR_10].code)
    break;


  if (VAR_10 >= VAR_5->nformats)
   VAR_8->code = VAR_0;

  VAR_8->width = FUNC_1(VAR_4, VAR_8->width, 1, 8191);
  VAR_8->height = FUNC_1(VAR_4, VAR_8->height, 1, 8191);

  VAR_8->field = VAR_3;
  VAR_8->colorspace = VAR_2;

  break;

 case 128:


  *VAR_8 = *FUNC_0(VAR_5, VAR_6, VAR_1,
         VAR_9);

  break;
 }
}
