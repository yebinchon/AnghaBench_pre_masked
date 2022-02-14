
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_fs_client {int cap_wq; int inode_wq; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ceph_fs_client *VAR_0)
{
 FUNC_0(VAR_0->inode_wq);
 FUNC_0(VAR_0->cap_wq);
}
