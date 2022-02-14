
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int osb_cluster_stack; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct ocfs2_super*) ;

__attribute__((used)) static inline int FUNC_2(struct ocfs2_super *VAR_2)
{
 if (FUNC_1(VAR_2) &&
     FUNC_0(VAR_2->osb_cluster_stack, VAR_0,
     VAR_1))
  return 1;
 return 0;
}
