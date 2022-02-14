
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct inode {unsigned long i_blkbits; } ;
struct buffer_head {struct buffer_head* b_this_page; } ;
struct TYPE_2__ {struct inode* host; } ;


 scalar_t__ FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 struct buffer_head* FUNC_3 (struct page*) ;

__attribute__((used)) static int FUNC_4(struct page *VAR_0,
         unsigned long VAR_1)
{
 struct buffer_head *VAR_2;
 struct inode *VAR_3 = VAR_0->mapping->host;
 unsigned int VAR_4;
 int VAR_5;

 VAR_2 = FUNC_3(VAR_0);
 VAR_4 = VAR_1 >> VAR_3->i_blkbits;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  VAR_2 = VAR_2->b_this_page;

 if (!FUNC_1(VAR_2) || (FUNC_0(VAR_2)) || FUNC_2(VAR_2))
  return 0;
 return 1;
}
