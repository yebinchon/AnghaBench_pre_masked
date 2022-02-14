
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {scalar_t__ dc_task; struct inode* root_inode; } ;
struct ocfs2_inode_info {int ip_flags; int ip_lock; scalar_t__ ip_blkno; } ;
struct inode {int i_sb; } ;


 int VAR_0 ;
 struct ocfs2_inode_info* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 struct ocfs2_super* FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__,scalar_t__,unsigned long long,int) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_3)
{
 int VAR_4 = 0;
 struct ocfs2_inode_info *VAR_5 = FUNC_0(VAR_3);
 struct ocfs2_super *VAR_6 = FUNC_1(VAR_3->i_sb);

 FUNC_5(VAR_2, VAR_6->dc_task,
          (unsigned long long)VAR_5->ip_blkno,
          VAR_5->ip_flags);



 if (VAR_3 == VAR_6->root_inode) {
  FUNC_2(VAR_0, "Skipping delete of root inode.\n");
  goto bail;
 }
 if (VAR_2 == VAR_6->dc_task)
  goto bail;

 FUNC_3(&VAR_5->ip_lock);



 if (VAR_5->ip_flags & VAR_1) {
  FUNC_2(VAR_0, "Skipping delete of system file %llu\n",
       (unsigned long long)VAR_5->ip_blkno);
  goto bail_unlock;
 }

 VAR_4 = 1;
bail_unlock:
 FUNC_4(&VAR_5->ip_lock);
bail:
 return VAR_4;
}
