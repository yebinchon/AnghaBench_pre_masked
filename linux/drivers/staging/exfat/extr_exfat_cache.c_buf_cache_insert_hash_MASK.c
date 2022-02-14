
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct fs_info_t {int sectors_per_clu_bits; struct buf_cache_t* buf_cache_hash_list; } ;
struct buf_cache_t {int sec; struct buf_cache_t* hash_next; struct buf_cache_t* hash_prev; } ;
typedef size_t s32 ;
struct TYPE_2__ {struct fs_info_t fs_info; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;

__attribute__((used)) static void FUNC_1(struct super_block *VAR_1,
      struct buf_cache_t *VAR_2)
{
 s32 VAR_3;
 struct buf_cache_t *VAR_4;
 struct fs_info_t *VAR_5;

 VAR_5 = &(FUNC_0(VAR_1)->fs_info);
 VAR_3 = (VAR_2->sec +
        (VAR_2->sec >> VAR_5->sectors_per_clu_bits)) &
  (VAR_0 - 1);

 VAR_4 = &VAR_5->buf_cache_hash_list[VAR_3];
 VAR_2->hash_next = VAR_4->hash_next;
 VAR_2->hash_prev = VAR_4;
 VAR_4->hash_next->hash_prev = VAR_2;
 VAR_4->hash_next = VAR_2;
}
