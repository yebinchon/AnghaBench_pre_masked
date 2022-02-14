
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mds_session {scalar_t__ s_state; int s_mutex; int s_waiting; } ;
struct ceph_mds_client {int max_sessions; int mutex; int waiting_for_map; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ceph_mds_session* FUNC_0 (struct ceph_mds_client*,int) ;
 int FUNC_1 (struct ceph_mds_client*,struct ceph_mds_session*) ;
 int FUNC_2 (struct ceph_mds_client*,struct ceph_mds_session*) ;
 int FUNC_3 (struct ceph_mds_client*,int *) ;
 int FUNC_4 (struct ceph_mds_session*) ;
 int FUNC_5 (struct ceph_mds_client*,struct ceph_mds_session*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct ceph_mds_client*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct ceph_mds_session*) ;

void FUNC_11(struct ceph_mds_client *VAR_2)
{
 struct ceph_mds_session *VAR_3;
 int VAR_4;

 FUNC_6("force umount\n");

 FUNC_8(&VAR_2->mutex);
 for (VAR_4 = 0; VAR_4 < VAR_2->max_sessions; VAR_4++) {
  VAR_3 = FUNC_0(VAR_2, VAR_4);
  if (!VAR_3)
   continue;

  if (VAR_3->s_state == VAR_1)
   FUNC_2(VAR_2, VAR_3);
  FUNC_3(VAR_2, &VAR_3->s_waiting);
  FUNC_9(&VAR_2->mutex);

  FUNC_8(&VAR_3->s_mutex);
  FUNC_1(VAR_2, VAR_3);
  if (VAR_3->s_state == VAR_0) {
   FUNC_5(VAR_2, VAR_3);
   FUNC_10(VAR_3);
  }
  FUNC_9(&VAR_3->s_mutex);
  FUNC_4(VAR_3);

  FUNC_8(&VAR_2->mutex);
  FUNC_7(VAR_2, VAR_4);
 }
 FUNC_3(VAR_2, &VAR_2->waiting_for_map);
 FUNC_9(&VAR_2->mutex);
}
