
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int s_feature_ro_compat; } ;


 int VAR_0 ;
 int FUNC_0 (struct ocfs2_super*) ;

__attribute__((used)) static inline int FUNC_1(struct ocfs2_super *VAR_1)
{



 if (!FUNC_0(VAR_1))
  return 0;

 if (VAR_1->s_feature_ro_compat & VAR_0)
  return 1;
 return 0;
}
