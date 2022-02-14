
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_dev; } ;
struct ceph_fs_client {TYPE_1__* client; int mdsc; } ;
typedef int dev_t ;
struct TYPE_2__ {int * extra_mon_dispatch; } ;


 int FUNC_0 (struct ceph_fs_client*) ;
 int FUNC_1 (struct ceph_fs_client*) ;
 int FUNC_2 (int ) ;
 struct ceph_fs_client* FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct ceph_fs_client*) ;
 int FUNC_5 (char*,struct super_block*) ;
 int FUNC_6 (struct ceph_fs_client*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct super_block*) ;

__attribute__((used)) static void FUNC_9(struct super_block *VAR_0)
{
 struct ceph_fs_client *VAR_1 = FUNC_3(VAR_0);
 dev_t VAR_2 = VAR_0->s_dev;

 FUNC_5("kill_sb %p\n", VAR_0);

 FUNC_2(VAR_1->mdsc);
 FUNC_6(VAR_1);

 FUNC_8(VAR_0);

 VAR_1->client->extra_mon_dispatch = ((void*)0);
 FUNC_0(VAR_1);

 FUNC_1(VAR_1);

 FUNC_4(VAR_1);
 FUNC_7(VAR_2);
}
