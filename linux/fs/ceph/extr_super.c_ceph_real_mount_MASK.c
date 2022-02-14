
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dentry {int dummy; } ;
struct ceph_fs_client {TYPE_3__* client; int mount_state; TYPE_2__* sb; TYPE_1__* mount_options; } ;
struct TYPE_6__ {int mount_mutex; } ;
struct TYPE_5__ {struct dentry* s_root; } ;
struct TYPE_4__ {int flags; char* server_path; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (TYPE_3__*,unsigned long) ;
 int FUNC_4 (struct ceph_fs_client*) ;
 int FUNC_5 (struct ceph_fs_client*) ;
 void* FUNC_6 (struct dentry*) ;
 int FUNC_7 (char*,...) ;
 unsigned long VAR_2 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct dentry* FUNC_10 (struct ceph_fs_client*,char const*,unsigned long) ;

__attribute__((used)) static struct dentry *FUNC_11(struct ceph_fs_client *VAR_3)
{
 int VAR_4;
 unsigned long VAR_5 = VAR_2;
 struct dentry *VAR_6;

 FUNC_7("mount start %p\n", VAR_3);
 FUNC_8(&VAR_3->client->mount_mutex);

 if (!VAR_3->sb->s_root) {
  const char *VAR_7;
  VAR_4 = FUNC_3(VAR_3->client, VAR_5);
  if (VAR_4 < 0)
   goto out;


  if (VAR_3->mount_options->flags & VAR_1) {
   VAR_4 = FUNC_5(VAR_3);
   if (VAR_4 < 0)
    goto out;
  }

  if (!VAR_3->mount_options->server_path) {
   VAR_7 = "";
   FUNC_7("mount opening path \\t\n");
  } else {
   VAR_7 = VAR_3->mount_options->server_path + 1;
   FUNC_7("mount opening path %s\n", VAR_7);
  }

  FUNC_4(VAR_3);

  VAR_6 = FUNC_10(VAR_3, VAR_7, VAR_5);
  if (FUNC_1(VAR_6)) {
   VAR_4 = FUNC_2(VAR_6);
   goto out;
  }
  VAR_3->sb->s_root = FUNC_6(VAR_6);
 } else {
  VAR_6 = FUNC_6(VAR_3->sb->s_root);
 }

 VAR_3->mount_state = VAR_0;
 FUNC_7("mount success\n");
 FUNC_9(&VAR_3->client->mount_mutex);
 return VAR_6;

out:
 FUNC_9(&VAR_3->client->mount_mutex);
 return FUNC_0(VAR_4);
}
