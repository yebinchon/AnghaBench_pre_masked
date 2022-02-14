
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ authorizer; } ;
struct ceph_mds_session {TYPE_1__ s_auth; int s_ref; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,struct ceph_mds_session*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct ceph_mds_session*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

void FUNC_5(struct ceph_mds_session *VAR_0)
{
 FUNC_1("mdsc put_session %p %d -> %d\n", VAR_0,
      FUNC_4(&VAR_0->s_ref), FUNC_4(&VAR_0->s_ref)-1);
 if (FUNC_3(&VAR_0->s_ref)) {
  if (VAR_0->s_auth.authorizer)
   FUNC_0(VAR_0->s_auth.authorizer);
  FUNC_2(VAR_0);
 }
}
