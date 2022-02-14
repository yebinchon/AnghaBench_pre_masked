
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reiserfs_journal {int j_dirty_buffers_lock; } ;
struct page {TYPE_1__* mapping; } ;
struct inode {int i_sb; } ;
struct buffer_head {struct buffer_head* b_this_page; scalar_t__ b_private; } ;
typedef int gfp_t ;
struct TYPE_2__ {struct inode* host; } ;


 int FUNC_0 (struct page*) ;
 struct reiserfs_journal* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 struct buffer_head* FUNC_5 (struct page*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct page*) ;

__attribute__((used)) static int FUNC_10(struct page *VAR_0, gfp_t VAR_1)
{
 struct inode *VAR_2 = VAR_0->mapping->host;
 struct reiserfs_journal *VAR_3 = FUNC_1(VAR_2->i_sb);
 struct buffer_head *VAR_4;
 struct buffer_head *VAR_5;
 int VAR_6 = 1;

 FUNC_2(FUNC_0(VAR_0));
 FUNC_7(&VAR_3->j_dirty_buffers_lock);
 VAR_4 = FUNC_5(VAR_0);
 VAR_5 = VAR_4;
 do {
  if (VAR_5->b_private) {
   if (!FUNC_3(VAR_5) && !FUNC_4(VAR_5)) {
    FUNC_6(VAR_5);
   } else {
    VAR_6 = 0;
    break;
   }
  }
  VAR_5 = VAR_5->b_this_page;
 } while (VAR_5 != VAR_4);
 if (VAR_6)
  VAR_6 = FUNC_9(VAR_0);
 FUNC_8(&VAR_3->j_dirty_buffers_lock);
 return VAR_6;
}
