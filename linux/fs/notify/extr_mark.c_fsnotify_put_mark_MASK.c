
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsnotify_mark_connector {struct fsnotify_mark_connector* destroy_next; int lock; int list; } ;
struct fsnotify_mark {int g_list; int connector; int obj_list; int refcnt; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct fsnotify_mark_connector* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct fsnotify_mark_connector*) ;
 struct fsnotify_mark_connector* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_3 (struct fsnotify_mark_connector*,unsigned int*) ;
 int FUNC_4 (unsigned int,void*) ;
 int FUNC_5 (struct fsnotify_mark*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int ,int *,int ) ;
 int FUNC_10 (int ,int *) ;
 int VAR_6 ;
 int FUNC_11 (int *,int *) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int VAR_7 ;

void FUNC_15(struct fsnotify_mark *VAR_8)
{
 struct fsnotify_mark_connector *VAR_9 = FUNC_0(VAR_8->connector);
 void *VAR_10 = ((void*)0);
 unsigned int VAR_11 = VAR_0;
 bool VAR_12 = 0;


 if (!VAR_9) {
  if (FUNC_12(&VAR_8->refcnt))
   FUNC_5(VAR_8);
  return;
 }





 if (!FUNC_11(&VAR_8->refcnt, &VAR_9->lock))
  return;

 FUNC_6(&VAR_8->obj_list);
 if (FUNC_7(&VAR_9->list)) {
  VAR_10 = FUNC_3(VAR_9, &VAR_11);
  VAR_12 = 1;
 } else {
  FUNC_2(VAR_9);
 }
 FUNC_1(VAR_8->connector, ((void*)0));
 FUNC_14(&VAR_9->lock);

 FUNC_4(VAR_11, VAR_10);

 if (VAR_12) {
  FUNC_13(&VAR_5);
  VAR_9->destroy_next = VAR_2;
  VAR_2 = VAR_9;
  FUNC_14(&VAR_5);
  FUNC_10(VAR_7, &VAR_3);
 }






 FUNC_13(&VAR_5);
 FUNC_8(&VAR_8->g_list, &VAR_4);
 FUNC_14(&VAR_5);
 FUNC_9(VAR_7, &VAR_6,
      VAR_1);
}
