
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct ocfs2_dentry_lock {scalar_t__ dl_count; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct ocfs2_super*,struct ocfs2_dentry_lock*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct ocfs2_super *VAR_1,
      struct ocfs2_dentry_lock *VAR_2)
{
 int VAR_3 = 0;

 FUNC_0(VAR_2->dl_count == 0);

 FUNC_2(&VAR_0);
 VAR_2->dl_count--;
 VAR_3 = !VAR_2->dl_count;
 FUNC_3(&VAR_0);

 if (VAR_3)
  FUNC_1(VAR_1, VAR_2);
}
