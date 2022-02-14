
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int s_feature_incompat; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct ocfs2_super *VAR_2)
{
 return (VAR_2->s_feature_incompat &
  (VAR_1 |
   VAR_0));
}
