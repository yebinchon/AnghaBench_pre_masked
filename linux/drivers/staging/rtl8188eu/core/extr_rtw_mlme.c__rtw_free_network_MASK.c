
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wlan_network {unsigned long last_scanned; int list; scalar_t__ fixed; } ;
struct __queue {int lock; int queue; } ;
struct mlme_priv {struct __queue free_bss_pool; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct mlme_priv*,int ) ;
 unsigned long VAR_4 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct mlme_priv *VAR_5, struct wlan_network *VAR_6, u8 VAR_7)
{
 unsigned long VAR_8;
 u32 VAR_9;
 u32 VAR_10 = VAR_1;
 struct __queue *VAR_11 = &VAR_5->free_bss_pool;

 if (!VAR_6)
  return;

 if (VAR_6->fixed)
  return;
 VAR_8 = VAR_4;
 if ((FUNC_0(VAR_5, VAR_2)) ||
     (FUNC_0(VAR_5, VAR_3)))
  VAR_10 = 1;
 if (!VAR_7) {
  VAR_9 = (VAR_8 - VAR_6->last_scanned)/VAR_0;
  if (VAR_9 < VAR_10)
   return;
 }
 FUNC_3(&VAR_11->lock);
 FUNC_2(&VAR_6->list);
 FUNC_1(&VAR_6->list, &VAR_11->queue);
 FUNC_4(&VAR_11->lock);
}
