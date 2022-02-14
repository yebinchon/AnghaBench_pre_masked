
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_lock_res {int dummy; } ;
struct ocfs2_super {struct ocfs2_lock_res osb_super_lockres; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ocfs2_super*,struct ocfs2_lock_res*,int,int ,int ) ;
 int FUNC_2 (struct ocfs2_super*,struct ocfs2_lock_res*,int) ;
 int FUNC_3 (struct ocfs2_lock_res*,int) ;
 scalar_t__ FUNC_4 (struct ocfs2_super*) ;
 scalar_t__ FUNC_5 (struct ocfs2_super*) ;
 int FUNC_6 (struct ocfs2_super*) ;
 int FUNC_7 (struct ocfs2_lock_res*) ;
 int FUNC_8 (struct ocfs2_lock_res*) ;

int FUNC_9(struct ocfs2_super *VAR_3,
       int VAR_4)
{
 int VAR_5 = 0;
 int VAR_6 = VAR_4 ? VAR_0 : VAR_1;
 struct ocfs2_lock_res *VAR_7 = &VAR_3->osb_super_lockres;

 if (FUNC_4(VAR_3))
  return -VAR_2;

 if (FUNC_5(VAR_3))
  goto bail;

 VAR_5 = FUNC_1(VAR_3, VAR_7, VAR_6, 0, 0);
 if (VAR_5 < 0) {
  FUNC_0(VAR_5);
  goto bail;
 }





 VAR_5 = FUNC_7(VAR_7);
 if (VAR_5) {
  VAR_5 = FUNC_6(VAR_3);

  FUNC_3(VAR_7, VAR_5);

  if (VAR_5 < 0) {
   FUNC_2(VAR_3, VAR_7, VAR_6);
   FUNC_0(VAR_5);
  }
  FUNC_8(VAR_7);
 }
bail:
 return VAR_5;
}
