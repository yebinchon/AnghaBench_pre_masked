
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int y; int x; } ;
struct hdmi_drm_infoframe {int max_fall; int max_cll; int min_display_mastering_luminance; int max_display_mastering_luminance; TYPE_2__ white_point; TYPE_1__* display_primaries; int eotf; int metadata_type; int length; } ;
struct hdmi_any_infoframe {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int y; int x; } ;


 int FUNC_0 (char const*,struct device*,struct hdmi_any_infoframe*) ;
 int FUNC_1 (char*,int,...) ;

__attribute__((used)) static void FUNC_2(const char *VAR_0,
       struct device *VAR_1,
       const struct hdmi_drm_infoframe *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_0, VAR_1,
      (struct hdmi_any_infoframe *)VAR_2);
 FUNC_1("length: %d\n", VAR_2->length);
 FUNC_1("metadata type: %d\n", VAR_2->metadata_type);
 FUNC_1("eotf: %d\n", VAR_2->eotf);
 for (VAR_3 = 0; VAR_3 < 3; VAR_3++) {
  FUNC_1("x[%d]: %d\n", VAR_3, VAR_2->display_primaries[VAR_3].x);
  FUNC_1("y[%d]: %d\n", VAR_3, VAR_2->display_primaries[VAR_3].y);
 }

 FUNC_1("white point x: %d\n", VAR_2->white_point.x);
 FUNC_1("white point y: %d\n", VAR_2->white_point.y);

 FUNC_1("max_display_mastering_luminance: %d\n",
   VAR_2->max_display_mastering_luminance);
 FUNC_1("min_display_mastering_luminance: %d\n",
   VAR_2->min_display_mastering_luminance);

 FUNC_1("max_cll: %d\n", VAR_2->max_cll);
 FUNC_1("max_fall: %d\n", VAR_2->max_fall);
}
