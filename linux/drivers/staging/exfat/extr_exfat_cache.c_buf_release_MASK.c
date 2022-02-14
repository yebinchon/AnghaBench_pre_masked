
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct fs_info_t {int buf_cache_lru_list; } ;
struct buf_cache_t {int drv; int * buf_bh; scalar_t__ flag; int sec; } ;
typedef int sector_t ;
struct TYPE_2__ {struct fs_info_t fs_info; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 struct buf_cache_t* FUNC_2 (struct super_block*,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct buf_cache_t*) ;
 int FUNC_5 (struct buf_cache_t*,int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct super_block *VAR_1, sector_t VAR_2)
{
 struct buf_cache_t *VAR_3;
 struct fs_info_t *VAR_4 = &(FUNC_0(VAR_1)->fs_info);

 FUNC_3(&VAR_0);

 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (FUNC_4(VAR_3)) {
  VAR_3->drv = -1;
  VAR_3->sec = ~0;
  VAR_3->flag = 0;

  if (VAR_3->buf_bh) {
   FUNC_1(VAR_3->buf_bh);
   VAR_3->buf_bh = ((void*)0);
  }

  FUNC_5(VAR_3, &VAR_4->buf_cache_lru_list);
 }

 FUNC_6(&VAR_0);
}
