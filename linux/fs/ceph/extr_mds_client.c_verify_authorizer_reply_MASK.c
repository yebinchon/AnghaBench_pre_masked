
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int authorizer; } ;
struct ceph_mds_session {TYPE_4__ s_auth; struct ceph_mds_client* s_mdsc; } ;
struct ceph_mds_client {TYPE_3__* fsc; } ;
struct ceph_connection {struct ceph_mds_session* private; } ;
struct ceph_auth_client {int dummy; } ;
struct TYPE_7__ {TYPE_2__* client; } ;
struct TYPE_5__ {struct ceph_auth_client* auth; } ;
struct TYPE_6__ {TYPE_1__ monc; } ;


 int FUNC_0 (struct ceph_auth_client*,int ) ;

__attribute__((used)) static int FUNC_1(struct ceph_connection *VAR_0)
{
 struct ceph_mds_session *VAR_1 = VAR_0->private;
 struct ceph_mds_client *VAR_2 = VAR_1->s_mdsc;
 struct ceph_auth_client *VAR_3 = VAR_2->fsc->client->monc.auth;

 return FUNC_0(VAR_3, VAR_1->s_auth.authorizer);
}
