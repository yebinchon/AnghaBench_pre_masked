
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int queue; } ;
struct sta_priv {int auth_list; int asoc_list; TYPE_1__ free_sta_queue; int * sta_hash; scalar_t__ pstainfo_buf; TYPE_1__ wakeup_q; TYPE_1__ sleep_q; scalar_t__ asoc_sta_count; int sta_hash_lock; scalar_t__ pallocated_stainfo_buf; } ;
struct sta_info {int list; } ;
typedef int s32 ;
typedef int addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct sta_info*) ;
 scalar_t__ FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct sta_priv *VAR_3)
{
 struct sta_info *VAR_4;
 s32 VAR_5;

 VAR_3->pallocated_stainfo_buf = FUNC_3(sizeof(struct sta_info) *
         VAR_2 + 4, VAR_1);
 if (!VAR_3->pallocated_stainfo_buf)
  return -VAR_0;
 VAR_3->pstainfo_buf = VAR_3->pallocated_stainfo_buf + 4 -
  ((addr_t)(VAR_3->pallocated_stainfo_buf) & 3);
 FUNC_1(&VAR_3->free_sta_queue);
 FUNC_5(&VAR_3->sta_hash_lock);
 VAR_3->asoc_sta_count = 0;
 FUNC_1(&VAR_3->sleep_q);
 FUNC_1(&VAR_3->wakeup_q);
 VAR_4 = (struct sta_info *)(VAR_3->pstainfo_buf);
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  FUNC_2(VAR_4);
  FUNC_0(&(VAR_3->sta_hash[VAR_5]));
  FUNC_4(&VAR_4->list, &VAR_3->free_sta_queue.queue);
  VAR_4++;
 }
 FUNC_0(&VAR_3->asoc_list);
 FUNC_0(&VAR_3->auth_list);
 return 0;
}
