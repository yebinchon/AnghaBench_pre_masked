
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_pix_format {int pixelformat; } ;
struct omapvideo_info {struct omap_overlay** overlays; } ;
struct omap_vout_device {struct omapvideo_info vid_info; struct v4l2_pix_format pix; } ;
struct omap_overlay {int id; } ;
typedef enum omap_color_mode { ____Placeholder_omap_color_mode } omap_color_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;







__attribute__((used)) static int FUNC_0(struct omap_vout_device *VAR_9)
{
 struct omap_overlay *VAR_10;
 struct omapvideo_info *VAR_11;
 struct v4l2_pix_format *VAR_12 = &VAR_9->pix;
 enum omap_color_mode VAR_13;

 VAR_11 = &VAR_9->vid_info;
 VAR_10 = VAR_11->overlays[0];

 switch (VAR_12->pixelformat) {
 case 128:
  VAR_13 = VAR_7;
  break;
 case 129:
  VAR_13 = VAR_6;
  break;
 case 130:
  VAR_13 = VAR_2;
  break;
 case 132:
  VAR_13 = VAR_3;
  break;
 case 131:
  VAR_13 = (VAR_10->id == VAR_8) ?
   VAR_4 : VAR_1;
  break;
 case 133:
  VAR_13 = VAR_5;
  break;
 default:
  VAR_13 = -VAR_0;
  break;
 }
 return VAR_13;
}
