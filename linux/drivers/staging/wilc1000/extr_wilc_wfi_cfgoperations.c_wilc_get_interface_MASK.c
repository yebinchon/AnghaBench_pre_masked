
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wilc_vif {int dummy; } ;
struct wilc {int vif_num; int vif_mutex; struct wilc_vif** vif; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

struct wilc_vif *FUNC_2(struct wilc *VAR_0)
{
 int VAR_1;
 struct wilc_vif *VAR_2 = ((void*)0);

 FUNC_0(&VAR_0->vif_mutex);
 for (VAR_1 = 0; VAR_1 < VAR_0->vif_num; VAR_1++) {
  if (VAR_0->vif[VAR_1]) {
   VAR_2 = VAR_0->vif[VAR_1];
   break;
  }
 }
 FUNC_1(&VAR_0->vif_mutex);
 return VAR_2;
}
