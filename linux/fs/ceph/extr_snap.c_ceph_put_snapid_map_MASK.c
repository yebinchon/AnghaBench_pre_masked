
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_snapid_map {int lru; int last_used; int node; int ref; } ;
struct ceph_mds_client {int snapid_map_lock; int snapid_map_lru; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int FUNC_2 (struct ceph_snapid_map*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct ceph_mds_client* VAR_1,
    struct ceph_snapid_map *VAR_2)
{
 if (!VAR_2)
  return;
 if (FUNC_1(&VAR_2->ref, &VAR_1->snapid_map_lock)) {
  if (!FUNC_0(&VAR_2->node)) {
   VAR_2->last_used = VAR_0;
   FUNC_3(&VAR_2->lru, &VAR_1->snapid_map_lru);
   FUNC_4(&VAR_1->snapid_map_lock);
  } else {


   FUNC_4(&VAR_1->snapid_map_lock);
   FUNC_2(VAR_2);
  }
 }
}
