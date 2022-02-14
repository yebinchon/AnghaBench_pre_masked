
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct jffs2_sb_info {size_t sector_size; struct jffs2_eraseblock* blocks; } ;
struct jffs2_raw_node_ref {size_t flash_offset; } ;
struct jffs2_eraseblock {scalar_t__ free_size; scalar_t__ offset; struct jffs2_raw_node_ref* last_node; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*,struct jffs2_raw_node_ref*,scalar_t__,struct jffs2_raw_node_ref*,scalar_t__) ;
 struct jffs2_raw_node_ref* FUNC_2 (struct jffs2_raw_node_ref*) ;
 scalar_t__ FUNC_3 (struct jffs2_raw_node_ref*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static inline uint32_t FUNC_5(struct jffs2_sb_info *VAR_0,
        struct jffs2_eraseblock *VAR_1,
        struct jffs2_raw_node_ref *VAR_2)
{
 uint32_t VAR_3;
 struct jffs2_raw_node_ref *VAR_4 = FUNC_2(VAR_2);

 if (VAR_4)
  VAR_3 = FUNC_3(VAR_4);
 else {
  if (!VAR_1)
   VAR_1 = &VAR_0->blocks[VAR_2->flash_offset / VAR_0->sector_size];


  if (FUNC_4(VAR_2 != VAR_1->last_node)) {
   FUNC_1("ref %p @0x%08x is not jeb->last_node (%p @0x%08x)\n",
    VAR_2, FUNC_3(VAR_2), VAR_1->last_node,
    VAR_1->last_node ?
    FUNC_3(VAR_1->last_node) : 0);
   FUNC_0();
  }
  VAR_3 = VAR_1->offset + VAR_0->sector_size - VAR_1->free_size;
 }
 return VAR_3 - FUNC_3(VAR_2);
}
