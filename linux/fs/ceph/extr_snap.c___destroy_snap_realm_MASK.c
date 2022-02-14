
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_snap_realm {int cached_context; struct ceph_snap_realm* snaps; struct ceph_snap_realm* prior_parent_snaps; scalar_t__ parent; int child_item; int node; int ino; } ;
struct ceph_mds_client {int num_snap_realms; int snap_realms; } ;


 int FUNC_0 (struct ceph_mds_client*,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,struct ceph_snap_realm*,int ) ;
 int FUNC_3 (struct ceph_snap_realm*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static void FUNC_6(struct ceph_mds_client *VAR_0,
     struct ceph_snap_realm *VAR_1)
{
 FUNC_2("__destroy_snap_realm %p %llx\n", VAR_1, VAR_1->ino);

 FUNC_5(&VAR_1->node, &VAR_0->snap_realms);
 VAR_0->num_snap_realms--;

 if (VAR_1->parent) {
  FUNC_4(&VAR_1->child_item);
  FUNC_0(VAR_0, VAR_1->parent);
 }

 FUNC_3(VAR_1->prior_parent_snaps);
 FUNC_3(VAR_1->snaps);
 FUNC_1(VAR_1->cached_context);
 FUNC_3(VAR_1);
}
