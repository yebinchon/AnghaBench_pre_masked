
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node_info {int version; void* blk_addr; void* ino; } ;
struct f2fs_nat_entry {int version; int block_addr; int ino; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct node_info *VAR_0,
      struct f2fs_nat_entry *VAR_1)
{
 VAR_0->ino = FUNC_0(VAR_1->ino);
 VAR_0->blk_addr = FUNC_0(VAR_1->block_addr);
 VAR_0->version = VAR_1->version;
}
