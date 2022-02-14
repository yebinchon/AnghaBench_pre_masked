
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct jffs2_sb_info {int erase_wait; int erase_free_sem; int erase_completion_lock; int nr_erasing_blocks; int bad_list; scalar_t__ sector_size; int bad_size; int erasing_size; int dirty_size; int erase_pending_list; } ;
struct jffs2_eraseblock {int list; scalar_t__ dirty_size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct jffs2_sb_info*) ;
 int FUNC_1 (struct jffs2_sb_info*,struct jffs2_eraseblock*,scalar_t__) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct jffs2_sb_info *VAR_1, struct jffs2_eraseblock *VAR_2, uint32_t VAR_3)
{


 if (FUNC_0(VAR_1) && (VAR_3 != (uint32_t)VAR_0)) {


  if (!FUNC_1(VAR_1, VAR_2, VAR_3)) {

   FUNC_3(&VAR_1->erase_free_sem);
   FUNC_5(&VAR_1->erase_completion_lock);
   FUNC_2(&VAR_2->list, &VAR_1->erase_pending_list);
   VAR_1->erasing_size -= VAR_1->sector_size;
   VAR_1->dirty_size += VAR_1->sector_size;
   VAR_2->dirty_size = VAR_1->sector_size;
   FUNC_6(&VAR_1->erase_completion_lock);
   FUNC_4(&VAR_1->erase_free_sem);
   return;
  }
 }

 FUNC_3(&VAR_1->erase_free_sem);
 FUNC_5(&VAR_1->erase_completion_lock);
 VAR_1->erasing_size -= VAR_1->sector_size;
 VAR_1->bad_size += VAR_1->sector_size;
 FUNC_2(&VAR_2->list, &VAR_1->bad_list);
 VAR_1->nr_erasing_blocks--;
 FUNC_6(&VAR_1->erase_completion_lock);
 FUNC_4(&VAR_1->erase_free_sem);
 FUNC_7(&VAR_1->erase_wait);
}
