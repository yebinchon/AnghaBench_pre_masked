
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ceph_options {int flags; int fsid; } ;
struct ceph_mount_options {scalar_t__ sb_flags; } ;
struct ceph_fs_client {struct ceph_mount_options* mount_options; TYPE_1__* client; } ;
struct TYPE_2__ {int fsid; struct ceph_options* options; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 struct ceph_fs_client* FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (struct ceph_mount_options*,struct ceph_options*,struct ceph_fs_client*) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int FUNC_4(struct super_block *VAR_1, void *VAR_2)
{
 struct ceph_fs_client *VAR_3 = VAR_2;
 struct ceph_mount_options *VAR_4 = VAR_3->mount_options;
 struct ceph_options *VAR_5 = VAR_3->client->options;
 struct ceph_fs_client *VAR_6 = FUNC_1(VAR_1);

 FUNC_3("ceph_compare_super %p\n", VAR_1);

 if (FUNC_2(VAR_4, VAR_5, VAR_6)) {
  FUNC_3("monitor(s)/mount options don't match\n");
  return 0;
 }
 if ((VAR_5->flags & VAR_0) &&
     FUNC_0(&VAR_5->fsid, &VAR_6->client->fsid)) {
  FUNC_3("fsid doesn't match\n");
  return 0;
 }
 if (VAR_4->sb_flags != VAR_6->mount_options->sb_flags) {
  FUNC_3("flags differ\n");
  return 0;
 }
 return 1;
}
