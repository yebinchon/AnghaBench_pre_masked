
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int i_blkbits; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct page*,int,unsigned int) ;
 struct buffer_head* FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;

__attribute__((used)) static struct buffer_head *FUNC_6(struct page *VAR_0, struct inode *VAR_1, unsigned int VAR_2)
{
 FUNC_0(!FUNC_1(VAR_0));

 if (!FUNC_5(VAR_0))
  FUNC_3(VAR_0, 1 << FUNC_2(VAR_1->i_blkbits),
         VAR_2);
 return FUNC_4(VAR_0);
}
