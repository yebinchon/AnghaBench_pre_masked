
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct jffs2_sb_info {int nr_erasing_blocks; int nr_free_blocks; int free_list; int erase_pending_list; int erasable_list; int dirty_list; int very_dirty_list; int clean_list; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;

void FUNC_2(struct jffs2_sb_info *VAR_1)
{
 uint32_t VAR_2;
 uint32_t VAR_3;

 VAR_2 = FUNC_0(&VAR_1->clean_list);
 if (VAR_2) {
  VAR_3 = VAR_0 % VAR_2;
  FUNC_1((&VAR_1->clean_list), VAR_3);
 }

 VAR_2 = FUNC_0(&VAR_1->very_dirty_list);
 if (VAR_2) {
  VAR_3 = VAR_0 % VAR_2;
  FUNC_1((&VAR_1->very_dirty_list), VAR_3);
 }

 VAR_2 = FUNC_0(&VAR_1->dirty_list);
 if (VAR_2) {
  VAR_3 = VAR_0 % VAR_2;
  FUNC_1((&VAR_1->dirty_list), VAR_3);
 }

 VAR_2 = FUNC_0(&VAR_1->erasable_list);
 if (VAR_2) {
  VAR_3 = VAR_0 % VAR_2;
  FUNC_1((&VAR_1->erasable_list), VAR_3);
 }

 if (VAR_1->nr_erasing_blocks) {
  VAR_3 = VAR_0 % VAR_1->nr_erasing_blocks;
  FUNC_1((&VAR_1->erase_pending_list), VAR_3);
 }

 if (VAR_1->nr_free_blocks) {
  VAR_3 = VAR_0 % VAR_1->nr_free_blocks;
  FUNC_1((&VAR_1->free_list), VAR_3);
 }
}
