
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct ocfs2_dentry_lock {int dl_count; int dl_lockres; } ;
struct inode {int dummy; } ;
struct dentry {struct ocfs2_dentry_lock* d_fsdata; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct ocfs2_dentry_lock*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ocfs2_super*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct ocfs2_super *VAR_1,
  struct dentry *VAR_2, struct inode *VAR_3)
{
 struct ocfs2_dentry_lock *VAR_4 = VAR_2->d_fsdata;

 FUNC_4(VAR_1, &VAR_4->dl_lockres);
 FUNC_3(&VAR_4->dl_lockres);
 FUNC_0(VAR_4->dl_count != 1);
 FUNC_5(&VAR_0);
 VAR_2->d_fsdata = ((void*)0);
 FUNC_6(&VAR_0);
 FUNC_2(VAR_4);
 FUNC_1(VAR_3);
}
