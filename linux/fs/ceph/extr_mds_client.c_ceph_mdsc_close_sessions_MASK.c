
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ceph_options {int mount_timeout; } ;
struct ceph_mds_session {int s_mutex; } ;
struct ceph_mds_client {int max_sessions; int delayed_work; int cap_reclaim_work; int mutex; int cap_delay_list; scalar_t__* sessions; int session_close_wq; TYPE_2__* fsc; } ;
struct TYPE_4__ {TYPE_1__* client; } ;
struct TYPE_3__ {struct ceph_options* options; } ;


 int FUNC_0 (int) ;
 struct ceph_mds_session* FUNC_1 (struct ceph_mds_client*,int) ;
 scalar_t__ FUNC_2 (struct ceph_mds_client*,struct ceph_mds_session*) ;
 int FUNC_3 (struct ceph_mds_client*,struct ceph_mds_session*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ceph_mds_client*) ;
 int FUNC_7 (struct ceph_mds_client*) ;
 int FUNC_8 (struct ceph_mds_session*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct ceph_mds_client*,int) ;
 int FUNC_11 (char*) ;
 struct ceph_mds_session* FUNC_12 (scalar_t__) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct ceph_mds_session*) ;
 int FUNC_17 (int ,int ,int ) ;

void FUNC_18(struct ceph_mds_client *VAR_0)
{
 struct ceph_options *VAR_1 = VAR_0->fsc->client->options;
 struct ceph_mds_session *VAR_2;
 int VAR_3;
 int VAR_4 = 0;

 FUNC_11("close_sessions\n");


 FUNC_14(&VAR_0->mutex);
 for (VAR_3 = 0; VAR_3 < VAR_0->max_sessions; VAR_3++) {
  VAR_2 = FUNC_1(VAR_0, VAR_3);
  if (!VAR_2)
   continue;
  FUNC_15(&VAR_0->mutex);
  FUNC_14(&VAR_2->s_mutex);
  if (FUNC_2(VAR_0, VAR_2) <= 0)
   VAR_4++;
  FUNC_15(&VAR_2->s_mutex);
  FUNC_8(VAR_2);
  FUNC_14(&VAR_0->mutex);
 }
 FUNC_15(&VAR_0->mutex);

 FUNC_11("waiting for sessions to close\n");
 FUNC_17(VAR_0->session_close_wq,
      FUNC_10(VAR_0, VAR_4),
      FUNC_9(VAR_1->mount_timeout));


 FUNC_14(&VAR_0->mutex);
 for (VAR_3 = 0; VAR_3 < VAR_0->max_sessions; VAR_3++) {
  if (VAR_0->sessions[VAR_3]) {
   VAR_2 = FUNC_12(VAR_0->sessions[VAR_3]);
   FUNC_3(VAR_0, VAR_2);
   FUNC_15(&VAR_0->mutex);
   FUNC_14(&VAR_2->s_mutex);
   FUNC_16(VAR_2);
   FUNC_15(&VAR_2->s_mutex);
   FUNC_8(VAR_2);
   FUNC_14(&VAR_0->mutex);
  }
 }
 FUNC_0(!FUNC_13(&VAR_0->cap_delay_list));
 FUNC_15(&VAR_0->mutex);

 FUNC_7(VAR_0);
 FUNC_6(VAR_0);

 FUNC_5(&VAR_0->cap_reclaim_work);
 FUNC_4(&VAR_0->delayed_work);

 FUNC_11("stopped\n");
}
