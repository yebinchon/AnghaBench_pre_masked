
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mds_session {int s_num_cap_releases; int s_mdsc; int s_cap_releases; } ;
struct ceph_cap {int session_caps; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ceph_mds_session*) ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(struct ceph_mds_session *VAR_1,
         struct ceph_cap *VAR_2)
{
 FUNC_1(&VAR_2->session_caps, &VAR_1->s_cap_releases);
 VAR_1->s_num_cap_releases++;

 if (!(VAR_1->s_num_cap_releases % VAR_0))
  FUNC_0(VAR_1->s_mdsc, VAR_1);
}
