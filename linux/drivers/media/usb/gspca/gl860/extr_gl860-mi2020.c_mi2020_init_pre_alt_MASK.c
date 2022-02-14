
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hue; int brightness; int sharpness; scalar_t__ backlight; scalar_t__ gamma; scalar_t__ contrast; } ;
struct sd {TYPE_1__ vold; scalar_t__ mirrorMask; } ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct gspca_dev*) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;

 VAR_1->mirrorMask = 0;
 VAR_1->vold.hue = -1;


 VAR_1->vold.brightness = -1;
 VAR_1->vold.sharpness = -1;


 VAR_1->vold.contrast = 0;
 VAR_1->vold.gamma = 0;
 VAR_1->vold.backlight = 0;

 FUNC_0(VAR_0);

 return 0;
}
