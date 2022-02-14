
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wilc_vif {int dummy; } ;
struct wilc {struct wilc_vif** vif; } ;


 int VAR_0 ;

__attribute__((used)) static struct wilc_vif *FUNC_0(struct wilc *VAR_1, int VAR_2)
{
 int VAR_3 = VAR_2 - 1;

 if (VAR_3 < 0 || VAR_3 >= VAR_0)
  return ((void*)0);

 return VAR_1->vif[VAR_3];
}
