
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct osd_layer_config {scalar_t__ pixfmt; int ysize; int xsize; int line_length; } ;
struct osd_window_state {int is_enabled; int fb_base_phys; int is_allocated; struct osd_layer_config lconfig; } ;
struct osd_state {int lock; int blink; int is_blinking; struct osd_window_state* win; } ;
typedef enum osd_layer { ____Placeholder_osd_layer } osd_layer ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct osd_state*) ;
 int FUNC_1 (struct osd_state*,int) ;
 int FUNC_2 (struct osd_state*,int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct osd_state *VAR_1, enum osd_layer VAR_2,
       int VAR_3)
{
 struct osd_state *VAR_4 = VAR_1;
 struct osd_window_state *VAR_5 = &VAR_4->win[VAR_2];
 struct osd_layer_config *VAR_6 = &VAR_5->lconfig;
 unsigned long VAR_7;

 FUNC_3(&VAR_4->lock, VAR_7);





 if (!VAR_3 && (!VAR_5->is_allocated ||
   !VAR_5->fb_base_phys ||
   !VAR_6->line_length ||
   !VAR_6->xsize ||
   !VAR_6->ysize)) {
  FUNC_4(&VAR_4->lock, VAR_7);
  return -1;
 }

 if (VAR_5->is_enabled) {
  FUNC_4(&VAR_4->lock, VAR_7);
  return 0;
 }
 VAR_5->is_enabled = 1;

 if (VAR_6->pixfmt != VAR_0)
  FUNC_1(VAR_1, VAR_2);
 else {
  FUNC_0(VAR_1);
  FUNC_2(VAR_1, VAR_4->is_blinking, VAR_4->blink);
 }

 FUNC_4(&VAR_4->lock, VAR_7);

 return 0;
}
