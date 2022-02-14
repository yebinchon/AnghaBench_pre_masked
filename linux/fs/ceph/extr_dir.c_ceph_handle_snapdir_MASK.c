
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_4__ {int name; } ;
struct dentry {TYPE_2__ d_name; int d_parent; int d_sb; } ;
struct ceph_mds_request {int dummy; } ;
struct ceph_fs_client {TYPE_1__* mount_options; } ;
struct TYPE_3__ {int snapdir_name; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_1 (struct inode*) ;
 struct ceph_fs_client* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (struct dentry*,struct inode*) ;
 struct inode* FUNC_5 (int ) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (char*,struct dentry*,struct dentry*,struct inode*) ;
 scalar_t__ FUNC_8 (int ,int ) ;

int FUNC_9(struct ceph_mds_request *VAR_2,
   struct dentry *VAR_3, int VAR_4)
{
 struct ceph_fs_client *VAR_5 = FUNC_2(VAR_3->d_sb);
 struct inode *VAR_6 = FUNC_5(VAR_3->d_parent);


 if (VAR_4 == -VAR_1 &&
     FUNC_3(VAR_6) == VAR_0 &&
     FUNC_8(VAR_3->d_name.name,
     VAR_5->mount_options->snapdir_name) == 0) {
  struct inode *VAR_7 = FUNC_1(VAR_6);
  FUNC_7("ENOENT on snapdir %p '%pd', linking to snapdir %p\n",
       VAR_3, VAR_3, VAR_7);
  FUNC_0(!FUNC_6(VAR_3));
  FUNC_4(VAR_3, VAR_7);
  VAR_4 = 0;
 }
 return VAR_4;
}
