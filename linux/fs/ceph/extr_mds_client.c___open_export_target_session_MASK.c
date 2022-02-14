
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mds_session {scalar_t__ s_state; } ;
struct ceph_mds_client {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct ceph_mds_session*) ;
 struct ceph_mds_session* FUNC_1 (struct ceph_mds_client*,int) ;
 int FUNC_2 (struct ceph_mds_client*,struct ceph_mds_session*) ;
 struct ceph_mds_session* FUNC_3 (struct ceph_mds_client*,int) ;

__attribute__((used)) static struct ceph_mds_session *
FUNC_4(struct ceph_mds_client *VAR_2, int VAR_3)
{
 struct ceph_mds_session *VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (!VAR_4) {
  VAR_4 = FUNC_3(VAR_2, VAR_3);
  if (FUNC_0(VAR_4))
   return VAR_4;
 }
 if (VAR_4->s_state == VAR_1 ||
     VAR_4->s_state == VAR_0)
  FUNC_2(VAR_2, VAR_4);

 return VAR_4;
}
