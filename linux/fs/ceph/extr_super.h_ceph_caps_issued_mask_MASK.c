
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_inode_info {int i_ceph_lock; } ;


 int FUNC_0 (struct ceph_inode_info*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline int FUNC_3(struct ceph_inode_info *VAR_0, int VAR_1,
     int VAR_2)
{
 int VAR_3;
 FUNC_1(&VAR_0->i_ceph_lock);
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_0->i_ceph_lock);
 return VAR_3;
}
