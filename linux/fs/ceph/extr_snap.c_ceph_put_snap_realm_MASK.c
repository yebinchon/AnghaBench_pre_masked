
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_snap_realm {int empty_item; int nref; int ino; } ;
struct ceph_mds_client {int snap_empty_lock; int snap_empty; int snap_rwsem; } ;


 int FUNC_0 (struct ceph_mds_client*,struct ceph_snap_realm*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,struct ceph_snap_realm*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct ceph_mds_client *VAR_0,
    struct ceph_snap_realm *VAR_1)
{
 FUNC_3("put_snap_realm %llx %p %d -> %d\n", VAR_1->ino, VAR_1,
      FUNC_2(&VAR_1->nref), FUNC_2(&VAR_1->nref)-1);
 if (!FUNC_1(&VAR_1->nref))
  return;

 if (FUNC_4(&VAR_0->snap_rwsem)) {
  FUNC_0(VAR_0, VAR_1);
  FUNC_8(&VAR_0->snap_rwsem);
 } else {
  FUNC_6(&VAR_0->snap_empty_lock);
  FUNC_5(&VAR_1->empty_item, &VAR_0->snap_empty);
  FUNC_7(&VAR_0->snap_empty_lock);
 }
}
