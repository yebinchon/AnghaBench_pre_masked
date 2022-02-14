
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_snap_realm {int nref; int ino; } ;
struct ceph_mds_client {int dummy; } ;


 int FUNC_0 (struct ceph_mds_client*,struct ceph_snap_realm*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,struct ceph_snap_realm*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct ceph_mds_client *VAR_0,
        struct ceph_snap_realm *VAR_1)
{
 FUNC_3("__put_snap_realm %llx %p %d -> %d\n", VAR_1->ino, VAR_1,
      FUNC_2(&VAR_1->nref), FUNC_2(&VAR_1->nref)-1);
 if (FUNC_1(&VAR_1->nref))
  FUNC_0(VAR_0, VAR_1);
}
