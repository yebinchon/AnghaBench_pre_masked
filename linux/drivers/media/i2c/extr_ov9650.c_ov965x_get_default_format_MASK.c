
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_mbus_framefmt {int field; int code; int colorspace; int height; int width; } ;
struct TYPE_4__ {int code; int colorspace; } ;
struct TYPE_3__ {int height; int width; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_0(struct v4l2_mbus_framefmt *VAR_3)
{
 VAR_3->width = VAR_2[0].width;
 VAR_3->height = VAR_2[0].height;
 VAR_3->colorspace = VAR_1[0].colorspace;
 VAR_3->code = VAR_1[0].code;
 VAR_3->field = VAR_0;
}
