
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
struct page {int index; struct address_space* mapping; } ;
struct inode {struct address_space* i_mapping; } ;
struct file {int dummy; } ;
struct buffer_head {int dummy; } ;
struct address_space {int dummy; } ;
typedef int pgoff_t ;
typedef int loff_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (struct page*) ;
 int VAR_5 ;
 int VAR_6 ;
 struct inode* FUNC_2 (struct file*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct address_space*,int,unsigned int,int ,struct page**,void**,struct buffer_head*,struct page*) ;
 int FUNC_6 (struct address_space*,int,unsigned int,unsigned int,void*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static vm_fault_t FUNC_9(struct file *VAR_7,
   struct buffer_head *VAR_8, struct page *VAR_9)
{
 int VAR_10;
 vm_fault_t VAR_11 = VAR_6;
 struct inode *VAR_12 = FUNC_2(VAR_7);
 struct address_space *VAR_13 = VAR_12->i_mapping;
 loff_t VAR_14 = FUNC_7(VAR_9);
 unsigned int VAR_15 = VAR_4;
 pgoff_t VAR_16;
 struct page *VAR_17 = ((void*)0);
 void *VAR_18;
 loff_t VAR_19 = FUNC_3(VAR_12);

 VAR_16 = (VAR_19 - 1) >> VAR_3;
 if ((VAR_9->mapping != VAR_12->i_mapping) ||
     (!FUNC_1(VAR_9)) ||
     (FUNC_7(VAR_9) >= VAR_19))
  goto out;
 if (VAR_9->index == VAR_16)
  VAR_15 = ((VAR_19 - 1) & ~VAR_2) + 1;

 VAR_10 = FUNC_5(VAR_13, VAR_14, VAR_15, VAR_1,
           &VAR_17, &VAR_18, VAR_8, VAR_9);
 if (VAR_10) {
  if (VAR_10 != -VAR_0)
   FUNC_4(VAR_10);
  VAR_11 = FUNC_8(VAR_10);
  goto out;
 }

 if (!VAR_17) {
  VAR_11 = VAR_6;
  goto out;
 }
 VAR_10 = FUNC_6(VAR_13, VAR_14, VAR_15, VAR_15, VAR_18);
 FUNC_0(VAR_10 != VAR_15);
 VAR_11 = VAR_5;
out:
 return VAR_11;
}
