
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_msg {int dummy; } ;
struct ceph_mds_session {int s_mds; int s_con; int s_seq; int s_renew_requested; int s_state; } ;
struct ceph_mds_client {int mdsmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct ceph_msg*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 struct ceph_msg* FUNC_3 (struct ceph_mds_client*,int ) ;
 int FUNC_4 (char*,int,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct ceph_mds_client *VAR_3,
     struct ceph_mds_session *VAR_4)
{
 struct ceph_msg *VAR_5;
 int VAR_6;
 int VAR_7 = VAR_4->s_mds;


 VAR_6 = FUNC_2(VAR_3->mdsmap, VAR_7);
 FUNC_4("open_session to mds%d (%s)\n", VAR_7,
      FUNC_1(VAR_6));
 VAR_4->s_state = VAR_0;
 VAR_4->s_renew_requested = VAR_2;


 VAR_5 = FUNC_3(VAR_3, VAR_4->s_seq);
 if (!VAR_5)
  return -VAR_1;
 FUNC_0(&VAR_4->s_con, VAR_5);
 return 0;
}
