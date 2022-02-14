
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wilc {int vif_num; int vif_mutex; TYPE_1__** vif; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ mode; struct net_device* ndev; int bssid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct net_device *FUNC_3(struct wilc *VAR_2, u8 *VAR_3)
{
 u8 *VAR_4, *VAR_5;
 int VAR_6 = 0;
 struct net_device *VAR_7 = ((void*)0);

 VAR_4 = VAR_3 + 10;
 VAR_5 = VAR_3 + 4;

 FUNC_1(&VAR_2->vif_mutex);
 for (VAR_6 = 0; VAR_6 < VAR_2->vif_num; VAR_6++) {
  if (VAR_2->vif[VAR_6]->mode == VAR_1)
   if (FUNC_0(VAR_4,
             VAR_2->vif[VAR_6]->bssid)) {
    VAR_7 = VAR_2->vif[VAR_6]->ndev;
    goto out;
   }
  if (VAR_2->vif[VAR_6]->mode == VAR_0)
   if (FUNC_0(VAR_5,
             VAR_2->vif[VAR_6]->bssid)) {
    VAR_7 = VAR_2->vif[VAR_6]->ndev;
    goto out;
   }
 }
out:
 FUNC_2(&VAR_2->vif_mutex);
 return VAR_7;
}
