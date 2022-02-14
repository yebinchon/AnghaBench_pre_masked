
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlan_network {int list; scalar_t__ fixed; } ;
struct __queue {int queue; } ;
struct mlme_priv {int num_of_scanned; struct __queue free_bss_pool; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct mlme_priv *VAR_0,
     struct wlan_network *VAR_1)
{
 struct __queue *VAR_2 = &VAR_0->free_bss_pool;

 if (!VAR_1)
  return;
 if (VAR_1->fixed)
  return;
 FUNC_1(&VAR_1->list);
 FUNC_0(&VAR_1->list, &VAR_2->queue);
 VAR_0->num_of_scanned--;
}
