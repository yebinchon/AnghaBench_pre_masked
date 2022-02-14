
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct buf_cache_t {int drv; struct buf_cache_t* next; int * buf_bh; scalar_t__ flag; int sec; } ;
struct fs_info_t {int drv; struct buf_cache_t buf_cache_lru_list; } ;
struct TYPE_2__ {struct fs_info_t fs_info; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct super_block *VAR_1)
{
 struct buf_cache_t *VAR_2;
 struct fs_info_t *VAR_3 = &(FUNC_0(VAR_1)->fs_info);

 FUNC_2(&VAR_0);

 VAR_2 = VAR_3->buf_cache_lru_list.next;
 while (VAR_2 != &VAR_3->buf_cache_lru_list) {
  if (VAR_2->drv == VAR_3->drv) {
   VAR_2->drv = -1;
   VAR_2->sec = ~0;
   VAR_2->flag = 0;

   if (VAR_2->buf_bh) {
    FUNC_1(VAR_2->buf_bh);
    VAR_2->buf_bh = ((void*)0);
   }
  }
  VAR_2 = VAR_2->next;
 }

 FUNC_3(&VAR_0);
}
