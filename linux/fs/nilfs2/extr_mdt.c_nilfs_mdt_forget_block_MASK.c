
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {unsigned long i_blkbits; int i_mapping; } ;
struct buffer_head {int dummy; } ;
typedef unsigned long pgoff_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int ,unsigned long) ;
 scalar_t__ FUNC_2 (int ,unsigned long,unsigned long) ;
 int FUNC_3 (struct buffer_head*) ;
 struct buffer_head* FUNC_4 (struct page*,unsigned long) ;
 scalar_t__ FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;

int FUNC_9(struct inode *VAR_3, unsigned long VAR_4)
{
 pgoff_t VAR_5 = (pgoff_t)VAR_4 >>
  (VAR_2 - VAR_3->i_blkbits);
 struct page *VAR_6;
 unsigned long VAR_7;
 int VAR_8 = 0;
 int VAR_9;

 VAR_6 = FUNC_1(VAR_3->i_mapping, VAR_5);
 if (!VAR_6)
  return -VAR_1;

 FUNC_8(VAR_6);

 VAR_7 = (unsigned long)VAR_5 <<
  (VAR_2 - VAR_3->i_blkbits);
 if (FUNC_5(VAR_6)) {
  struct buffer_head *VAR_10;

  VAR_10 = FUNC_4(VAR_6, VAR_4 - VAR_7);
  FUNC_3(VAR_10);
 }
 VAR_9 = FUNC_0(VAR_6);
 FUNC_7(VAR_6);
 FUNC_6(VAR_6);

 if (VAR_9 ||
     FUNC_2(VAR_3->i_mapping, VAR_5, VAR_5) != 0)
  VAR_8 = -VAR_0;
 return VAR_8;
}
