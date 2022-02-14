
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jffs2_sb_info {scalar_t__ sector_size; scalar_t__ used_size; scalar_t__ dirty_size; scalar_t__ free_size; scalar_t__ erasing_size; scalar_t__ bad_size; scalar_t__ wasted_size; scalar_t__ unchecked_size; scalar_t__ flash_size; } ;
struct jffs2_eraseblock {scalar_t__ used_size; scalar_t__ dirty_size; scalar_t__ free_size; scalar_t__ wasted_size; scalar_t__ unchecked_size; int offset; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (int) ;

void
FUNC_3(struct jffs2_sb_info *VAR_0,
         struct jffs2_eraseblock *VAR_1)
{
 if (FUNC_2(VAR_1 && VAR_1->used_size + VAR_1->dirty_size +
   VAR_1->free_size + VAR_1->wasted_size +
   VAR_1->unchecked_size != VAR_0->sector_size)) {
  FUNC_1("eeep, space accounting for block at 0x%08x is screwed.\n", VAR_1->offset);
  FUNC_1("free %#08x + dirty %#08x + used %#08x + wasted %#08x + unchecked %#08x != total %#08x.\n",
   VAR_1->free_size, VAR_1->dirty_size, VAR_1->used_size,
   VAR_1->wasted_size, VAR_1->unchecked_size, VAR_0->sector_size);
  FUNC_0();
 }

 if (FUNC_2(VAR_0->used_size + VAR_0->dirty_size + VAR_0->free_size + VAR_0->erasing_size + VAR_0->bad_size
    + VAR_0->wasted_size + VAR_0->unchecked_size != VAR_0->flash_size)) {
  FUNC_1("eeep, space accounting superblock info is screwed.\n");
  FUNC_1("free %#08x + dirty %#08x + used %#08x + erasing %#08x + bad %#08x + wasted %#08x + unchecked %#08x != total %#08x.\n",
   VAR_0->free_size, VAR_0->dirty_size, VAR_0->used_size, VAR_0->erasing_size, VAR_0->bad_size,
   VAR_0->wasted_size, VAR_0->unchecked_size, VAR_0->flash_size);
  FUNC_0();
 }
}
