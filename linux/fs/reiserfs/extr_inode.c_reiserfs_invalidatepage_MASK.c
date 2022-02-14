
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct inode {int dummy; } ;
struct buffer_head {unsigned int b_size; struct buffer_head* b_this_page; } ;
struct TYPE_2__ {struct inode* host; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 unsigned int VAR_0 ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct inode*,struct buffer_head*) ;
 struct buffer_head* FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct page*,int ) ;

__attribute__((used)) static void FUNC_8(struct page *VAR_1, unsigned int VAR_2,
        unsigned int VAR_3)
{
 struct buffer_head *VAR_4, *VAR_5, *VAR_6;
 struct inode *VAR_7 = VAR_1->mapping->host;
 unsigned int VAR_8 = 0;
 unsigned int VAR_9 = VAR_2 + VAR_3;
 int VAR_10 = (VAR_2 || VAR_3 < VAR_0);
 int VAR_11 = 1;

 FUNC_0(!FUNC_2(VAR_1));

 if (!VAR_10)
  FUNC_1(VAR_1);

 if (!FUNC_5(VAR_1))
  goto out;

 VAR_4 = FUNC_4(VAR_1);
 VAR_5 = VAR_4;
 do {
  unsigned int VAR_12 = VAR_8 + VAR_5->b_size;
  VAR_6 = VAR_5->b_this_page;

  if (VAR_12 > VAR_9)
   goto out;




  if (VAR_2 <= VAR_8) {
   if (FUNC_3(VAR_7, VAR_5))
    FUNC_6(VAR_5);
   else
    VAR_11 = 0;
  }
  VAR_8 = VAR_12;
  VAR_5 = VAR_6;
 } while (VAR_5 != VAR_4);






 if (!VAR_10 && VAR_11) {
  VAR_11 = FUNC_7(VAR_1, 0);

 }
out:
 return;
}
