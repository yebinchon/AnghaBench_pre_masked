
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int x; int y; } ;
struct hdmi_drm_infoframe {int eotf; int metadata_type; int max_display_mastering_luminance; int min_display_mastering_luminance; int max_cll; int max_fall; TYPE_2__ white_point; TYPE_1__* display_primaries; } ;
struct TYPE_3__ {int x; int y; } ;


 int VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (int ) ;
 int const VAR_4 ;
 int FUNC_1 (struct hdmi_drm_infoframe*) ;
 scalar_t__ FUNC_2 (void const*,size_t) ;

__attribute__((used)) static int FUNC_3(struct hdmi_drm_infoframe *VAR_5,
         const void *VAR_6, size_t VAR_7)
{
 const u8 *VAR_8 = VAR_6;
 const u8 *VAR_9;
 u8 VAR_10, VAR_11;
 u8 VAR_12, VAR_13;
 int VAR_14;
 int VAR_15;

 if (VAR_7 < FUNC_0(VAR_0))
  return -VAR_1;

 if (VAR_8[0] != VAR_4 ||
     VAR_8[1] != 1 ||
     VAR_8[2] != VAR_2)
  return -VAR_1;

 if (FUNC_2(VAR_6, FUNC_0(VAR_0)) != 0)
  return -VAR_1;

 VAR_14 = FUNC_1(VAR_5);
 if (VAR_14)
  return VAR_14;

 VAR_8 += VAR_3;

 VAR_5->eotf = VAR_8[0] & 0x7;
 VAR_5->metadata_type = VAR_8[1] & 0x7;

 VAR_9 = VAR_8 + 2;
 for (VAR_15 = 0; VAR_15 < 3; VAR_15++) {
  VAR_10 = *VAR_9++;
  VAR_11 = *VAR_9++;
  VAR_5->display_primaries[VAR_15].x = (VAR_11 << 8) | VAR_10;
  VAR_12 = *VAR_9++;
  VAR_13 = *VAR_9++;
  VAR_5->display_primaries[VAR_15].y = (VAR_13 << 8) | VAR_12;
 }

 VAR_5->white_point.x = (VAR_8[15] << 8) | VAR_8[14];
 VAR_5->white_point.y = (VAR_8[17] << 8) | VAR_8[16];

 VAR_5->max_display_mastering_luminance = (VAR_8[19] << 8) | VAR_8[18];
 VAR_5->min_display_mastering_luminance = (VAR_8[21] << 8) | VAR_8[20];
 VAR_5->max_cll = (VAR_8[23] << 8) | VAR_8[22];
 VAR_5->max_fall = (VAR_8[25] << 8) | VAR_8[24];

 return 0;
}
