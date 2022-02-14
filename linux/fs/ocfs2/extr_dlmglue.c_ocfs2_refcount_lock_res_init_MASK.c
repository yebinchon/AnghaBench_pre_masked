
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_lock_res {int l_name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,unsigned int,int ) ;
 int FUNC_1 (struct ocfs2_super*,struct ocfs2_lock_res*,int ,int *,struct ocfs2_super*) ;
 int FUNC_2 (struct ocfs2_lock_res*) ;
 int VAR_1 ;

void FUNC_3(struct ocfs2_lock_res *VAR_2,
      struct ocfs2_super *VAR_3, u64 VAR_4,
      unsigned int VAR_5)
{
 FUNC_2(VAR_2);
 FUNC_0(VAR_0, VAR_4,
         VAR_5, VAR_2->l_name);
 FUNC_1(VAR_3, VAR_2, VAR_0,
       &VAR_1, VAR_3);
}
