
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nilfs_inode_info {int i_state; TYPE_1__* i_root; } ;
struct nilfs_inode {int dummy; } ;
struct inode {int i_ino; } ;
struct buffer_head {int dummy; } ;
typedef int ino_t ;
struct TYPE_4__ {int mi_entry_size; } ;
struct TYPE_3__ {struct inode* ifile; } ;


 int VAR_0 ;
 struct nilfs_inode_info* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct nilfs_inode*,int ,int ) ;
 struct nilfs_inode* FUNC_3 (struct inode*,int ,struct buffer_head*) ;
 int FUNC_4 (struct inode*,int ,struct buffer_head*) ;
 int FUNC_5 (struct inode*,struct nilfs_inode*,int ) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;

void FUNC_8(struct inode *VAR_3, struct buffer_head *VAR_4, int VAR_5)
{
 ino_t VAR_6 = VAR_3->i_ino;
 struct nilfs_inode_info *VAR_7 = FUNC_0(VAR_3);
 struct inode *VAR_8 = VAR_7->i_root->ifile;
 struct nilfs_inode *VAR_9;

 VAR_9 = FUNC_3(VAR_8, VAR_6, VAR_4);

 if (FUNC_7(VAR_2, &VAR_7->i_state))
  FUNC_2(VAR_9, 0, FUNC_1(VAR_8)->mi_entry_size);
 if (VAR_5 & VAR_0)
  FUNC_6(VAR_1, &VAR_7->i_state);

 FUNC_5(VAR_3, VAR_9, 0);






 FUNC_4(VAR_8, VAR_6, VAR_4);
}
