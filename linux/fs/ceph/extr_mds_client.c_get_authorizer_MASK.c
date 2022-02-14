
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ceph_auth_handshake {int * authorizer; } ;
struct ceph_mds_session {struct ceph_auth_handshake s_auth; struct ceph_mds_client* s_mdsc; } ;
struct ceph_mds_client {TYPE_3__* fsc; } ;
struct ceph_connection {struct ceph_mds_session* private; } ;
struct ceph_auth_client {int protocol; } ;
struct TYPE_6__ {TYPE_2__* client; } ;
struct TYPE_4__ {struct ceph_auth_client* auth; } ;
struct TYPE_5__ {TYPE_1__ monc; } ;


 int VAR_0 ;
 struct ceph_auth_handshake* FUNC_0 (int) ;
 int FUNC_1 (struct ceph_auth_client*,int ,struct ceph_auth_handshake*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ceph_auth_client*,int ,struct ceph_auth_handshake*) ;

__attribute__((used)) static struct ceph_auth_handshake *FUNC_4(struct ceph_connection *VAR_1,
     int *VAR_2, int VAR_3)
{
 struct ceph_mds_session *VAR_4 = VAR_1->private;
 struct ceph_mds_client *VAR_5 = VAR_4->s_mdsc;
 struct ceph_auth_client *VAR_6 = VAR_5->fsc->client->monc.auth;
 struct ceph_auth_handshake *VAR_7 = &VAR_4->s_auth;

 if (VAR_3 && VAR_7->authorizer) {
  FUNC_2(VAR_7->authorizer);
  VAR_7->authorizer = ((void*)0);
 }
 if (!VAR_7->authorizer) {
  int VAR_8 = FUNC_1(VAR_6, VAR_0,
            VAR_7);
  if (VAR_8)
   return FUNC_0(VAR_8);
 } else {
  int VAR_9 = FUNC_3(VAR_6, VAR_0,
            VAR_7);
  if (VAR_9)
   return FUNC_0(VAR_9);
 }
 *VAR_2 = VAR_6->protocol;

 return VAR_7;
}
