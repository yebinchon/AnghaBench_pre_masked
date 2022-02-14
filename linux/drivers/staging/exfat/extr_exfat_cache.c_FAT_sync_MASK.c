
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct buf_cache_t {scalar_t__ drv; int flag; struct buf_cache_t* next; int buf_bh; } ;
struct fs_info_t {scalar_t__ drv; struct buf_cache_t FAT_cache_lru_list; } ;
struct TYPE_2__ {struct fs_info_t fs_info; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct super_block *VAR_2)
{
 struct buf_cache_t *VAR_3;
 struct fs_info_t *VAR_4 = &(FUNC_0(VAR_2)->fs_info);

 FUNC_1(&VAR_1);

 VAR_3 = VAR_4->FAT_cache_lru_list.next;
 while (VAR_3 != &VAR_4->FAT_cache_lru_list) {
  if ((VAR_3->drv == VAR_4->drv) && (VAR_3->flag & VAR_0)) {
   FUNC_2(VAR_3->buf_bh);
   VAR_3->flag &= ~(VAR_0);
  }
  VAR_3 = VAR_3->next;
 }

 FUNC_3(&VAR_1);
}
