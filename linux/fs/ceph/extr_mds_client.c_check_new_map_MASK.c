
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mdsmap {int m_num_mds; int m_epoch; } ;
struct ceph_mds_session {scalar_t__ s_state; int s_mds; int s_mutex; int s_con; int s_waiting; } ;
struct ceph_mds_client {int max_sessions; struct ceph_mds_session** sessions; int mutex; } ;
struct ceph_entity_addr {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ceph_mds_client*,struct ceph_mds_session*) ;
 int FUNC_1 (struct ceph_mds_client*,struct ceph_mds_session*) ;
 int FUNC_2 (struct ceph_mds_client*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ceph_mds_client*,struct ceph_mds_session*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct ceph_mdsmap*,int) ;
 int FUNC_7 (struct ceph_mdsmap*,int) ;
 scalar_t__ FUNC_8 (struct ceph_mdsmap*,int) ;
 int FUNC_9 (struct ceph_mds_session*) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct ceph_mds_client*,struct ceph_mds_session*) ;
 int FUNC_12 (char*,int,...) ;
 int FUNC_13 (struct ceph_mds_session*) ;
 int FUNC_14 (struct ceph_mds_client*,int) ;
 scalar_t__ FUNC_15 (int ,int ,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (char*,int ) ;
 int FUNC_19 (struct ceph_mds_session*) ;
 int FUNC_20 (struct ceph_mds_client*,struct ceph_mds_session*) ;
 int FUNC_21 (struct ceph_mds_session*,int ) ;

__attribute__((used)) static void FUNC_22(struct ceph_mds_client *VAR_9,
     struct ceph_mdsmap *VAR_10,
     struct ceph_mdsmap *VAR_11)
{
 int VAR_12;
 int VAR_13, VAR_14;
 struct ceph_mds_session *VAR_15;

 FUNC_12("check_new_map new %u old %u\n",
      VAR_10->m_epoch, VAR_11->m_epoch);

 for (VAR_12 = 0; VAR_12 < VAR_11->m_num_mds && VAR_12 < VAR_9->max_sessions; VAR_12++) {
  if (!VAR_9->sessions[VAR_12])
   continue;
  VAR_15 = VAR_9->sessions[VAR_12];
  VAR_13 = FUNC_7(VAR_11, VAR_12);
  VAR_14 = FUNC_7(VAR_10, VAR_12);

  FUNC_12("check_new_map mds%d state %s%s -> %s%s (session %s)\n",
       VAR_12, FUNC_5(VAR_13),
       FUNC_8(VAR_11, VAR_12) ? " (laggy)" : "",
       FUNC_5(VAR_14),
       FUNC_8(VAR_10, VAR_12) ? " (laggy)" : "",
       FUNC_10(VAR_15->s_state));

  if (VAR_12 >= VAR_10->m_num_mds) {

   FUNC_13(VAR_15);
   FUNC_1(VAR_9, VAR_15);
   FUNC_2(VAR_9, &VAR_15->s_waiting);
   FUNC_17(&VAR_9->mutex);

   FUNC_16(&VAR_15->s_mutex);
   FUNC_11(VAR_9, VAR_15);
   FUNC_19(VAR_15);
   FUNC_17(&VAR_15->s_mutex);

   FUNC_9(VAR_15);

   FUNC_16(&VAR_9->mutex);
   FUNC_14(VAR_9, VAR_12);
   continue;
  }

  if (FUNC_15(FUNC_6(VAR_11, VAR_12),
      FUNC_6(VAR_10, VAR_12),
      sizeof(struct ceph_entity_addr))) {

   FUNC_17(&VAR_9->mutex);
   FUNC_16(&VAR_15->s_mutex);
   FUNC_16(&VAR_9->mutex);
   FUNC_3(&VAR_15->s_con);
   FUNC_17(&VAR_15->s_mutex);
   VAR_15->s_state = VAR_3;
  } else if (VAR_13 == VAR_14) {
   continue;
  }




  if (VAR_15->s_state == VAR_3 &&
      VAR_14 >= VAR_6) {
   FUNC_17(&VAR_9->mutex);
   FUNC_20(VAR_9, VAR_15);
   FUNC_16(&VAR_9->mutex);
  }




  if (VAR_13 < VAR_4 &&
      VAR_14 >= VAR_4) {
   if (VAR_13 != VAR_5 &&
       VAR_13 != VAR_7)
    FUNC_18("mds%d recovery completed\n", VAR_15->s_mds);
   FUNC_14(VAR_9, VAR_12);
   FUNC_4(VAR_9, VAR_15);
   FUNC_21(VAR_15, VAR_8);
  }
 }

 for (VAR_12 = 0; VAR_12 < VAR_10->m_num_mds && VAR_12 < VAR_9->max_sessions; VAR_12++) {
  VAR_15 = VAR_9->sessions[VAR_12];
  if (!VAR_15)
   continue;
  if (!FUNC_8(VAR_10, VAR_12))
   continue;
  if (VAR_15->s_state == VAR_2 ||
      VAR_15->s_state == VAR_1 ||
      VAR_15->s_state == VAR_0) {
   FUNC_12(" connecting to export targets of laggy mds%d\n",
        VAR_12);
   FUNC_0(VAR_9, VAR_15);
  }
 }
}
