
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mds_session {int s_mds; struct ceph_mds_client* s_mdsc; } ;
struct ceph_mds_client {int dummy; } ;
struct ceph_connection {struct ceph_mds_session* private; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct ceph_mds_client*,struct ceph_mds_session*) ;

__attribute__((used)) static void FUNC_2(struct ceph_connection *VAR_0)
{
 struct ceph_mds_session *VAR_1 = VAR_0->private;
 struct ceph_mds_client *VAR_2 = VAR_1->s_mdsc;

 FUNC_0("mds%d closed our session\n", VAR_1->s_mds);
 FUNC_1(VAR_2, VAR_1);
}
