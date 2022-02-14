
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct omap_video_timings {int interlace; } ;
struct omap_overlay_info {int height; int width; int pos_x; scalar_t__ out_width; scalar_t__ out_height; int rotation_type; int color_mode; } ;
typedef enum omap_plane { ____Placeholder_omap_plane } omap_plane ;
typedef enum omap_overlay_caps { ____Placeholder_omap_overlay_caps } omap_overlay_caps ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 unsigned long FUNC_1 (int) ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 (unsigned long,unsigned long,int,struct omap_video_timings const*,int,int,int,int,int ,int*,int*,int*,int,int ,int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int) ;

int FUNC_6(enum omap_plane VAR_1, enum omap_channel VAR_2,
  const struct omap_overlay_info *VAR_3,
  const struct omap_video_timings *VAR_4,
  int *VAR_5, int *VAR_6)
{
 enum omap_overlay_caps VAR_7 = FUNC_5(VAR_1);
 bool VAR_8 = 1;
 bool VAR_9 = 0;
 u16 VAR_10 = VAR_3->height;
 u16 VAR_11 = VAR_3->width;
 bool VAR_12 = VAR_4->interlace;
 u16 VAR_13, VAR_14;
 int VAR_15 = VAR_3->pos_x;
 unsigned long VAR_16 = FUNC_2(VAR_2);
 unsigned long VAR_17 = FUNC_1(VAR_2);

 VAR_13 = VAR_3->out_width == 0 ? VAR_3->width : VAR_3->out_width;
 VAR_14 = VAR_3->out_height == 0 ? VAR_3->height : VAR_3->out_height;

 if (VAR_12 && VAR_3->height == VAR_14)
  VAR_9 = 1;

 if (VAR_12) {
  if (VAR_9)
   VAR_10 /= 2;
  VAR_14 /= 2;

  FUNC_0("adjusting for ilace: height %d, out_height %d\n",
    VAR_10, VAR_14);
 }

 if (!FUNC_4(VAR_1, VAR_3->color_mode))
  return -VAR_0;

 return FUNC_3(VAR_16, VAR_17, VAR_7, VAR_4, VAR_11,
   VAR_10, VAR_13, VAR_14, VAR_3->color_mode,
   &VAR_8, VAR_5, VAR_6, VAR_15,
   VAR_3->rotation_type, 0);
}
