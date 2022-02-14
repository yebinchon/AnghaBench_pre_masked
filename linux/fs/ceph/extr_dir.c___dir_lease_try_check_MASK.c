
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int d_parent; } ;
struct ceph_inode_info {int i_ceph_lock; int i_shared_gen; } ;
struct ceph_dentry_info {scalar_t__ lease_shared_gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dentry const*) ;
 scalar_t__ FUNC_1 (struct ceph_inode_info*,int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 struct ceph_dentry_info* FUNC_3 (struct dentry const*) ;
 struct ceph_inode_info* FUNC_4 (struct inode*) ;
 struct inode* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(const struct dentry *VAR_2)
{
 struct ceph_dentry_info *VAR_3 = FUNC_3(VAR_2);
 struct inode *VAR_4;
 struct ceph_inode_info *VAR_5;
 int VAR_6 = 0;

 if (!VAR_3->lease_shared_gen)
  return 0;
 if (FUNC_0(VAR_2))
  return 0;

 VAR_4 = FUNC_5(VAR_2->d_parent);
 VAR_5 = FUNC_4(VAR_4);

 if (FUNC_6(&VAR_5->i_ceph_lock)) {
  if (FUNC_2(&VAR_5->i_shared_gen) == VAR_3->lease_shared_gen &&
      FUNC_1(VAR_5, VAR_0, 0))
   VAR_6 = 1;
  FUNC_7(&VAR_5->i_ceph_lock);
 } else {
  VAR_6 = -VAR_1;
 }

 if (!VAR_6)
  VAR_3->lease_shared_gen = 0;
 return VAR_6;
}
