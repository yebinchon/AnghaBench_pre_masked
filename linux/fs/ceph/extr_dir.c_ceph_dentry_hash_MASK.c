
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_4__ {int hash; int len; int name; } ;
struct dentry {int d_lock; TYPE_2__ d_name; } ;
struct TYPE_3__ {int dl_dir_hash; } ;
struct ceph_inode_info {TYPE_1__ i_dir_layout; } ;



 struct ceph_inode_info* FUNC_0 (struct inode*) ;
 unsigned int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

unsigned FUNC_4(struct inode *VAR_0, struct dentry *VAR_1)
{
 struct ceph_inode_info *VAR_2 = FUNC_0(VAR_0);
 unsigned VAR_3;

 switch (VAR_2->i_dir_layout.dl_dir_hash) {
 case 0:
 case 128:
  return VAR_1->d_name.hash;

 default:
  FUNC_2(&VAR_1->d_lock);
  VAR_3 = FUNC_1(VAR_2->i_dir_layout.dl_dir_hash,
         VAR_1->d_name.name, VAR_1->d_name.len);
  FUNC_3(&VAR_1->d_lock);
  return VAR_3;
 }
}
