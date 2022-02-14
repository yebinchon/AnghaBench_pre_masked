
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wlan_network {int list; scalar_t__ last_scanned; scalar_t__ fixed; } ;
struct __queue {int lock; int queue; } ;
struct mlme_priv {int num_of_scanned; struct __queue free_bss_pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct mlme_priv *VAR_3,
     struct wlan_network *VAR_4)
{
 u32 VAR_5, VAR_6;
 unsigned long VAR_7;
 struct __queue *VAR_8 = &(VAR_3->free_bss_pool);

 if (!VAR_4)
  return;
 if (VAR_4->fixed)
  return;
 VAR_5 = VAR_2;
 VAR_6 = (VAR_5 - (u32)VAR_4->last_scanned) / VAR_0;
 if (VAR_6 < VAR_1)
  return;
 FUNC_2(&VAR_8->lock, VAR_7);
 FUNC_1(&VAR_4->list);
 FUNC_0(&VAR_4->list, &VAR_8->queue);
 VAR_3->num_of_scanned--;
 FUNC_3(&VAR_8->lock, VAR_7);
}
