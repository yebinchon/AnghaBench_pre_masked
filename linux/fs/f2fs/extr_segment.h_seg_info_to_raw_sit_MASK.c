
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seg_entry {int valid_blocks; int ckpt_valid_blocks; int ckpt_valid_map; } ;
struct f2fs_sit_entry {int valid_map; } ;


 int VAR_0 ;
 int FUNC_0 (struct seg_entry*,struct f2fs_sit_entry*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct seg_entry *VAR_1,
     struct f2fs_sit_entry *VAR_2)
{
 FUNC_0(VAR_1, VAR_2);

 FUNC_1(VAR_1->ckpt_valid_map, VAR_2->valid_map, VAR_0);
 VAR_1->ckpt_valid_blocks = VAR_1->valid_blocks;
}
