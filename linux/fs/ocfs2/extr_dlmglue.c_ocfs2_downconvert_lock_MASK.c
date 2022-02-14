
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ocfs2_super {int cconn; } ;
struct ocfs2_lock_res {int l_name; int l_lksb; TYPE_1__* l_ops; int l_level; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct ocfs2_lock_res*,unsigned int,struct ocfs2_super*) ;
 int FUNC_1 (int ,char*,int ,int ,int) ;
 int FUNC_2 (int ,int,int *,int ,int ,scalar_t__) ;
 int FUNC_3 (char*,int,struct ocfs2_lock_res*) ;
 int FUNC_4 (struct ocfs2_lock_res*,int) ;
 scalar_t__ FUNC_5 (struct ocfs2_super*) ;

__attribute__((used)) static int FUNC_6(struct ocfs2_super *VAR_5,
      struct ocfs2_lock_res *VAR_6,
      int VAR_7,
      int VAR_8,
      unsigned int VAR_9)
{
 int VAR_10;
 u32 VAR_11 = VAR_0;

 FUNC_1(VAR_3, "lockres %s, level %d => %d\n", VAR_6->l_name,
      VAR_6->l_level, VAR_7);







 if (FUNC_5(VAR_5) &&
     VAR_6->l_ops->flags & VAR_2)
  VAR_8 = 1;

 if (VAR_8)
  VAR_11 |= VAR_1;

 VAR_10 = FUNC_2(VAR_5->cconn,
        VAR_7,
        &VAR_6->l_lksb,
        VAR_11,
        VAR_6->l_name,
        VAR_4 - 1);
 FUNC_0(VAR_6, VAR_9, VAR_5);
 if (VAR_10) {
  FUNC_3("ocfs2_dlm_lock", VAR_10, VAR_6);
  FUNC_4(VAR_6, 1);
  goto bail;
 }

 VAR_10 = 0;
bail:
 return VAR_10;
}
