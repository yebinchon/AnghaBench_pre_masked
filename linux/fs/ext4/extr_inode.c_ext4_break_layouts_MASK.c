
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int _refcount; } ;
struct inode {int i_mapping; } ;
struct ext4_inode_info {int i_mmap_sem; } ;


 int VAR_0 ;
 struct ext4_inode_info* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int,int ,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 struct page* FUNC_4 (int ) ;
 int FUNC_5 (struct ext4_inode_info*) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct inode *VAR_2)
{
 struct ext4_inode_info *VAR_3 = FUNC_0(VAR_2);
 struct page *VAR_4;
 int VAR_5;

 if (FUNC_1(!FUNC_6(&VAR_3->i_mmap_sem)))
  return -VAR_0;

 do {
  VAR_4 = FUNC_4(VAR_2->i_mapping);
  if (!VAR_4)
   return 0;

  VAR_5 = FUNC_2(&VAR_4->_refcount,
    FUNC_3(&VAR_4->_refcount) == 1,
    VAR_1, 0, 0,
    FUNC_5(VAR_3));
 } while (VAR_5 == 0);

 return VAR_5;
}
