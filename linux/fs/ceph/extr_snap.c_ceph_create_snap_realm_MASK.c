
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ceph_snap_realm {int ino; int inodes_with_caps_lock; int inodes_with_caps; int dirty_item; int empty_item; int child_item; int children; int nref; } ;
struct ceph_mds_client {int num_snap_realms; int snap_realms; } ;


 int VAR_0 ;
 struct ceph_snap_realm* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct ceph_snap_realm*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (char*,int ,struct ceph_snap_realm*) ;
 struct ceph_snap_realm* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static struct ceph_snap_realm *FUNC_7(
 struct ceph_mds_client *VAR_2,
 u64 VAR_3)
{
 struct ceph_snap_realm *VAR_4;

 VAR_4 = FUNC_5(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 FUNC_3(&VAR_4->nref, 1);
 VAR_4->ino = VAR_3;
 FUNC_1(&VAR_4->children);
 FUNC_1(&VAR_4->child_item);
 FUNC_1(&VAR_4->empty_item);
 FUNC_1(&VAR_4->dirty_item);
 FUNC_1(&VAR_4->inodes_with_caps);
 FUNC_6(&VAR_4->inodes_with_caps_lock);
 FUNC_2(&VAR_2->snap_realms, VAR_4);
 VAR_2->num_snap_realms++;

 FUNC_4("create_snap_realm %llx %p\n", VAR_4->ino, VAR_4);
 return VAR_4;
}
