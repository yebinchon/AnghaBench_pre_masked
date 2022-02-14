
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ceph_fs_client {int mdsc; TYPE_1__* client; } ;
struct TYPE_2__ {int osdc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 struct ceph_fs_client* FUNC_3 (struct super_block*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_0, int VAR_1)
{
 struct ceph_fs_client *VAR_2 = FUNC_3(VAR_0);

 if (!VAR_1) {
  FUNC_4("sync_fs (non-blocking)\n");
  FUNC_0(VAR_2->mdsc);
  FUNC_4("sync_fs (non-blocking) done\n");
  return 0;
 }

 FUNC_4("sync_fs (blocking)\n");
 FUNC_2(&VAR_2->client->osdc);
 FUNC_1(VAR_2->mdsc);
 FUNC_4("sync_fs (blocking) done\n");
 return 0;
}
