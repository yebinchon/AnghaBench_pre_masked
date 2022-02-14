
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_acl_sec_ctx {scalar_t__ pagelist; int sec_ctxlen; int sec_ctx; int default_acl; int acl; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(struct ceph_acl_sec_ctx *VAR_0)
{







 if (VAR_0->pagelist)
  FUNC_0(VAR_0->pagelist);
}
