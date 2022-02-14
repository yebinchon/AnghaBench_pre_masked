
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct ocfs2_dentry_lock {int dl_lockres; int dl_inode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ocfs2_dentry_lock*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ocfs2_super*,int *) ;

__attribute__((used)) static void FUNC_4(struct ocfs2_super *VAR_0,
       struct ocfs2_dentry_lock *VAR_1)
{
 FUNC_0(VAR_1->dl_inode);
 FUNC_3(VAR_0, &VAR_1->dl_lockres);
 FUNC_2(&VAR_1->dl_lockres);
 FUNC_1(VAR_1);
}
