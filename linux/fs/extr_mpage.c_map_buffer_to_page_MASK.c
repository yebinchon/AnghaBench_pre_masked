
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct inode {scalar_t__ i_blkbits; } ;
struct buffer_head {struct buffer_head* b_this_page; int b_blocknr; int b_bdev; int b_state; } ;
struct TYPE_2__ {struct inode* host; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct page*,int ,int ) ;
 int FUNC_3 (struct inode*) ;
 struct buffer_head* FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;

__attribute__((used)) static void
FUNC_6(struct page *VAR_1, struct buffer_head *VAR_2, int VAR_3)
{
 struct inode *VAR_4 = VAR_1->mapping->host;
 struct buffer_head *VAR_5, *VAR_6;
 int VAR_7 = 0;

 if (!FUNC_5(VAR_1)) {




  if (VAR_4->i_blkbits == VAR_0 &&
      FUNC_1(VAR_2)) {
   FUNC_0(VAR_1);
   return;
  }
  FUNC_2(VAR_1, FUNC_3(VAR_4), 0);
 }
 VAR_6 = FUNC_4(VAR_1);
 VAR_5 = VAR_6;
 do {
  if (VAR_7 == VAR_3) {
   VAR_5->b_state = VAR_2->b_state;
   VAR_5->b_bdev = VAR_2->b_bdev;
   VAR_5->b_blocknr = VAR_2->b_blocknr;
   break;
  }
  VAR_5 = VAR_5->b_this_page;
  VAR_7++;
 } while (VAR_5 != VAR_6);
}
