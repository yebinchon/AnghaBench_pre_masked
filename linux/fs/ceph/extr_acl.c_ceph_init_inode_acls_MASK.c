
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ceph_acl_sec_ctx {int default_acl; int acl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*,int ,int ) ;

void FUNC_1(struct inode *VAR_2, struct ceph_acl_sec_ctx *VAR_3)
{
 if (!VAR_2)
  return;
 FUNC_0(VAR_2, VAR_0, VAR_3->acl);
 FUNC_0(VAR_2, VAR_1, VAR_3->default_acl);
}
