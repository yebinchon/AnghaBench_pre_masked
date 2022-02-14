
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mds_session {size_t s_mds; int s_con; scalar_t__ s_state; } ;
struct ceph_mds_client {int num_sessions; struct ceph_mds_session** sessions; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ceph_mds_session*) ;
 int FUNC_4 (char*,size_t,struct ceph_mds_session*) ;

__attribute__((used)) static void FUNC_5(struct ceph_mds_client *VAR_0,
          struct ceph_mds_session *VAR_1)
{
 FUNC_4("__unregister_session mds%d %p\n", VAR_1->s_mds, VAR_1);
 FUNC_0(VAR_0->sessions[VAR_1->s_mds] != VAR_1);
 VAR_0->sessions[VAR_1->s_mds] = ((void*)0);
 VAR_1->s_state = 0;
 FUNC_2(&VAR_1->s_con);
 FUNC_3(VAR_1);
 FUNC_1(&VAR_0->num_sessions);
}
