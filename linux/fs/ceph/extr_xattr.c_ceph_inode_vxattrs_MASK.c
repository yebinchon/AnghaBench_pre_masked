
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;
struct ceph_vxattr {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 struct ceph_vxattr* VAR_0 ;
 struct ceph_vxattr* VAR_1 ;

__attribute__((used)) static struct ceph_vxattr *FUNC_2(struct inode *VAR_2)
{
 if (FUNC_0(VAR_2->i_mode))
  return VAR_0;
 else if (FUNC_1(VAR_2->i_mode))
  return VAR_1;
 return ((void*)0);
}
