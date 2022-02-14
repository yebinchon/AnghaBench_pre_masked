
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsnotify_mark_connector {scalar_t__ type; int lock; } ;
typedef int fsnotify_connp_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct fsnotify_mark_connector* FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static struct fsnotify_mark_connector *FUNC_5(
      fsnotify_connp_t *VAR_2)
{
 struct fsnotify_mark_connector *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_3(&VAR_1);
 VAR_3 = FUNC_2(*VAR_2, &VAR_1);
 if (!VAR_3)
  goto out;
 FUNC_0(&VAR_3->lock);
 if (VAR_3->type == VAR_0) {
  FUNC_1(&VAR_3->lock);
  FUNC_4(&VAR_1, VAR_4);
  return ((void*)0);
 }
out:
 FUNC_4(&VAR_1, VAR_4);
 return VAR_3;
}
