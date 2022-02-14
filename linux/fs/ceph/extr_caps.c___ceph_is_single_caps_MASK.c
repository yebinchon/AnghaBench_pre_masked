
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_inode_info {int i_caps; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct ceph_inode_info *VAR_0)
{
 return FUNC_0(&VAR_0->i_caps) == FUNC_1(&VAR_0->i_caps);
}
