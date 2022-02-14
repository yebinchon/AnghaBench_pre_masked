
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct osd_layer_config {int dummy; } ;
struct osd_window_state {struct osd_layer_config lconfig; } ;
struct osd_state {int lock; struct osd_window_state* win; } ;
typedef enum osd_layer { ____Placeholder_osd_layer } osd_layer ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct osd_state *VAR_0, enum osd_layer VAR_1,
     struct osd_layer_config *VAR_2)
{
 struct osd_state *VAR_3 = VAR_0;
 struct osd_window_state *VAR_4 = &VAR_3->win[VAR_1];
 unsigned long VAR_5;

 FUNC_0(&VAR_3->lock, VAR_5);

 *VAR_2 = VAR_4->lconfig;

 FUNC_1(&VAR_3->lock, VAR_5);
}
