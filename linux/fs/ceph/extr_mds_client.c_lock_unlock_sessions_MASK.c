
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mds_session {int s_mutex; } ;
struct ceph_mds_client {int max_sessions; int mutex; } ;


 struct ceph_mds_session* FUNC_0 (struct ceph_mds_client*,int) ;
 int FUNC_1 (struct ceph_mds_session*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ceph_mds_client *VAR_0)
{
 int VAR_1;

 FUNC_2(&VAR_0->mutex);
 for (VAR_1 = 0; VAR_1 < VAR_0->max_sessions; VAR_1++) {
  struct ceph_mds_session *VAR_2 = FUNC_0(VAR_0, VAR_1);
  if (!VAR_2)
   continue;
  FUNC_3(&VAR_0->mutex);
  FUNC_2(&VAR_2->s_mutex);
  FUNC_3(&VAR_2->s_mutex);
  FUNC_1(VAR_2);
  FUNC_2(&VAR_0->mutex);
 }
 FUNC_3(&VAR_0->mutex);
}
