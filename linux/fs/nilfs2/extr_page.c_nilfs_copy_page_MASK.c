
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct buffer_head {unsigned long b_state; struct buffer_head* b_this_page; int b_bdev; int b_blocknr; int b_size; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*,struct page*) ;
 int FUNC_10 (struct page*,int ,int ) ;
 int FUNC_11 (struct buffer_head*) ;
 struct buffer_head* FUNC_12 (struct page*) ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (struct buffer_head*) ;

__attribute__((used)) static void FUNC_15(struct page *VAR_2, struct page *VAR_3, int VAR_4)
{
 struct buffer_head *VAR_5, *VAR_6, *VAR_7, *VAR_8;
 unsigned long VAR_9 = VAR_1;

 FUNC_1(FUNC_6(VAR_2));

 VAR_7 = VAR_8 = FUNC_12(VAR_3);
 if (!FUNC_13(VAR_2))
  FUNC_10(VAR_2, VAR_7->b_size, 0);

 if (VAR_4)
  VAR_9 |= FUNC_0(VAR_0);

 VAR_5 = VAR_6 = FUNC_12(VAR_2);
 do {
  FUNC_11(VAR_7);
  FUNC_11(VAR_5);
  VAR_5->b_state = VAR_7->b_state & VAR_9;
  VAR_5->b_blocknr = VAR_7->b_blocknr;
  VAR_5->b_bdev = VAR_7->b_bdev;
  VAR_7 = VAR_7->b_this_page;
  VAR_5 = VAR_5->b_this_page;
 } while (VAR_5 != VAR_6);

 FUNC_9(VAR_2, VAR_3);

 if (FUNC_5(VAR_3) && !FUNC_5(VAR_2))
  FUNC_8(VAR_2);
 else if (!FUNC_5(VAR_3) && FUNC_5(VAR_2))
  FUNC_3(VAR_2);
 if (FUNC_4(VAR_3) && !FUNC_4(VAR_2))
  FUNC_7(VAR_2);
 else if (!FUNC_4(VAR_3) && FUNC_4(VAR_2))
  FUNC_2(VAR_2);

 do {
  FUNC_14(VAR_7);
  FUNC_14(VAR_5);
  VAR_7 = VAR_7->b_this_page;
  VAR_5 = VAR_5->b_this_page;
 } while (VAR_5 != VAR_6);
}
