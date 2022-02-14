
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct osd_layer_config {int xsize; int ysize; } ;
struct display_layer_info {int v_exp; void* v_zoom; int h_exp; void* h_zoom; struct osd_layer_config config; } ;
struct v4l2_pix_format {int width; int height; } ;
struct vpbe_layer {struct display_layer_info layer_info; struct v4l2_pix_format pix_fmt; } ;
struct vpbe_display {struct vpbe_device* vpbe_dev; } ;
struct TYPE_2__ {int std_id; int xres; } ;
struct vpbe_device {int v4l2_dev; TYPE_1__ current_timings; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int,int ,int *,char*,int,int) ;

__attribute__((used)) static void
FUNC_1(struct vpbe_display *VAR_14,
   struct vpbe_layer *VAR_15,
   int VAR_16, int VAR_17)
{
 struct display_layer_info *VAR_18 = &VAR_15->layer_info;
 struct v4l2_pix_format *VAR_19 = &VAR_15->pix_fmt;
 struct osd_layer_config *VAR_20 = &VAR_15->layer_info.config;
 struct vpbe_device *VAR_21 = VAR_14->vpbe_dev;
 int VAR_22;
 int VAR_23 = 0;
 int VAR_24 = 0;
 int VAR_25;
 int VAR_26;

 v4l2_std_id VAR_27 = VAR_21->current_timings.std_id;
 VAR_20->xsize = VAR_19->width;
 VAR_20->ysize = VAR_19->height;
 VAR_18->h_zoom = VAR_10;
 VAR_18->v_zoom = VAR_10;
 VAR_18->h_exp = VAR_1;
 VAR_18->v_exp = VAR_9;

 if (VAR_19->width < VAR_16) {
  VAR_25 = VAR_21->current_timings.xres / VAR_19->width;
  if (VAR_25 < 2)
   VAR_25 = 1;
  else if (VAR_25 >= 4)
   VAR_25 = 4;
  else
   VAR_25 = 2;
  VAR_20->xsize *= VAR_25;
  if (VAR_20->xsize < VAR_16) {
   if ((VAR_27 & VAR_2) ||
   (VAR_27 & VAR_3)) {
    VAR_22 = (VAR_20->xsize *
     VAR_5) /
     VAR_4;
    if (VAR_22 <= VAR_16) {
     VAR_23 = 1;
     VAR_20->xsize = VAR_22;
    }
   }
  }
  if (VAR_25 == 2)
   VAR_18->h_zoom = VAR_11;
  else if (VAR_25 == 4)
   VAR_18->h_zoom = VAR_12;
  if (VAR_23)
   VAR_18->h_exp = VAR_0;
 } else {

  VAR_20->xsize = VAR_16;
 }

 if (VAR_19->height < VAR_17) {
  VAR_26 = VAR_17 / VAR_19->height;
  if (VAR_26 < 2)
   VAR_26 = 1;
  else if (VAR_26 >= 4)
   VAR_26 = 4;
  else
   VAR_26 = 2;
  VAR_20->ysize *= VAR_26;
  if (VAR_20->ysize < VAR_17) {
   if ((VAR_27 & VAR_3)) {
    VAR_22 = (VAR_20->ysize *
     VAR_7) /
     VAR_6;
    if (VAR_22 <= VAR_17) {
     VAR_24 = 1;
     VAR_20->ysize = VAR_22;
    }
   }
  }
  if (VAR_26 == 2)
   VAR_18->v_zoom = VAR_11;
  else if (VAR_26 == 4)
   VAR_18->v_zoom = VAR_12;
  if (VAR_24)
   VAR_18->v_exp = VAR_8;
 } else {

  VAR_20->ysize = VAR_17;
 }
 FUNC_0(1, VAR_13, &VAR_21->v4l2_dev,
  "crop display xsize = %d, ysize = %d\n",
  VAR_20->xsize, VAR_20->ysize);
}
