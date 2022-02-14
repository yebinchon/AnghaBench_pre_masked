
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct ocfs2_dentry_lock {int dl_lockres; } ;
struct dentry {int d_sb; struct ocfs2_dentry_lock* d_fsdata; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ocfs2_super* FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ocfs2_super*,int *,int,int ,int ) ;
 scalar_t__ FUNC_4 (struct ocfs2_super*) ;
 scalar_t__ FUNC_5 (struct ocfs2_super*) ;

int FUNC_6(struct dentry *VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6 = VAR_4 ? VAR_0 : VAR_1;
 struct ocfs2_dentry_lock *VAR_7 = VAR_3->d_fsdata;
 struct ocfs2_super *VAR_8 = FUNC_1(VAR_3->d_sb);

 FUNC_0(!VAR_7);

 if (FUNC_4(VAR_8)) {
  if (VAR_4)
   return -VAR_2;
  return 0;
 }

 if (FUNC_5(VAR_8))
  return 0;

 VAR_5 = FUNC_3(VAR_8, &VAR_7->dl_lockres, VAR_6, 0, 0);
 if (VAR_5 < 0)
  FUNC_2(VAR_5);

 return VAR_5;
}
