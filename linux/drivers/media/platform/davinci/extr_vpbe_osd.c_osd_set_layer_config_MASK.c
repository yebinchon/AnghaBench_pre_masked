
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct osd_layer_config {scalar_t__ pixfmt; } ;
struct osd_window_state {int fb_base_phys; struct osd_layer_config lconfig; scalar_t__ is_enabled; } ;
struct osd_state {scalar_t__ yc_pixfmt; int lock; int field_inversion; int pingpong; struct osd_window_state* win; struct osd_osdwin_state* osdwin; int blink; int is_blinking; } ;
struct osd_osdwin_state {unsigned char* palette_map; int rec601_attenuation; int colorkey; scalar_t__ colorkey_blending; int blend; int clut; } ;
typedef enum osd_win_layer { ____Placeholder_osd_win_layer } osd_win_layer ;
typedef enum osd_layer { ____Placeholder_osd_layer } osd_layer ;


 size_t VAR_0 ;
 size_t VAR_1 ;



 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (struct osd_state*,size_t) ;
 int FUNC_1 (struct osd_state*,int) ;
 int FUNC_2 (struct osd_state*) ;
 int FUNC_3 (struct osd_state*,int ,int ,struct osd_layer_config*) ;
 int FUNC_4 (struct osd_state*,size_t,int ,scalar_t__) ;
 int FUNC_5 (struct osd_state*,size_t) ;
 int FUNC_6 (struct osd_state*,size_t,int ) ;
 int FUNC_7 (struct osd_state*,int ,int ) ;
 int FUNC_8 (struct osd_state*,int,struct osd_layer_config*) ;
 int FUNC_9 (struct osd_state*,size_t,int ) ;
 int FUNC_10 (struct osd_state*,int,unsigned char,unsigned char,scalar_t__) ;
 int FUNC_11 (struct osd_state*,size_t,int ) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (struct osd_state*,int,struct osd_layer_config*) ;

__attribute__((used)) static int FUNC_16(struct osd_state *VAR_8, enum osd_layer VAR_9,
    struct osd_layer_config *VAR_10)
{
 struct osd_state *VAR_11 = VAR_8;
 struct osd_window_state *VAR_12 = &VAR_11->win[VAR_9];
 struct osd_layer_config *VAR_13 = &VAR_12->lconfig;
 unsigned long VAR_14;
 int VAR_15;

 FUNC_13(&VAR_11->lock, VAR_14);

 VAR_15 = FUNC_15(VAR_8, VAR_9, VAR_10);
 if (VAR_15) {
  FUNC_14(&VAR_11->lock, VAR_14);
  return VAR_15;
 }


 if (FUNC_12(VAR_10->pixfmt))
  VAR_11->yc_pixfmt = VAR_10->pixfmt;





 if (VAR_9 == VAR_5) {
  if (((VAR_10->pixfmt == VAR_2) &&
    (VAR_13->pixfmt != VAR_2)) ||
    ((VAR_10->pixfmt != VAR_2) &&
    (VAR_13->pixfmt == VAR_2))) {
   VAR_12->is_enabled = 0;
   FUNC_1(VAR_8, VAR_9);
  }
 }

 FUNC_8(VAR_8, VAR_9, VAR_10);

 if (VAR_9 == VAR_5) {
  struct osd_osdwin_state *VAR_16 =
      &VAR_11->osdwin[VAR_1];

  if ((VAR_10->pixfmt != VAR_2) &&
    (VAR_13->pixfmt == VAR_2)) {







   FUNC_9(VAR_8, VAR_1,
         VAR_16->clut);
   FUNC_6(VAR_8, VAR_1,
         VAR_16->blend);
   if (VAR_16->colorkey_blending) {
    FUNC_4(VAR_8, VAR_1,
              VAR_16->
              colorkey,
              VAR_10->pixfmt);
   } else
    FUNC_0(VAR_8, VAR_1);
   FUNC_11(VAR_8, VAR_1,
          VAR_16->
          rec601_attenuation);
  } else if ((VAR_10->pixfmt == VAR_2) &&
    (VAR_13->pixfmt != VAR_2)) {





   FUNC_7(VAR_8, VAR_11->is_blinking,
         VAR_11->blink);
  }
 }





 if ((VAR_10->pixfmt != VAR_13->pixfmt) &&
   ((VAR_10->pixfmt == 130) ||
   (VAR_10->pixfmt == 129) ||
   (VAR_10->pixfmt == 128))) {
  enum osd_win_layer VAR_17 =
      ((VAR_9 == VAR_4) ? VAR_0 : VAR_1);
  struct osd_osdwin_state *VAR_18 =
      &VAR_11->osdwin[VAR_17];
  unsigned char VAR_19;
  unsigned char VAR_20 = 0;

  switch (VAR_10->pixfmt) {
  case 130:
   VAR_20 = 2;
   break;
  case 129:
   VAR_20 = 4;
   break;
  case 128:
   VAR_20 = 16;
   break;
  default:
   break;
  }





  for (VAR_19 = 0; VAR_19 < 16; VAR_19++) {
   VAR_18->palette_map[VAR_19] = VAR_19;
   if (VAR_19 < VAR_20) {
    FUNC_10(VAR_8, VAR_17, VAR_19,
           VAR_19,
           VAR_10->pixfmt);
   }
  }
 }

 *VAR_13 = *VAR_10;

 if (VAR_11->win[VAR_6].lconfig.pixfmt == VAR_3)
  FUNC_5(VAR_8, VAR_6);
 else if (VAR_11->win[VAR_7].lconfig.pixfmt == VAR_3)
  FUNC_5(VAR_8, VAR_7);
 else
  FUNC_2(VAR_8);

 if (VAR_9 == VAR_6) {
  VAR_11->pingpong =
      FUNC_3(VAR_8, VAR_11->field_inversion,
             VAR_12->fb_base_phys,
             VAR_13);
 }

 FUNC_14(&VAR_11->lock, VAR_14);

 return 0;
}
