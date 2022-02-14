
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int denominator; int numerator; } ;
struct TYPE_8__ {int denominator; int numerator; } ;
struct TYPE_7__ {int denominator; int numerator; } ;
struct TYPE_10__ {TYPE_4__ step; TYPE_3__ max; TYPE_2__ min; } ;
struct TYPE_6__ {int denominator; int numerator; } ;
struct v4l2_frmivalenum {int pixel_format; int type; TYPE_5__ stepwise; TYPE_1__ discrete; int height; int width; int index; } ;





 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(const void *VAR_0, bool VAR_1)
{
 const struct v4l2_frmivalenum *VAR_2 = VAR_0;

 FUNC_0("index=%u, pixelformat=%c%c%c%c, wxh=%ux%u, type=%u",
   VAR_2->index,
   (VAR_2->pixel_format & 0xff),
   (VAR_2->pixel_format >> 8) & 0xff,
   (VAR_2->pixel_format >> 16) & 0xff,
   (VAR_2->pixel_format >> 24) & 0xff,
   VAR_2->width, VAR_2->height, VAR_2->type);
 switch (VAR_2->type) {
 case 129:
  FUNC_0(", fps=%d/%d\n",
    VAR_2->discrete.numerator,
    VAR_2->discrete.denominator);
  break;
 case 128:
  FUNC_0(", min=%d/%d, max=%d/%d, step=%d/%d\n",
    VAR_2->stepwise.min.numerator,
    VAR_2->stepwise.min.denominator,
    VAR_2->stepwise.max.numerator,
    VAR_2->stepwise.max.denominator,
    VAR_2->stepwise.step.numerator,
    VAR_2->stepwise.step.denominator);
  break;
 case 130:

 default:
  FUNC_0("\n");
  break;
 }
}
