
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int field; int code; int height; int width; } ;
struct v4l2_subdev_format {TYPE_1__ format; } ;
struct imx258_mode {int height; int width; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(const struct imx258_mode *VAR_2,
         struct v4l2_subdev_format *VAR_3)
{
 VAR_3->format.width = VAR_2->width;
 VAR_3->format.height = VAR_2->height;
 VAR_3->format.code = VAR_0;
 VAR_3->format.field = VAR_1;
}
