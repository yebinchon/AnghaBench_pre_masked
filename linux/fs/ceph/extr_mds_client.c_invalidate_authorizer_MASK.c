
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ceph_mds_session {struct ceph_mds_client* s_mdsc; } ;
struct ceph_mds_client {TYPE_2__* fsc; } ;
struct ceph_connection {struct ceph_mds_session* private; } ;
struct ceph_auth_client {int dummy; } ;
struct TYPE_6__ {struct ceph_auth_client* auth; } ;
struct TYPE_5__ {TYPE_1__* client; } ;
struct TYPE_4__ {TYPE_3__ monc; } ;


 int VAR_0 ;
 int FUNC_0 (struct ceph_auth_client*,int ) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_2(struct ceph_connection *VAR_1)
{
 struct ceph_mds_session *VAR_2 = VAR_1->private;
 struct ceph_mds_client *VAR_3 = VAR_2->s_mdsc;
 struct ceph_auth_client *VAR_4 = VAR_3->fsc->client->monc.auth;

 FUNC_0(VAR_4, VAR_0);

 return FUNC_1(&VAR_3->fsc->client->monc);
}
