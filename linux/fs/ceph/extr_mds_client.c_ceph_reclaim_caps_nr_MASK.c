
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mds_client {int cap_reclaim_pending; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct ceph_mds_client*) ;

void FUNC_3(struct ceph_mds_client *VAR_1, int VAR_2)
{
 int VAR_3;
 if (!VAR_2)
  return;
 VAR_3 = FUNC_0(VAR_2, &VAR_1->cap_reclaim_pending);
 if (!(VAR_3 % VAR_0)) {
  FUNC_1(&VAR_1->cap_reclaim_pending, 0);
  FUNC_2(VAR_1);
 }
}
