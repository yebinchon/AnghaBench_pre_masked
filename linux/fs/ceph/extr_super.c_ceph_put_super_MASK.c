
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ceph_fs_client {int mdsc; } ;


 int FUNC_0 (int ) ;
 struct ceph_fs_client* FUNC_1 (struct super_block*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(struct super_block *VAR_0)
{
 struct ceph_fs_client *VAR_1 = FUNC_1(VAR_0);

 FUNC_2("put_super\n");
 FUNC_0(VAR_1->mdsc);
}
