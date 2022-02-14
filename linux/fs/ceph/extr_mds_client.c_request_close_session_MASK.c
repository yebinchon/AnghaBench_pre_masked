
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_msg {int dummy; } ;
struct ceph_mds_session {int s_con; int s_seq; int s_state; int s_mds; } ;
struct ceph_mds_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct ceph_msg*) ;
 int FUNC_1 (int ) ;
 struct ceph_msg* FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct ceph_mds_client *VAR_2,
     struct ceph_mds_session *VAR_3)
{
 struct ceph_msg *VAR_4;

 FUNC_3("request_close_session mds%d state %s seq %lld\n",
      VAR_3->s_mds, FUNC_1(VAR_3->s_state),
      VAR_3->s_seq);
 VAR_4 = FUNC_2(VAR_0, VAR_3->s_seq);
 if (!VAR_4)
  return -VAR_1;
 FUNC_0(&VAR_3->s_con, VAR_4);
 return 1;
}
