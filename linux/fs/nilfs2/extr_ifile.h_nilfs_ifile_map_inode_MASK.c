
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_inode {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int b_page; } ;
typedef int ino_t ;


 void* FUNC_0 (int ) ;
 struct nilfs_inode* FUNC_1 (struct inode*,int ,struct buffer_head*,void*) ;

__attribute__((used)) static inline struct nilfs_inode *
FUNC_2(struct inode *VAR_0, ino_t VAR_1, struct buffer_head *VAR_2)
{
 void *VAR_3 = FUNC_0(VAR_2->b_page);

 return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
}
