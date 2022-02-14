
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int d_lock; int d_parent; } ;
struct ceph_inode_info {int i_shared_gen; int i_ceph_lock; } ;
struct ceph_dentry_info {int lease_shared_gen; } ;


 int VAR_0 ;
 int FUNC_0 (struct ceph_inode_info*,int ,int) ;
 int FUNC_1 (struct ceph_dentry_info*) ;
 int FUNC_2 (int *) ;
 struct ceph_dentry_info* FUNC_3 (struct dentry*) ;
 struct ceph_inode_info* FUNC_4 (struct inode*) ;
 struct inode* FUNC_5 (int ) ;
 int FUNC_6 (char*,struct inode*,unsigned int,struct dentry*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_1, struct dentry *VAR_2)
{
 struct ceph_inode_info *VAR_3 = FUNC_4(VAR_1);
 int VAR_4;
 int VAR_5;

 FUNC_7(&VAR_3->i_ceph_lock);
 VAR_4 = FUNC_0(VAR_3, VAR_0, 1);
 VAR_5 = FUNC_2(&VAR_3->i_shared_gen);
 FUNC_8(&VAR_3->i_ceph_lock);
 if (VAR_4) {
  struct ceph_dentry_info *VAR_6;
  FUNC_7(&VAR_2->d_lock);
  VAR_6 = FUNC_3(VAR_2);
  if (VAR_1 == FUNC_5(VAR_2->d_parent) &&
      VAR_6 && VAR_6->lease_shared_gen == VAR_5)
   FUNC_1(VAR_6);
  else
   VAR_4 = 0;
  FUNC_8(&VAR_2->d_lock);
 }
 FUNC_6("dir_lease_is_valid dir %p v%u dentry %p = %d\n",
      VAR_1, (unsigned)FUNC_2(&VAR_3->i_shared_gen), VAR_2, VAR_4);
 return VAR_4;
}
