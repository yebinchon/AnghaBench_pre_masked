
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_inode_info {int i_ceph_lock; } ;
struct ceph_cap {int dummy; } ;


 struct ceph_cap* FUNC_0 (struct ceph_inode_info*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct ceph_cap *FUNC_3(struct ceph_inode_info *VAR_0, int VAR_1)
{
 struct ceph_cap *VAR_2;

 FUNC_1(&VAR_0->i_ceph_lock);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->i_ceph_lock);
 return VAR_2;
}
