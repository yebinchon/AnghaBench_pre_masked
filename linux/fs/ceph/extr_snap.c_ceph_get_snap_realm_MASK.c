
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_snap_realm {int empty_item; int nref; } ;
struct ceph_mds_client {int snap_empty_lock; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (char*,struct ceph_snap_realm*,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct ceph_mds_client *VAR_0,
    struct ceph_snap_realm *VAR_1)
{
 FUNC_2("get_realm %p %d -> %d\n", VAR_1,
      FUNC_1(&VAR_1->nref), FUNC_1(&VAR_1->nref)+1);






 if (FUNC_0(&VAR_1->nref) == 1) {
  FUNC_4(&VAR_0->snap_empty_lock);
  FUNC_3(&VAR_1->empty_item);
  FUNC_5(&VAR_0->snap_empty_lock);
 }
}
