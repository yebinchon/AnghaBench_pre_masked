
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct inode {int dummy; } ;
typedef char const dentry ;
struct TYPE_9__ {int mask; } ;
struct TYPE_10__ {TYPE_4__ getattr; } ;
struct TYPE_6__ {int snap; int ino; } ;
struct ceph_mds_request {unsigned long r_started; int r_num_caps; struct inode* r_target_inode; TYPE_5__ r_args; int r_timeout; TYPE_1__ r_ino1; int r_path1; } ;
struct ceph_mds_client {int dummy; } ;
struct ceph_fs_client {TYPE_3__* client; struct ceph_mds_client* mdsc; } ;
struct TYPE_8__ {TYPE_2__* options; } ;
struct TYPE_7__ {int mount_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char const* FUNC_0 (struct ceph_mds_request*) ;
 char* FUNC_1 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct ceph_mds_request*) ;
 int VAR_6 ;
 struct ceph_mds_request* FUNC_3 (struct ceph_mds_client*,int ,int ) ;
 int FUNC_4 (struct ceph_mds_client*,int *,struct ceph_mds_request*) ;
 int FUNC_5 (struct ceph_mds_request*) ;
 int FUNC_6 (int ) ;
 char* FUNC_7 (struct inode*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char const*,int ) ;

__attribute__((used)) static struct dentry *FUNC_10(struct ceph_fs_client *VAR_7,
           const char *VAR_8,
           unsigned long VAR_9)
{
 struct ceph_mds_client *VAR_10 = VAR_7->mdsc;
 struct ceph_mds_request *VAR_11 = ((void*)0);
 int VAR_12;
 struct dentry *VAR_13;


 FUNC_8("open_root_inode opening '%s'\n", VAR_8);
 VAR_11 = FUNC_3(VAR_10, VAR_1, VAR_6);
 if (FUNC_2(VAR_11))
  return FUNC_0(VAR_11);
 VAR_11->r_path1 = FUNC_9(VAR_8, VAR_5);
 if (!VAR_11->r_path1) {
  VAR_13 = FUNC_1(-VAR_4);
  goto out;
 }

 VAR_11->r_ino1.ino = VAR_0;
 VAR_11->r_ino1.snap = VAR_2;
 VAR_11->r_started = VAR_9;
 VAR_11->r_timeout = VAR_7->client->options->mount_timeout;
 VAR_11->r_args.getattr.mask = FUNC_6(VAR_3);
 VAR_11->r_num_caps = 2;
 VAR_12 = FUNC_4(VAR_10, ((void*)0), VAR_11);
 if (VAR_12 == 0) {
  struct inode *VAR_14 = VAR_11->r_target_inode;
  VAR_11->r_target_inode = ((void*)0);
  FUNC_8("open_root_inode success\n");
  VAR_13 = FUNC_7(VAR_14);
  if (!VAR_13) {
   VAR_13 = FUNC_1(-VAR_4);
   goto out;
  }
  FUNC_8("open_root_inode success, root dentry is %p\n", VAR_13);
 } else {
  VAR_13 = FUNC_1(VAR_12);
 }
out:
 FUNC_5(VAR_11);
 return VAR_13;
}
