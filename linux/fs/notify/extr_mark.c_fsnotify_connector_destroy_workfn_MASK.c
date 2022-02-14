
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct fsnotify_mark_connector {struct fsnotify_mark_connector* destroy_next; } ;


 struct fsnotify_mark_connector* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct fsnotify_mark_connector*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct work_struct *VAR_4)
{
 struct fsnotify_mark_connector *VAR_5, *VAR_6;

 FUNC_1(&VAR_1);
 VAR_5 = VAR_0;
 VAR_0 = ((void*)0);
 FUNC_2(&VAR_1);

 FUNC_3(&VAR_3);
 while (VAR_5) {
  VAR_6 = VAR_5;
  VAR_5 = VAR_5->destroy_next;
  FUNC_0(VAR_2, VAR_6);
 }
}
