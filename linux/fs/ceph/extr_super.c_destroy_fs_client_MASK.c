
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_fs_client {int client; int mount_options; int wb_pagevec_pool; int cap_wq; int inode_wq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ceph_fs_client*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,struct ceph_fs_client*) ;
 int FUNC_5 (struct ceph_fs_client*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct ceph_fs_client *VAR_0)
{
 FUNC_4("destroy_fs_client %p\n", VAR_0);

 FUNC_1(VAR_0);
 FUNC_3(VAR_0->inode_wq);
 FUNC_3(VAR_0->cap_wq);

 FUNC_6(VAR_0->wb_pagevec_pool);

 FUNC_2(VAR_0->mount_options);

 FUNC_0(VAR_0->client);

 FUNC_5(VAR_0);
 FUNC_4("destroy_fs_client %p done\n", VAR_0);
}
