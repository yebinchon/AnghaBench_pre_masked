
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_msg {int dummy; } ;
struct ceph_mds_session {int s_con; int s_renew_seq; int s_mds; int s_renew_requested; int s_cap_ttl; } ;
struct ceph_mds_client {int mdsmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct ceph_msg*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 struct ceph_msg* FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,int ,int ) ;
 int VAR_3 ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct ceph_mds_client *VAR_4,
      struct ceph_mds_session *VAR_5)
{
 struct ceph_msg *VAR_6;
 int VAR_7;

 if (FUNC_6(VAR_3, VAR_5->s_cap_ttl) &&
     FUNC_6(VAR_5->s_cap_ttl, VAR_5->s_renew_requested))
  FUNC_5("mds%d caps stale\n", VAR_5->s_mds);
 VAR_5->s_renew_requested = VAR_3;



 VAR_7 = FUNC_2(VAR_4->mdsmap, VAR_5->s_mds);
 if (VAR_7 < VAR_0) {
  FUNC_4("send_renew_caps ignoring mds%d (%s)\n",
       VAR_5->s_mds, FUNC_1(VAR_7));
  return 0;
 }

 FUNC_4("send_renew_caps to mds%d (%s)\n", VAR_5->s_mds,
  FUNC_1(VAR_7));
 VAR_6 = FUNC_3(VAR_1,
     ++VAR_5->s_renew_seq);
 if (!VAR_6)
  return -VAR_2;
 FUNC_0(&VAR_5->s_con, VAR_6);
 return 0;
}
