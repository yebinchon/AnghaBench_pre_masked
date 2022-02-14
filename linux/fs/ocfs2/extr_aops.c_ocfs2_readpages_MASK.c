
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {scalar_t__ index; } ;
struct ocfs2_inode_info {int ip_dyn_features; int ip_alloc_sem; } ;
struct list_head {int dummy; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef int loff_t ;


 int VAR_0 ;
 struct ocfs2_inode_info* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct inode*) ;
 struct page* FUNC_3 (struct list_head*) ;
 int FUNC_4 (struct address_space*,struct list_head*,unsigned int,int ) ;
 int VAR_4 ;
 int FUNC_5 (struct inode*,int *,int ,int ) ;
 int FUNC_6 (struct inode*,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_5, struct address_space *VAR_6,
      struct list_head *VAR_7, unsigned VAR_8)
{
 int VAR_9, VAR_10 = -VAR_0;
 struct inode *VAR_11 = VAR_6->host;
 struct ocfs2_inode_info *VAR_12 = FUNC_0(VAR_11);
 loff_t VAR_13;
 struct page *VAR_14;





 VAR_9 = FUNC_5(VAR_11, ((void*)0), 0, VAR_2);
 if (VAR_9)
  return VAR_10;

 if (FUNC_1(&VAR_12->ip_alloc_sem) == 0) {
  FUNC_6(VAR_11, 0);
  return VAR_10;
 }





 if (VAR_12->ip_dyn_features & VAR_1)
  goto out_unlock;





 VAR_14 = FUNC_3(VAR_7);
 VAR_13 = (loff_t)VAR_14->index << VAR_3;
 if (VAR_13 >= FUNC_2(VAR_11))
  goto out_unlock;

 VAR_10 = FUNC_4(VAR_6, VAR_7, VAR_8, VAR_4);

out_unlock:
 FUNC_7(&VAR_12->ip_alloc_sem);
 FUNC_6(VAR_11, 0);

 return VAR_10;
}
