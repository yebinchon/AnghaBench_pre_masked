
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocfs2_lock_res {int l_flags; int l_name; } ;
struct ocfs2_inode_info {int ip_blkno; } ;
struct ocfs2_file_private {TYPE_2__* fp_file; } ;
struct inode {int i_sb; int i_generation; } ;
struct TYPE_4__ {TYPE_1__* f_mapping; } ;
struct TYPE_3__ {struct inode* host; } ;


 struct ocfs2_inode_info* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,struct ocfs2_lock_res*,int ,int *,struct ocfs2_file_private*) ;
 int FUNC_4 (struct ocfs2_lock_res*) ;

void FUNC_5(struct ocfs2_lock_res *VAR_3,
         struct ocfs2_file_private *VAR_4)
{
 struct inode *VAR_5 = VAR_4->fp_file->f_mapping->host;
 struct ocfs2_inode_info *VAR_6 = FUNC_0(VAR_5);

 FUNC_4(VAR_3);
 FUNC_2(VAR_1, VAR_6->ip_blkno,
         VAR_5->i_generation, VAR_3->l_name);
 FUNC_3(FUNC_1(VAR_5->i_sb), VAR_3,
       VAR_1, &VAR_2,
       VAR_4);
 VAR_3->l_flags |= VAR_0;
}
