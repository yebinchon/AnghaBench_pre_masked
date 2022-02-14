
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_lock_res {int l_flags; int l_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ocfs2_lock_res*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct ocfs2_lock_res*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct ocfs2_lock_res *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4 = 0;

refresh_check:
 FUNC_3(&VAR_2->l_lock, VAR_3);
 if (!(VAR_2->l_flags & VAR_0)) {
  FUNC_4(&VAR_2->l_lock, VAR_3);
  goto bail;
 }

 if (VAR_2->l_flags & VAR_1) {
  FUNC_4(&VAR_2->l_lock, VAR_3);

  FUNC_2(VAR_2);
  goto refresh_check;
 }


 FUNC_0(VAR_2, VAR_1);
 FUNC_4(&VAR_2->l_lock, VAR_3);

 VAR_4 = 1;
bail:
 FUNC_1(0, "status %d\n", VAR_4);
 return VAR_4;
}
