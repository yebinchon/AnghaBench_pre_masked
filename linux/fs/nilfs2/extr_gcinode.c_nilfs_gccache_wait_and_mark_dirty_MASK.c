
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_ino; int i_sb; } ;
struct buffer_head {scalar_t__ b_blocknr; TYPE_2__* b_page; } ;
struct TYPE_4__ {TYPE_1__* mapping; } ;
struct TYPE_3__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct buffer_head*) ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 scalar_t__ FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (int ,int ,char*,char*,int ,unsigned long long) ;
 int FUNC_7 (struct buffer_head*) ;

int FUNC_8(struct buffer_head *VAR_3)
{
 FUNC_7(VAR_3);
 if (!FUNC_2(VAR_3)) {
  struct inode *VAR_4 = VAR_3->b_page->mapping->host;

  FUNC_6(VAR_4->i_sb, VAR_2,
     "I/O error reading %s block for GC (ino=%lu, vblocknr=%llu)",
     FUNC_1(VAR_3) ? "node" : "data",
     VAR_4->i_ino, (unsigned long long)VAR_3->b_blocknr);
  return -VAR_1;
 }
 if (FUNC_0(VAR_3))
  return -VAR_0;

 if (FUNC_1(VAR_3) && FUNC_5(VAR_3)) {
  FUNC_3(VAR_3);
  return -VAR_1;
 }
 FUNC_4(VAR_3);
 return 0;
}
