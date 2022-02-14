
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ocfs2_lock_res {int l_flags; int l_lock; } ;
struct ocfs2_inode_info {int ip_lock; int ip_flags; } ;
struct ocfs2_dentry_lock {int dl_count; TYPE_1__* dl_inode; int dl_parent_blkno; } ;
struct dentry {int dummy; } ;
struct TYPE_3__ {int i_mode; } ;


 int VAR_0 ;
 struct ocfs2_inode_info* FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct dentry*) ;
 int VAR_6 ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (int ,char*,int) ;
 struct dentry* FUNC_5 (TYPE_1__*,int ,int) ;
 struct ocfs2_dentry_lock* FUNC_6 (struct ocfs2_lock_res*) ;
 int FUNC_7 (struct dentry*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_12(struct ocfs2_lock_res *VAR_7,
           int VAR_8)
{
 struct ocfs2_dentry_lock *VAR_9 = FUNC_6(VAR_7);
 struct ocfs2_inode_info *VAR_10 = FUNC_0(VAR_9->dl_inode);
 struct dentry *VAR_11;
 unsigned long VAR_12;
 int VAR_13 = 0;
 if (VAR_8 == VAR_0)
  return VAR_3;






 FUNC_8(&VAR_10->ip_lock);
 VAR_10->ip_flags |= VAR_1;
 FUNC_10(&VAR_10->ip_lock);







 FUNC_9(&VAR_7->l_lock, VAR_12);
 FUNC_8(&VAR_6);
 if (!(VAR_7->l_flags & VAR_2)
     && VAR_9->dl_count) {
  VAR_9->dl_count++;
  VAR_13 = 1;
 }
 FUNC_10(&VAR_6);
 FUNC_11(&VAR_7->l_lock, VAR_12);

 FUNC_4(0, "extra_ref = %d\n", VAR_13);






 if (!VAR_13)
  return VAR_3;

 FUNC_8(&VAR_6);
 while (1) {
  VAR_11 = FUNC_5(VAR_9->dl_inode,
      VAR_9->dl_parent_blkno, 1);
  if (!VAR_11)
   break;
  FUNC_10(&VAR_6);

  if (FUNC_1(VAR_9->dl_inode->i_mode))
   FUNC_7(VAR_11);

  FUNC_4(0, "d_delete(%pd);\n", VAR_11);
  FUNC_2(VAR_11);
  FUNC_3(VAR_11);

  FUNC_8(&VAR_6);
 }
 FUNC_10(&VAR_6);





 if (VAR_9->dl_count == 1)
  return VAR_5;

 return VAR_4;
}
