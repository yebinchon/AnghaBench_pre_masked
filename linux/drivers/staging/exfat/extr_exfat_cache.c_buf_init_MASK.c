
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_11__ {struct TYPE_11__* prev; struct TYPE_11__* next; } ;
struct fs_info_t {TYPE_3__* buf_cache_array; TYPE_2__* buf_cache_hash_list; TYPE_3__* FAT_cache_array; TYPE_1__* FAT_cache_hash_list; TYPE_4__ buf_cache_lru_list; TYPE_4__ FAT_cache_lru_list; } ;
struct TYPE_12__ {struct fs_info_t fs_info; } ;
struct TYPE_10__ {int drv; int * next; int * prev; int * buf_bh; scalar_t__ flag; int sec; } ;
struct TYPE_9__ {int drv; struct TYPE_9__* hash_prev; struct TYPE_9__* hash_next; int sec; } ;
struct TYPE_8__ {int drv; struct TYPE_8__* hash_prev; struct TYPE_8__* hash_next; int sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__* FUNC_0 (struct super_block*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct super_block*,TYPE_3__*) ;
 int FUNC_2 (struct super_block*,TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_4__*) ;

void FUNC_4(struct super_block *VAR_4)
{
 struct fs_info_t *VAR_5 = &(FUNC_0(VAR_4)->fs_info);

 int VAR_6;


 VAR_5->FAT_cache_lru_list.next = &VAR_5->FAT_cache_lru_list;
 VAR_5->FAT_cache_lru_list.prev = &VAR_5->FAT_cache_lru_list;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_5->FAT_cache_array[VAR_6].drv = -1;
  VAR_5->FAT_cache_array[VAR_6].sec = ~0;
  VAR_5->FAT_cache_array[VAR_6].flag = 0;
  VAR_5->FAT_cache_array[VAR_6].buf_bh = ((void*)0);
  VAR_5->FAT_cache_array[VAR_6].prev = ((void*)0);
  VAR_5->FAT_cache_array[VAR_6].next = ((void*)0);
  FUNC_3(&VAR_5->FAT_cache_array[VAR_6],
       &VAR_5->FAT_cache_lru_list);
 }

 VAR_5->buf_cache_lru_list.next = &VAR_5->buf_cache_lru_list;
 VAR_5->buf_cache_lru_list.prev = &VAR_5->buf_cache_lru_list;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_5->buf_cache_array[VAR_6].drv = -1;
  VAR_5->buf_cache_array[VAR_6].sec = ~0;
  VAR_5->buf_cache_array[VAR_6].flag = 0;
  VAR_5->buf_cache_array[VAR_6].buf_bh = ((void*)0);
  VAR_5->buf_cache_array[VAR_6].prev = ((void*)0);
  VAR_5->buf_cache_array[VAR_6].next = ((void*)0);
  FUNC_3(&VAR_5->buf_cache_array[VAR_6],
       &VAR_5->buf_cache_lru_list);
 }


 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_5->FAT_cache_hash_list[VAR_6].drv = -1;
  VAR_5->FAT_cache_hash_list[VAR_6].sec = ~0;
  VAR_5->FAT_cache_hash_list[VAR_6].hash_next =
   &VAR_5->FAT_cache_hash_list[VAR_6];
  VAR_5->FAT_cache_hash_list[VAR_6].hash_prev =
   &VAR_5->FAT_cache_hash_list[VAR_6];
 }

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
  FUNC_1(VAR_4, &VAR_5->FAT_cache_array[VAR_6]);

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_5->buf_cache_hash_list[VAR_6].drv = -1;
  VAR_5->buf_cache_hash_list[VAR_6].sec = ~0;
  VAR_5->buf_cache_hash_list[VAR_6].hash_next =
   &VAR_5->buf_cache_hash_list[VAR_6];
  VAR_5->buf_cache_hash_list[VAR_6].hash_prev =
   &VAR_5->buf_cache_hash_list[VAR_6];
 }

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  FUNC_2(VAR_4, &VAR_5->buf_cache_array[VAR_6]);
}
