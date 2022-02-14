
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u32 ;
struct wlan_network {int fixed; int list; scalar_t__ last_scanned; } ;
struct __queue {int lock; int queue; } ;
struct mlme_priv {int num_of_scanned; struct __queue free_bss_pool; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlme_priv*,int ) ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct mlme_priv *VAR_4, struct wlan_network *VAR_5, u8 VAR_6)
{
 unsigned int VAR_7;
 u32 VAR_8 = VAR_0;

 struct __queue *VAR_9 = &(VAR_4->free_bss_pool);

 if (VAR_5 == ((void*)0))
  return;

 if (VAR_5->fixed == 1)
  return;

 if ((FUNC_0(VAR_4, VAR_1) == 1) ||
  (FUNC_0(VAR_4, VAR_2) == 1))
  VAR_8 = 1;

 if (!VAR_6) {
  VAR_7 = FUNC_1(VAR_3 - VAR_5->last_scanned);
  if (VAR_7 < VAR_8)
   return;
 }

 FUNC_4(&VAR_9->lock);

 FUNC_3(&(VAR_5->list));

 FUNC_2(&(VAR_5->list), &(VAR_9->queue));

 VAR_4->num_of_scanned--;




 FUNC_5(&VAR_9->lock);
}
