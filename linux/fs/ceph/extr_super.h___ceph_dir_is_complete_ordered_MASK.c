
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_inode_info {int i_ordered_count; int * i_complete_seq; int i_release_count; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static inline bool FUNC_1(struct ceph_inode_info *VAR_0)
{
 return FUNC_0(&VAR_0->i_complete_seq[0]) ==
  FUNC_0(&VAR_0->i_release_count) &&
  FUNC_0(&VAR_0->i_complete_seq[1]) ==
  FUNC_0(&VAR_0->i_ordered_count);
}
