
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wilc_vif {int dummy; } ;
struct wilc {int vif_num; struct wilc_vif** vif; } ;


 int VAR_0 ;
 struct wilc_vif* FUNC_0 (int ) ;

__attribute__((used)) static struct wilc_vif *FUNC_1(struct wilc *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->vif_num; VAR_2++)
  if (VAR_1->vif[VAR_2])
   return VAR_1->vif[VAR_2];

 return FUNC_0(-VAR_0);
}
