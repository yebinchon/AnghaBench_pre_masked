
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct osd_window_state {scalar_t__ is_allocated; } ;
struct osd_state {int lock; struct osd_window_state* win; } ;
typedef enum osd_layer { ____Placeholder_osd_layer } osd_layer ;


 int FUNC_0 (struct osd_state*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct osd_state *VAR_0, enum osd_layer VAR_1)
{
 struct osd_state *VAR_2 = VAR_0;
 struct osd_window_state *VAR_3 = &VAR_2->win[VAR_1];
 unsigned long VAR_4;

 FUNC_1(&VAR_2->lock, VAR_4);

 if (!VAR_3->is_allocated) {
  FUNC_2(&VAR_2->lock, VAR_4);
  return;
 }

 FUNC_2(&VAR_2->lock, VAR_4);
 FUNC_0(VAR_0, VAR_1);
 FUNC_1(&VAR_2->lock, VAR_4);

 VAR_3->is_allocated = 0;

 FUNC_2(&VAR_2->lock, VAR_4);
}
