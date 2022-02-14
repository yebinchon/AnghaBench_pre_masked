
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_4__ {int x; int y; } ;
struct hdmi_drm_infoframe {size_t length; size_t type; size_t version; int max_display_mastering_luminance; int min_display_mastering_luminance; int max_cll; int max_fall; TYPE_2__ white_point; TYPE_1__* display_primaries; int metadata_type; int eotf; } ;
typedef size_t ssize_t ;
struct TYPE_3__ {int x; int y; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (void*,size_t) ;
 int FUNC_1 (void*,int ,size_t) ;

ssize_t FUNC_2(const struct hdmi_drm_infoframe *VAR_2,
         void *VAR_3, size_t VAR_4)
{
 u8 *VAR_5 = VAR_3;
 size_t VAR_6;
 int VAR_7;

 VAR_6 = VAR_1 + VAR_2->length;

 if (VAR_4 < VAR_6)
  return -VAR_0;

 FUNC_1(VAR_3, 0, VAR_4);

 VAR_5[0] = VAR_2->type;
 VAR_5[1] = VAR_2->version;
 VAR_5[2] = VAR_2->length;
 VAR_5[3] = 0;


 VAR_5 += VAR_1;

 *VAR_5++ = VAR_2->eotf;
 *VAR_5++ = VAR_2->metadata_type;

 for (VAR_7 = 0; VAR_7 < 3; VAR_7++) {
  *VAR_5++ = VAR_2->display_primaries[VAR_7].x;
  *VAR_5++ = VAR_2->display_primaries[VAR_7].x >> 8;
  *VAR_5++ = VAR_2->display_primaries[VAR_7].y;
  *VAR_5++ = VAR_2->display_primaries[VAR_7].y >> 8;
 }

 *VAR_5++ = VAR_2->white_point.x;
 *VAR_5++ = VAR_2->white_point.x >> 8;

 *VAR_5++ = VAR_2->white_point.y;
 *VAR_5++ = VAR_2->white_point.y >> 8;

 *VAR_5++ = VAR_2->max_display_mastering_luminance;
 *VAR_5++ = VAR_2->max_display_mastering_luminance >> 8;

 *VAR_5++ = VAR_2->min_display_mastering_luminance;
 *VAR_5++ = VAR_2->min_display_mastering_luminance >> 8;

 *VAR_5++ = VAR_2->max_cll;
 *VAR_5++ = VAR_2->max_cll >> 8;

 *VAR_5++ = VAR_2->max_fall;
 *VAR_5++ = VAR_2->max_fall >> 8;

 FUNC_0(VAR_3, VAR_6);

 return VAR_6;
}
