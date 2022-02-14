
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_inode_info {int ip_flags; scalar_t__ ip_blkno; } ;
struct inode {int i_state; int i_lock; int i_nlink; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ocfs2_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (unsigned long long,int ,int ) ;
 int FUNC_6 (struct inode*,int) ;

int FUNC_7(struct inode *VAR_2)
{
 struct ocfs2_inode_info *VAR_3 = FUNC_0(VAR_2);

 FUNC_5((unsigned long long)VAR_3->ip_blkno,
    VAR_2->i_nlink, VAR_3->ip_flags);

 FUNC_2(&VAR_2->i_lock);
 VAR_2->i_state |= VAR_1;
 FUNC_4(&VAR_2->i_lock);
 FUNC_6(VAR_2, 1);
 FUNC_3(&VAR_2->i_lock);
 FUNC_1(VAR_2->i_state & VAR_0);
 VAR_2->i_state &= ~VAR_1;

 return 1;
}
