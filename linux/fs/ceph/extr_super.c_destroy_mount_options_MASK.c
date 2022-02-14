
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mount_options {struct ceph_mount_options* fscache_uniq; struct ceph_mount_options* server_path; struct ceph_mount_options* mds_namespace; struct ceph_mount_options* snapdir_name; } ;


 int FUNC_0 (char*,struct ceph_mount_options*) ;
 int FUNC_1 (struct ceph_mount_options*) ;

__attribute__((used)) static void FUNC_2(struct ceph_mount_options *VAR_0)
{
 FUNC_0("destroy_mount_options %p\n", VAR_0);
 FUNC_1(VAR_0->snapdir_name);
 FUNC_1(VAR_0->mds_namespace);
 FUNC_1(VAR_0->server_path);
 FUNC_1(VAR_0->fscache_uniq);
 FUNC_1(VAR_0);
}
