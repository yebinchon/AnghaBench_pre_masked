
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ceph_snap_realm {scalar_t__ parent_ino; int children; int child_item; struct ceph_snap_realm* parent; int ino; } ;
struct ceph_mds_client {int dummy; } ;


 scalar_t__ FUNC_0 (struct ceph_snap_realm*) ;
 int FUNC_1 (struct ceph_snap_realm*) ;
 struct ceph_snap_realm* FUNC_2 (struct ceph_mds_client*,scalar_t__) ;
 struct ceph_snap_realm* FUNC_3 (struct ceph_mds_client*,scalar_t__) ;
 int FUNC_4 (struct ceph_mds_client*,struct ceph_snap_realm*) ;
 int FUNC_5 (char*,int ,struct ceph_snap_realm*,scalar_t__,struct ceph_snap_realm*,scalar_t__,struct ceph_snap_realm*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct ceph_mds_client *VAR_0,
        struct ceph_snap_realm *VAR_1,
        u64 VAR_2)
{
 struct ceph_snap_realm *VAR_3;

 if (VAR_1->parent_ino == VAR_2)
  return 0;

 VAR_3 = FUNC_3(VAR_0, VAR_2);
 if (!VAR_3) {
  VAR_3 = FUNC_2(VAR_0, VAR_2);
  if (FUNC_0(VAR_3))
   return FUNC_1(VAR_3);
 }
 FUNC_5("adjust_snap_realm_parent %llx %p: %llx %p -> %llx %p\n",
      VAR_1->ino, VAR_1, VAR_1->parent_ino, VAR_1->parent,
      VAR_2, VAR_3);
 if (VAR_1->parent) {
  FUNC_7(&VAR_1->child_item);
  FUNC_4(VAR_0, VAR_1->parent);
 }
 VAR_1->parent_ino = VAR_2;
 VAR_1->parent = VAR_3;
 FUNC_6(&VAR_1->child_item, &VAR_3->children);
 return 1;
}
