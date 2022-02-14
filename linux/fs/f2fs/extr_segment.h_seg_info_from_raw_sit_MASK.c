
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seg_entry {int mtime; int type; int cur_valid_map_mir; int ckpt_valid_map; int cur_valid_map; void* ckpt_valid_blocks; void* valid_blocks; } ;
struct f2fs_sit_entry {int mtime; int valid_map; } ;


 int FUNC_0 (struct f2fs_sit_entry*) ;
 void* FUNC_1 (struct f2fs_sit_entry*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_4(struct seg_entry *VAR_1,
     struct f2fs_sit_entry *VAR_2)
{
 VAR_1->valid_blocks = FUNC_1(VAR_2);
 VAR_1->ckpt_valid_blocks = FUNC_1(VAR_2);
 FUNC_3(VAR_1->cur_valid_map, VAR_2->valid_map, VAR_0);
 FUNC_3(VAR_1->ckpt_valid_map, VAR_2->valid_map, VAR_0);



 VAR_1->type = FUNC_0(VAR_2);
 VAR_1->mtime = FUNC_2(VAR_2->mtime);
}
