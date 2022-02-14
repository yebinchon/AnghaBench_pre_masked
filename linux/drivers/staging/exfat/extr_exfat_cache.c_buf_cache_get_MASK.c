
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_3__ {struct buf_cache_t* prev; } ;
struct fs_info_t {TYPE_1__ buf_cache_lru_list; } ;
struct buf_cache_t {int flag; struct buf_cache_t* prev; } ;
typedef int sector_t ;
struct TYPE_4__ {struct fs_info_t fs_info; } ;


 TYPE_2__* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int FUNC_1 (struct buf_cache_t*,TYPE_1__*) ;

__attribute__((used)) static struct buf_cache_t *FUNC_2(struct super_block *VAR_1, sector_t VAR_2)
{
 struct buf_cache_t *VAR_3;
 struct fs_info_t *VAR_4 = &(FUNC_0(VAR_1)->fs_info);

 VAR_3 = VAR_4->buf_cache_lru_list.prev;
 while (VAR_3->flag & VAR_0)
  VAR_3 = VAR_3->prev;

 FUNC_1(VAR_3, &VAR_4->buf_cache_lru_list);
 return VAR_3;
}
