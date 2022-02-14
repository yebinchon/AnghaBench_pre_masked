
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsnotify_mark_connector {scalar_t__ type; int lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct fsnotify_mark_connector*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct fsnotify_mark_connector*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct fsnotify_mark_connector *VAR_1)
{
 if (!VAR_1)
  return;

 FUNC_3(&VAR_1->lock);
 FUNC_0(VAR_1);
 FUNC_4(&VAR_1->lock);
 if (VAR_1->type == VAR_0)
  FUNC_1(
     FUNC_2(VAR_1));
}
