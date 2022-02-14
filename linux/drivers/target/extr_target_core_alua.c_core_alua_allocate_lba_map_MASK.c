
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct t10_alua_lba_map {int lba_map_list; void* lba_map_last_lba; void* lba_map_first_lba; int lba_map_mem_list; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 struct t10_alua_lba_map* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 struct t10_alua_lba_map* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,struct list_head*) ;
 int FUNC_4 (char*) ;
 int VAR_2 ;

struct t10_alua_lba_map *
FUNC_5(struct list_head *VAR_3,
      u64 VAR_4, u64 VAR_5)
{
 struct t10_alua_lba_map *VAR_6;

 VAR_6 = FUNC_2(VAR_2, VAR_1);
 if (!VAR_6) {
  FUNC_4("Unable to allocate struct t10_alua_lba_map\n");
  return FUNC_0(-VAR_0);
 }
 FUNC_1(&VAR_6->lba_map_mem_list);
 VAR_6->lba_map_first_lba = VAR_4;
 VAR_6->lba_map_last_lba = VAR_5;

 FUNC_3(&VAR_6->lba_map_list, VAR_3);
 return VAR_6;
}
