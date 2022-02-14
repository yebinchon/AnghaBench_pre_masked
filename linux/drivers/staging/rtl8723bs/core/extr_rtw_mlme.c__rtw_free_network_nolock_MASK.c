
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlan_network {int fixed; int list; } ;
struct __queue {int dummy; } ;
struct mlme_priv {int num_of_scanned; struct __queue free_bss_pool; } ;


 int FUNC_0 (struct __queue*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct mlme_priv *VAR_0, struct wlan_network *VAR_1)
{

 struct __queue *VAR_2 = &(VAR_0->free_bss_pool);

 if (VAR_1 == ((void*)0))
  return;

 if (VAR_1->fixed == 1)
  return;



 FUNC_2(&(VAR_1->list));

 FUNC_1(&(VAR_1->list), FUNC_0(VAR_2));

 VAR_0->num_of_scanned--;


}
