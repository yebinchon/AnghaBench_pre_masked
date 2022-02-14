
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seg_entry {unsigned short type; unsigned short valid_blocks; int mtime; int cur_valid_map; } ;
struct f2fs_sit_entry {int mtime; int valid_map; int vblocks; } ;


 unsigned short VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned short) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_3(struct seg_entry *VAR_2,
     struct f2fs_sit_entry *VAR_3)
{
 unsigned short VAR_4 = (VAR_2->type << VAR_0) |
     VAR_2->valid_blocks;
 VAR_3->vblocks = FUNC_0(VAR_4);
 FUNC_2(VAR_3->valid_map, VAR_2->cur_valid_map, VAR_1);
 VAR_3->mtime = FUNC_1(VAR_2->mtime);
}
