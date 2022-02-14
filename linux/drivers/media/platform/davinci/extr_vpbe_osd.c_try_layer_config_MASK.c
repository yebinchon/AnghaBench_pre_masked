
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct osd_layer_config {int pixfmt; int line_length; int xsize; int ysize; int xpos; int ypos; int interlaced; } ;
struct osd_window_state {struct osd_layer_config lconfig; } ;
struct osd_state {scalar_t__ vpbe_type; struct osd_window_state* win; } ;
typedef enum osd_pix_format { ____Placeholder_osd_pix_format } osd_pix_format ;
typedef enum osd_layer { ____Placeholder_osd_layer } osd_layer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 void* FUNC_3 (int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct osd_state *VAR_9, enum osd_layer VAR_10,
       struct osd_layer_config *VAR_11)
{
 struct osd_state *VAR_12 = VAR_9;
 struct osd_window_state *VAR_13 = &VAR_12->win[VAR_10];
 int VAR_14 = 0;


 switch (VAR_11->pixfmt) {
 case 137:
 case 136:
 case 135:
 case 134:
 case 131:
  if (VAR_12->vpbe_type == VAR_2)
   VAR_14 = !FUNC_2(VAR_10);
  break;
 case 129:
 case 128:
  VAR_14 = !FUNC_2(VAR_10);
  break;
 case 130:
  if (VAR_12->vpbe_type == VAR_2)
   VAR_14 = !FUNC_2(VAR_10);
  else if ((VAR_12->vpbe_type == VAR_4) ||
    (VAR_12->vpbe_type == VAR_3))
   VAR_14 = !FUNC_0(VAR_10);
  break;
 case 133:
  if (VAR_12->vpbe_type != VAR_3)
   VAR_14 = 1;
  else
   VAR_14 = FUNC_0(VAR_10);
  break;
 case 132:
  VAR_14 = (VAR_10 != VAR_6);
  break;
 default:
  VAR_14 = 1;
  break;
 }
 if (VAR_14) {




  *VAR_11 = VAR_13->lconfig;
  return VAR_14;
 }



 if ((VAR_12->vpbe_type == VAR_2) &&
     FUNC_0(VAR_10) && FUNC_1(VAR_11->pixfmt)) {
  enum osd_pix_format VAR_15;

  if (VAR_10 == VAR_5)
   VAR_15 = VAR_12->win[VAR_6].lconfig.pixfmt;
  else
   VAR_15 = VAR_12->win[VAR_5].lconfig.pixfmt;

  if (FUNC_1(VAR_15)) {




   *VAR_11 = VAR_13->lconfig;
   return 1;
  }
 }


 if ((VAR_12->vpbe_type == VAR_2) && FUNC_2(VAR_10) &&
  VAR_11->pixfmt == 130) {
  enum osd_pix_format VAR_16;

  if (VAR_10 == VAR_7)
   VAR_16 = VAR_12->win[VAR_8].lconfig.pixfmt;
  else
   VAR_16 = VAR_12->win[VAR_7].lconfig.pixfmt;

  if (VAR_16 == 130) {




   *VAR_11 = VAR_13->lconfig;
   return 1;
  }
 }


 if (!VAR_11->line_length || !VAR_11->xsize || !VAR_11->ysize) {
  *VAR_11 = VAR_13->lconfig;
  return 1;
 }


 VAR_11->line_length = ((VAR_11->line_length + 31) / 32) * 32;
 VAR_11->line_length =
     FUNC_3(VAR_11->line_length, (unsigned)VAR_0);
 VAR_11->xsize = FUNC_3(VAR_11->xsize, (unsigned)VAR_1);
 VAR_11->ysize = FUNC_3(VAR_11->ysize, (unsigned)VAR_1);
 VAR_11->xpos = FUNC_3(VAR_11->xpos, (unsigned)VAR_1);
 VAR_11->ypos = FUNC_3(VAR_11->ypos, (unsigned)VAR_1);
 VAR_11->interlaced = (VAR_11->interlaced != 0);
 if (VAR_11->interlaced) {

  VAR_11->ysize &= ~1;
  VAR_11->ypos &= ~1;
 }

 return 0;
}
