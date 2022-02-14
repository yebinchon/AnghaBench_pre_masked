
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct qnx6_sb_info {int dummy; } ;
struct qnx6_root_node {int levels; int ptr; int size; } ;
struct qnx6_inode_info {int di_filelevels; int di_block_ptr; } ;
struct inode {int i_mode; TYPE_1__* i_mapping; int i_size; } ;
struct TYPE_2__ {int * a_ops; } ;


 struct qnx6_inode_info* FUNC_0 (struct inode*) ;
 struct qnx6_sb_info* FUNC_1 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct qnx6_sb_info*,int ) ;
 int FUNC_3 (int ,int ,int) ;
 struct inode* FUNC_4 (struct super_block*) ;
 int VAR_2 ;

__attribute__((used)) static struct inode *FUNC_5(struct super_block *VAR_3,
     struct qnx6_root_node *VAR_4)
{
 struct inode *VAR_5 = FUNC_4(VAR_3);
 if (VAR_5) {
  struct qnx6_inode_info *VAR_6 = FUNC_0(VAR_5);
  struct qnx6_sb_info *VAR_7 = FUNC_1(VAR_3);
  VAR_5->i_size = FUNC_2(VAR_7, VAR_4->size);
  FUNC_3(VAR_6->di_block_ptr, VAR_4->ptr, sizeof(VAR_4->ptr));
  VAR_6->di_filelevels = VAR_4->levels;
  VAR_5->i_mode = VAR_0 | VAR_1;
  VAR_5->i_mapping->a_ops = &VAR_2;
 }
 return VAR_5;
}
