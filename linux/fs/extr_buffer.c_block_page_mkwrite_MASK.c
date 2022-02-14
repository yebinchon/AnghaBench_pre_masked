
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_fault {struct page* page; } ;
struct vm_area_struct {int vm_file; } ;
struct page {scalar_t__ mapping; int index; } ;
struct inode {scalar_t__ i_mapping; } ;
typedef int loff_t ;
typedef int get_block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (struct page*,int ,unsigned long,int ) ;
 int FUNC_1 (struct page*,int ,unsigned long) ;
 struct inode* FUNC_2 (int ) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;

int FUNC_10(struct vm_area_struct *VAR_4, struct vm_fault *VAR_5,
    get_block_t VAR_6)
{
 struct page *VAR_7 = VAR_5->page;
 struct inode *VAR_8 = FUNC_2(VAR_4->vm_file);
 unsigned long VAR_9;
 loff_t VAR_10;
 int VAR_11;

 FUNC_4(VAR_7);
 VAR_10 = FUNC_3(VAR_8);
 if ((VAR_7->mapping != VAR_8->i_mapping) ||
     (FUNC_5(VAR_7) > VAR_10)) {

  VAR_11 = -VAR_0;
  goto out_unlock;
 }


 if (((VAR_7->index + 1) << VAR_2) > VAR_10)
  VAR_9 = VAR_10 & ~VAR_1;
 else
  VAR_9 = VAR_3;

 VAR_11 = FUNC_0(VAR_7, 0, VAR_9, VAR_6);
 if (!VAR_11)
  VAR_11 = FUNC_1(VAR_7, 0, VAR_9);

 if (FUNC_7(VAR_11 < 0))
  goto out_unlock;
 FUNC_6(VAR_7);
 FUNC_9(VAR_7);
 return 0;
out_unlock:
 FUNC_8(VAR_7);
 return VAR_11;
}
