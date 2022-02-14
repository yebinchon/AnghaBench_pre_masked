
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {unsigned int b_size; struct buffer_head* b_this_page; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 struct buffer_head* FUNC_4 (struct page*) ;
 int FUNC_5 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_0, struct page *VAR_1,
  unsigned VAR_2, unsigned VAR_3)
{
 unsigned VAR_4, VAR_5;
 int VAR_6 = 0;
 unsigned VAR_7;
 struct buffer_head *VAR_8, *VAR_9;

 VAR_8 = VAR_9 = FUNC_4(VAR_1);
 VAR_7 = VAR_8->b_size;

 VAR_4 = 0;
 do {
  VAR_5 = VAR_4 + VAR_7;
  if (VAR_5 <= VAR_2 || VAR_4 >= VAR_3) {
   if (!FUNC_1(VAR_8))
    VAR_6 = 1;
  } else {
   FUNC_5(VAR_8);
   FUNC_3(VAR_8);
  }
  FUNC_2(VAR_8);

  VAR_4 = VAR_5;
  VAR_8 = VAR_8->b_this_page;
 } while (VAR_8 != VAR_9);







 if (!VAR_6)
  FUNC_0(VAR_1);
 return 0;
}
