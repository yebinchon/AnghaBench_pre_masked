
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct reiserfs_journal {int j_dirty_buffers_lock; } ;
struct inode {int i_sb; } ;
struct buffer_head {int * b_bdev; int b_assoc_buffers; TYPE_2__* b_page; scalar_t__ b_private; } ;
struct TYPE_4__ {TYPE_1__* mapping; } ;
struct TYPE_3__ {struct inode* host; } ;


 int FUNC_0 () ;
 struct reiserfs_journal* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct buffer_head*) ;
 int FUNC_11 (struct buffer_head*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct buffer_head*) ;

void FUNC_15(struct buffer_head *VAR_0)
{
 FUNC_10(VAR_0);
 if (FUNC_3(VAR_0) || FUNC_2(VAR_0)) {
  FUNC_0();
 }
 FUNC_4(VAR_0);





 if ((!FUNC_9(&VAR_0->b_assoc_buffers) || VAR_0->b_private) && VAR_0->b_page) {
  struct inode *VAR_1 = VAR_0->b_page->mapping->host;
  struct reiserfs_journal *VAR_2 = FUNC_1(VAR_1->i_sb);
  FUNC_12(&VAR_2->j_dirty_buffers_lock);
  FUNC_8(&VAR_0->b_assoc_buffers);
  FUNC_11(VAR_0);
  FUNC_13(&VAR_2->j_dirty_buffers_lock);
 }
 FUNC_5(VAR_0);
 FUNC_7(VAR_0);
 FUNC_6(VAR_0);
 VAR_0->b_bdev = ((void*)0);
 FUNC_14(VAR_0);
}
