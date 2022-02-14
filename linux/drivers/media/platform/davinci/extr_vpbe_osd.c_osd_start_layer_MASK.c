
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct osd_layer_config {int dummy; } ;
struct osd_window_state {unsigned long fb_base_phys; struct osd_layer_config lconfig; } ;
struct osd_state {int lock; int field_inversion; int pingpong; struct osd_window_state* win; } ;
typedef enum osd_layer { ____Placeholder_osd_layer } osd_layer ;


 int VAR_0 ;
 int FUNC_0 (struct osd_state*,int ,unsigned long,struct osd_layer_config*) ;
 int FUNC_1 (struct osd_state*,int,unsigned long,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct osd_state *VAR_1, enum osd_layer VAR_2,
       unsigned long VAR_3,
       unsigned long VAR_4)
{
 struct osd_state *VAR_5 = VAR_1;
 struct osd_window_state *VAR_6 = &VAR_5->win[VAR_2];
 struct osd_layer_config *VAR_7 = &VAR_6->lconfig;
 unsigned long VAR_8;

 FUNC_2(&VAR_5->lock, VAR_8);

 VAR_6->fb_base_phys = VAR_3 & ~0x1F;
 FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);

 if (VAR_2 == VAR_0) {
  VAR_5->pingpong =
      FUNC_0(VAR_1, VAR_5->field_inversion,
             VAR_6->fb_base_phys,
             VAR_7);
 }

 FUNC_3(&VAR_5->lock, VAR_8);
}
