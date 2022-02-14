
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sta_priv {int auth_to; int assoc_to; int expire_to; int max_num_sta; scalar_t__ auth_list_cnt; scalar_t__ asoc_list_cnt; int auth_list_lock; int asoc_list_lock; int auth_list; int asoc_list; scalar_t__ tim_bitmap; scalar_t__ sta_dz_bitmap; int free_sta_queue; int * sta_hash; scalar_t__ pstainfo_buf; int wakeup_q; int sleep_q; scalar_t__ asoc_sta_count; int sta_hash_lock; scalar_t__ pallocated_stainfo_buf; } ;
struct sta_info {int list; } ;
typedef int s32 ;
typedef int SIZE_PTR ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sta_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

u32 FUNC_7(struct sta_priv *VAR_3)
{
 struct sta_info *VAR_4;
 s32 VAR_5;

 VAR_3->pallocated_stainfo_buf = FUNC_6(sizeof(struct sta_info) * VAR_0+4);

 if (!VAR_3->pallocated_stainfo_buf)
  return VAR_1;

 VAR_3->pstainfo_buf = VAR_3->pallocated_stainfo_buf + 4 -
  ((SIZE_PTR)(VAR_3->pallocated_stainfo_buf) & 3);

 FUNC_1(&VAR_3->free_sta_queue);

 FUNC_5(&VAR_3->sta_hash_lock);


 VAR_3->asoc_sta_count = 0;
 FUNC_1(&VAR_3->sleep_q);
 FUNC_1(&VAR_3->wakeup_q);

 VAR_4 = (struct sta_info *)(VAR_3->pstainfo_buf);

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  FUNC_2(VAR_4);

  FUNC_0(&(VAR_3->sta_hash[VAR_5]));

  FUNC_4(&VAR_4->list, FUNC_3(&VAR_3->free_sta_queue));

  VAR_4++;
 }

 VAR_3->sta_dz_bitmap = 0;
 VAR_3->tim_bitmap = 0;

 FUNC_0(&VAR_3->asoc_list);
 FUNC_0(&VAR_3->auth_list);
 FUNC_5(&VAR_3->asoc_list_lock);
 FUNC_5(&VAR_3->auth_list_lock);
 VAR_3->asoc_list_cnt = 0;
 VAR_3->auth_list_cnt = 0;

 VAR_3->auth_to = 3;
 VAR_3->assoc_to = 3;
 VAR_3->expire_to = 3;
 VAR_3->max_num_sta = VAR_0;
 return VAR_2;
}
