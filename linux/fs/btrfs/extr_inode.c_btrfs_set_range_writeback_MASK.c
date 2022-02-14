
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct page {int dummy; } ;
struct inode {int i_mapping; } ;
struct extent_io_tree {struct inode* private_data; } ;


 int FUNC_0 (struct page*) ;
 unsigned long VAR_0 ;
 struct page* FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;

void FUNC_4(struct extent_io_tree *VAR_1, u64 VAR_2, u64 VAR_3)
{
 struct inode *VAR_4 = VAR_1->private_data;
 unsigned long VAR_5 = VAR_2 >> VAR_0;
 unsigned long VAR_6 = VAR_3 >> VAR_0;
 struct page *VAR_7;

 while (VAR_5 <= VAR_6) {
  VAR_7 = FUNC_1(VAR_4->i_mapping, VAR_5);
  FUNC_0(VAR_7);
  FUNC_3(VAR_7);
  FUNC_2(VAR_7);
  VAR_5++;
 }
}
