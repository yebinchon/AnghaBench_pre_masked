
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_msg {TYPE_1__* con; } ;
struct ceph_auth_handshake {int dummy; } ;
struct ceph_mds_session {struct ceph_auth_handshake s_auth; } ;
struct TYPE_2__ {struct ceph_mds_session* private; } ;


 int FUNC_0 (struct ceph_auth_handshake*,struct ceph_msg*) ;

__attribute__((used)) static int FUNC_1(struct ceph_msg *VAR_0)
{
       struct ceph_mds_session *VAR_1 = VAR_0->con->private;
       struct ceph_auth_handshake *VAR_2 = &VAR_1->s_auth;

       return FUNC_0(VAR_2, VAR_0);
}
