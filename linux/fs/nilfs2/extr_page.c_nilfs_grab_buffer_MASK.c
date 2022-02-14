
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int i_blkbits; } ;
struct buffer_head {int dummy; } ;
struct address_space {int dummy; } ;
typedef unsigned long pgoff_t ;


 int VAR_0 ;
 struct buffer_head* FUNC_0 (struct page*,unsigned long,unsigned long,int,unsigned long) ;
 struct page* FUNC_1 (struct address_space*,unsigned long) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct page*) ;

struct buffer_head *FUNC_5(struct inode *VAR_1,
          struct address_space *VAR_2,
          unsigned long VAR_3,
          unsigned long VAR_4)
{
 int VAR_5 = VAR_1->i_blkbits;
 pgoff_t VAR_6 = VAR_3 >> (VAR_0 - VAR_5);
 struct page *VAR_7;
 struct buffer_head *VAR_8;

 VAR_7 = FUNC_1(VAR_2, VAR_6);
 if (FUNC_3(!VAR_7))
  return ((void*)0);

 VAR_8 = FUNC_0(VAR_7, VAR_3, VAR_6, VAR_5, VAR_4);
 if (FUNC_3(!VAR_8)) {
  FUNC_4(VAR_7);
  FUNC_2(VAR_7);
  return ((void*)0);
 }
 return VAR_8;
}
