
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int step_height; int step_width; int max_height; int max_width; int min_height; int min_width; } ;
struct TYPE_3__ {int height; int width; } ;
struct v4l2_frmsizeenum {int pixel_format; int type; TYPE_2__ stepwise; TYPE_1__ discrete; int index; } ;





 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(const void *VAR_0, bool VAR_1)
{
 const struct v4l2_frmsizeenum *VAR_2 = VAR_0;

 FUNC_0("index=%u, pixelformat=%c%c%c%c, type=%u",
   VAR_2->index,
   (VAR_2->pixel_format & 0xff),
   (VAR_2->pixel_format >> 8) & 0xff,
   (VAR_2->pixel_format >> 16) & 0xff,
   (VAR_2->pixel_format >> 24) & 0xff,
   VAR_2->type);
 switch (VAR_2->type) {
 case 129:
  FUNC_0(", wxh=%ux%u\n",
   VAR_2->discrete.width, VAR_2->discrete.height);
  break;
 case 128:
  FUNC_0(", min=%ux%u, max=%ux%u, step=%ux%u\n",
    VAR_2->stepwise.min_width,
    VAR_2->stepwise.min_height,
    VAR_2->stepwise.max_width,
    VAR_2->stepwise.max_height,
    VAR_2->stepwise.step_width,
    VAR_2->stepwise.step_height);
  break;
 case 130:

 default:
  FUNC_0("\n");
  break;
 }
}
