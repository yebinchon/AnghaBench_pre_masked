
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {scalar_t__ s_root; } ;
struct ceph_fs_client {int blacklisted; int mount_state; TYPE_1__* client; int inode_wq; } ;
struct TYPE_2__ {int osdc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 struct ceph_fs_client* FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct super_block *VAR_2)
{
 struct ceph_fs_client *VAR_3 = FUNC_3(VAR_2);
 int VAR_4 = 0;

 FUNC_4(VAR_2);



 FUNC_6(VAR_3->inode_wq);



 FUNC_2(VAR_3->client);

 FUNC_1(&VAR_3->client->osdc);

 VAR_3->blacklisted = 0;
 VAR_3->mount_state = VAR_0;

 if (VAR_2->s_root) {
  VAR_4 = FUNC_0(FUNC_5(VAR_2->s_root), ((void*)0),
     VAR_1, 1);
 }
 return VAR_4;
}
