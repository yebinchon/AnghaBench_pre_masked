
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_pix_format {scalar_t__ pixelformat; int field; int colorspace; int height; int width; } ;
struct v4l2_mbus_framefmt {int field; int colorspace; int code; int height; int width; } ;
struct TYPE_3__ {scalar_t__ pixelformat; int code; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct v4l2_mbus_framefmt*,int ,int) ;

__attribute__((used)) static void FUNC_2(const struct v4l2_pix_format *VAR_1,
      struct v4l2_mbus_framefmt *VAR_2)
{
 unsigned int VAR_3;

 FUNC_1(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->width = VAR_1->width;
 VAR_2->height = VAR_1->height;





 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0) - 1; ++VAR_3) {
  if (VAR_0[VAR_3].pixelformat == VAR_1->pixelformat)
   break;
 }

 VAR_2->code = VAR_0[VAR_3].code;
 VAR_2->colorspace = VAR_1->colorspace;
 VAR_2->field = VAR_1->field;
}
