
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_mbus_framefmt {int field; int code; int colorspace; int height; int width; } ;
struct TYPE_4__ {int code; } ;
struct TYPE_3__ {int height; int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_0(struct v4l2_mbus_framefmt *VAR_4)
{
 VAR_4->width = VAR_3[2].width;
 VAR_4->height = VAR_3[2].height;
 VAR_4->colorspace = VAR_0;
 VAR_4->code = VAR_2[0].code;
 VAR_4->field = VAR_1;
}
