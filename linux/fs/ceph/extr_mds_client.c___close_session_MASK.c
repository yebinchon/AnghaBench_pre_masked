
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mds_session {scalar_t__ s_state; } ;
struct ceph_mds_client {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ceph_mds_client*,struct ceph_mds_session*) ;

__attribute__((used)) static int FUNC_1(struct ceph_mds_client *VAR_1,
    struct ceph_mds_session *VAR_2)
{
 if (VAR_2->s_state >= VAR_0)
  return 0;
 VAR_2->s_state = VAR_0;
 return FUNC_0(VAR_1, VAR_2);
}
