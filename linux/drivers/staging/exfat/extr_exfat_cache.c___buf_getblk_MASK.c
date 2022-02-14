
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct super_block {int dummy; } ;
struct fs_info_t {int drv; int buf_cache_lru_list; } ;
struct buf_cache_t {int drv; TYPE_1__* buf_bh; scalar_t__ flag; int sec; } ;
typedef int sector_t ;
struct TYPE_4__ {struct fs_info_t fs_info; } ;
struct TYPE_3__ {int * b_data; } ;


 TYPE_2__* FUNC_0 (struct super_block*) ;
 scalar_t__ VAR_0 ;
 struct buf_cache_t* FUNC_1 (struct super_block*,int ) ;
 struct buf_cache_t* FUNC_2 (struct super_block*,int ) ;
 int FUNC_3 (struct super_block*,struct buf_cache_t*) ;
 int FUNC_4 (struct buf_cache_t*) ;
 int FUNC_5 (struct buf_cache_t*,int *) ;
 int FUNC_6 (struct buf_cache_t*,int *) ;
 scalar_t__ FUNC_7 (struct super_block*,int ,TYPE_1__**,int) ;

__attribute__((used)) static u8 *FUNC_8(struct super_block *VAR_1, sector_t VAR_2)
{
 struct buf_cache_t *VAR_3;
 struct fs_info_t *VAR_4 = &(FUNC_0(VAR_1)->fs_info);

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3) {
  FUNC_6(VAR_3, &VAR_4->buf_cache_lru_list);
  return VAR_3->buf_bh->b_data;
 }

 VAR_3 = FUNC_2(VAR_1, VAR_2);

 FUNC_4(VAR_3);

 VAR_3->drv = VAR_4->drv;
 VAR_3->sec = VAR_2;
 VAR_3->flag = 0;

 FUNC_3(VAR_1, VAR_3);

 if (FUNC_7(VAR_1, VAR_2, &VAR_3->buf_bh, 1) != VAR_0) {
  FUNC_4(VAR_3);
  VAR_3->drv = -1;
  VAR_3->sec = ~0;
  VAR_3->flag = 0;
  VAR_3->buf_bh = ((void*)0);

  FUNC_5(VAR_3, &VAR_4->buf_cache_lru_list);
  return ((void*)0);
 }

 return VAR_3->buf_bh->b_data;
}
