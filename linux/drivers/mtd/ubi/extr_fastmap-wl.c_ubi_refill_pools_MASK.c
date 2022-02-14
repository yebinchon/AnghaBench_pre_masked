
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int rb; } ;
struct ubi_wl_entry {int pnum; TYPE_1__ u; } ;
struct ubi_fm_pool {size_t size; size_t max_size; scalar_t__ used; int * pebs; } ;
struct TYPE_6__ {int rb_node; } ;
struct ubi_device {int free_count; int beb_rsvd_pebs; int wl_lock; TYPE_2__ free; struct ubi_fm_pool fm_pool; struct ubi_fm_pool fm_wl_pool; } ;


 int VAR_0 ;
 struct ubi_wl_entry* FUNC_0 (struct ubi_device*,TYPE_2__*,int ) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (struct ubi_device*,struct ubi_fm_pool*) ;
 int FUNC_3 (struct ubi_device*,struct ubi_wl_entry*,TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct ubi_wl_entry* FUNC_6 (struct ubi_device*) ;

void FUNC_7(struct ubi_device *VAR_1)
{
 struct ubi_fm_pool *VAR_2 = &VAR_1->fm_wl_pool;
 struct ubi_fm_pool *VAR_3 = &VAR_1->fm_pool;
 struct ubi_wl_entry *VAR_4;
 int VAR_5;

 FUNC_4(&VAR_1->wl_lock);

 FUNC_2(VAR_1, VAR_2);
 FUNC_2(VAR_1, VAR_3);

 VAR_2->size = 0;
 VAR_3->size = 0;

 for (;;) {
  VAR_5 = 0;
  if (VAR_3->size < VAR_3->max_size) {
   if (!VAR_1->free.rb_node)
    break;

   VAR_4 = FUNC_6(VAR_1);
   if (!VAR_4)
    break;

   VAR_3->pebs[VAR_3->size] = VAR_4->pnum;
   VAR_3->size++;
  } else
   VAR_5++;

  if (VAR_2->size < VAR_2->max_size) {
   if (!VAR_1->free.rb_node ||
      (VAR_1->free_count - VAR_1->beb_rsvd_pebs < 5))
    break;

   VAR_4 = FUNC_0(VAR_1, &VAR_1->free, VAR_0);
   FUNC_3(VAR_1, VAR_4, &VAR_1->free);
   FUNC_1(&VAR_4->u.rb, &VAR_1->free);
   VAR_1->free_count--;

   VAR_2->pebs[VAR_2->size] = VAR_4->pnum;
   VAR_2->size++;
  } else
   VAR_5++;

  if (VAR_5 == 2)
   break;
 }

 VAR_2->used = 0;
 VAR_3->used = 0;

 FUNC_5(&VAR_1->wl_lock);
}
