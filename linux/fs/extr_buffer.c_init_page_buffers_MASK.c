
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct buffer_head {struct buffer_head* b_this_page; scalar_t__ b_blocknr; struct block_device* b_bdev; int * b_private; int * b_end_io; } ;
struct block_device {int bd_inode; } ;
typedef scalar_t__ sector_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (struct buffer_head*) ;
 struct buffer_head* FUNC_4 (struct page*) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;

__attribute__((used)) static sector_t
FUNC_7(struct page *VAR_0, struct block_device *VAR_1,
   sector_t VAR_2, int VAR_3)
{
 struct buffer_head *VAR_4 = FUNC_4(VAR_0);
 struct buffer_head *VAR_5 = VAR_4;
 int VAR_6 = FUNC_1(VAR_0);
 sector_t VAR_7 = FUNC_2(FUNC_0(VAR_1->bd_inode), VAR_3);

 do {
  if (!FUNC_3(VAR_5)) {
   VAR_5->b_end_io = ((void*)0);
   VAR_5->b_private = ((void*)0);
   VAR_5->b_bdev = VAR_1;
   VAR_5->b_blocknr = VAR_2;
   if (VAR_6)
    FUNC_6(VAR_5);
   if (VAR_2 < VAR_7)
    FUNC_5(VAR_5);
  }
  VAR_2++;
  VAR_5 = VAR_5->b_this_page;
 } while (VAR_5 != VAR_4);




 return VAR_7;
}
