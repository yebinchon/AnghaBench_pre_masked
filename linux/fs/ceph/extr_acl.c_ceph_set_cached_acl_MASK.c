
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int dummy; } ;
struct ceph_inode_info {int i_ceph_lock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ceph_inode_info*,int ,int ) ;
 struct ceph_inode_info* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,int) ;
 int FUNC_3 (struct inode*,int,struct posix_acl*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static inline void FUNC_6(struct inode *VAR_1,
     int VAR_2, struct posix_acl *VAR_3)
{
 struct ceph_inode_info *VAR_4 = FUNC_1(VAR_1);

 FUNC_4(&VAR_4->i_ceph_lock);
 if (FUNC_0(VAR_4, VAR_0, 0))
  FUNC_3(VAR_1, VAR_2, VAR_3);
 else
  FUNC_2(VAR_1, VAR_2);
 FUNC_5(&VAR_4->i_ceph_lock);
}
