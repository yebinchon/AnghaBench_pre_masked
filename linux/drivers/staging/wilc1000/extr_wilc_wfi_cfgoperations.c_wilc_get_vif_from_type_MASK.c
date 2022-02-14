
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wilc {int vif_num; int vif_mutex; TYPE_1__** vif; } ;
struct TYPE_2__ {int iftype; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct wilc *VAR_1, int VAR_2)
{
 int VAR_3;

 FUNC_0(&VAR_1->vif_mutex);
 for (VAR_3 = 0; VAR_3 < VAR_1->vif_num; VAR_3++) {
  if (VAR_1->vif[VAR_3]->iftype == VAR_2) {
   FUNC_1(&VAR_1->vif_mutex);
   return VAR_3;
  }
 }
 FUNC_1(&VAR_1->vif_mutex);

 return -VAR_0;
}
