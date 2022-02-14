
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_caching_info {int ci_flags; scalar_t__ ci_num_cached; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct ocfs2_caching_info *VAR_2)
{
 return (VAR_2->ci_flags & VAR_0) &&
  (VAR_2->ci_num_cached < VAR_1);
}
