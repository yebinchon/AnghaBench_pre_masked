
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct osd_layer_config {int pixfmt; scalar_t__ interlaced; scalar_t__ ypos; scalar_t__ xpos; scalar_t__ ysize; scalar_t__ xsize; scalar_t__ line_length; } ;
struct osd_window_state {scalar_t__ fb_base_phys; void* v_zoom; void* h_zoom; scalar_t__ is_enabled; struct osd_layer_config lconfig; } ;
struct osd_state {int lock; int yc_pixfmt; int blink; int is_blinking; struct osd_osdwin_state* osdwin; struct osd_window_state* win; } ;
struct osd_osdwin_state {int rec601_attenuation; int blend; int colorkey_blending; int clut; } ;
typedef enum osd_win_layer { ____Placeholder_osd_win_layer } osd_win_layer ;
typedef enum osd_layer { ____Placeholder_osd_layer } osd_layer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 void* VAR_6 ;
 int FUNC_0 (struct osd_state*,int) ;
 int FUNC_1 (struct osd_state*,int) ;
 int FUNC_2 (struct osd_state*,int,int ) ;
 int FUNC_3 (struct osd_state*,int,struct osd_layer_config*) ;
 int FUNC_4 (struct osd_state*,int,int ) ;
 int FUNC_5 (struct osd_state*,int,int ) ;
 int FUNC_6 (struct osd_state*,int,void*,void*) ;
 int FUNC_7 (struct osd_state*,int,scalar_t__,int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_10(struct osd_state *VAR_7, enum osd_layer VAR_8)
{
 struct osd_state *VAR_9 = VAR_7;
 struct osd_window_state *VAR_10 = &VAR_9->win[VAR_8];
 enum osd_win_layer VAR_11;
 struct osd_osdwin_state *VAR_12;
 struct osd_layer_config *VAR_13 = &VAR_10->lconfig;
 unsigned long VAR_14;

 FUNC_8(&VAR_9->lock, VAR_14);

 VAR_10->is_enabled = 0;
 FUNC_1(VAR_7, VAR_8);

 VAR_10->h_zoom = VAR_6;
 VAR_10->v_zoom = VAR_6;
 FUNC_6(VAR_7, VAR_8, VAR_10->h_zoom, VAR_10->v_zoom);

 VAR_10->fb_base_phys = 0;
 FUNC_7(VAR_7, VAR_8, VAR_10->fb_base_phys, 0);

 VAR_13->line_length = 0;
 VAR_13->xsize = 0;
 VAR_13->ysize = 0;
 VAR_13->xpos = 0;
 VAR_13->ypos = 0;
 VAR_13->interlaced = 0;
 switch (VAR_8) {
 case 131:
 case 130:
  VAR_11 = (VAR_8 == 131) ? VAR_1 : VAR_2;
  VAR_12 = &VAR_9->osdwin[VAR_11];





  VAR_13->pixfmt = VAR_4;
  FUNC_3(VAR_7, VAR_8, VAR_13);
  VAR_12->clut = VAR_5;
  FUNC_4(VAR_7, VAR_11, VAR_12->clut);
  VAR_12->colorkey_blending = 0;
  FUNC_0(VAR_7, VAR_11);
  VAR_12->blend = VAR_3;
  FUNC_2(VAR_7, VAR_11, VAR_12->blend);
  VAR_12->rec601_attenuation = 0;
  FUNC_5(VAR_7, VAR_11,
           VAR_12->
           rec601_attenuation);
  if (VAR_11 == VAR_2) {
   VAR_9->is_blinking = 0;
   VAR_9->blink = VAR_0;
  }
  break;
 case 129:
 case 128:
  VAR_13->pixfmt = VAR_9->yc_pixfmt;
  FUNC_3(VAR_7, VAR_8, VAR_13);
  break;
 }

 FUNC_9(&VAR_9->lock, VAR_14);
}
