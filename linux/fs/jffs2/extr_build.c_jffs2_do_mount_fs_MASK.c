
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct jffs2_sb_info {int free_size; int flash_size; int nr_blocks; int sector_size; int highest_ino; TYPE_1__* blocks; int * summary; int bad_used_list; int bad_list; int free_list; int erase_complete_list; int erasable_pending_wbuf_list; int erase_pending_list; int erase_checking_list; int erasing_list; int erasable_list; int dirty_list; int very_dirty_list; int clean_list; } ;
struct jffs2_eraseblock {int dummy; } ;
struct TYPE_4__ {int offset; int free_size; int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct jffs2_sb_info*) ;
 scalar_t__ FUNC_3 (struct jffs2_sb_info*) ;
 int FUNC_4 (struct jffs2_sb_info*) ;
 int FUNC_5 (struct jffs2_sb_info*) ;
 int FUNC_6 (struct jffs2_sb_info*) ;
 int FUNC_7 (struct jffs2_sb_info*) ;
 int FUNC_8 (TYPE_1__*) ;
 TYPE_1__* FUNC_9 (int,int ) ;
 TYPE_1__* FUNC_10 (int) ;

int FUNC_11(struct jffs2_sb_info *VAR_3)
{
 int VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_3->free_size = VAR_3->flash_size;
 VAR_3->nr_blocks = VAR_3->flash_size / VAR_3->sector_size;
 VAR_6 = sizeof(struct jffs2_eraseblock) * VAR_3->nr_blocks;

 if (FUNC_2(VAR_3))
  VAR_3->blocks = FUNC_10(VAR_6);
 else

  VAR_3->blocks = FUNC_9(VAR_6, VAR_2);
 if (!VAR_3->blocks)
  return -VAR_1;

 for (VAR_5=0; VAR_5<VAR_3->nr_blocks; VAR_5++) {
  FUNC_0(&VAR_3->blocks[VAR_5].list);
  VAR_3->blocks[VAR_5].offset = VAR_5 * VAR_3->sector_size;
  VAR_3->blocks[VAR_5].free_size = VAR_3->sector_size;
 }

 FUNC_0(&VAR_3->clean_list);
 FUNC_0(&VAR_3->very_dirty_list);
 FUNC_0(&VAR_3->dirty_list);
 FUNC_0(&VAR_3->erasable_list);
 FUNC_0(&VAR_3->erasing_list);
 FUNC_0(&VAR_3->erase_checking_list);
 FUNC_0(&VAR_3->erase_pending_list);
 FUNC_0(&VAR_3->erasable_pending_wbuf_list);
 FUNC_0(&VAR_3->erase_complete_list);
 FUNC_0(&VAR_3->free_list);
 FUNC_0(&VAR_3->bad_list);
 FUNC_0(&VAR_3->bad_used_list);
 VAR_3->highest_ino = 1;
 VAR_3->summary = ((void*)0);

 VAR_4 = FUNC_7(VAR_3);
 if (VAR_4)
  goto out_free;

 if (FUNC_3(VAR_3)) {
  FUNC_1("build_fs failed\n");
  FUNC_5(VAR_3);
  FUNC_6(VAR_3);
  VAR_4 = -VAR_0;
  goto out_free;
 }

 FUNC_4(VAR_3);

 return 0;

 out_free:
 FUNC_8(VAR_3->blocks);

 return VAR_4;
}
