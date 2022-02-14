
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int cconn; } ;
struct ocfs2_lock_res {int l_name; int l_lksb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (char*,int,struct ocfs2_lock_res*) ;
 int FUNC_3 (struct ocfs2_lock_res*,int ) ;

__attribute__((used)) static int FUNC_4(struct ocfs2_super *VAR_2,
    struct ocfs2_lock_res *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2->cconn, &VAR_3->l_lksb,
          VAR_0);
 if (VAR_4) {
  FUNC_2("ocfs2_dlm_unlock", VAR_4, VAR_3);
  FUNC_3(VAR_3, 0);
 }

 FUNC_0(VAR_1, "lockres %s\n", VAR_3->l_name);

 return VAR_4;
}
