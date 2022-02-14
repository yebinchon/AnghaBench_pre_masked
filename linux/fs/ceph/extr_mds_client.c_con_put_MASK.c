
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mds_session {int s_ref; } ;
struct ceph_connection {struct ceph_mds_session* private; } ;


 int FUNC_0 (struct ceph_mds_session*) ;
 int FUNC_1 (char*,struct ceph_mds_session*,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ceph_connection *VAR_0)
{
 struct ceph_mds_session *VAR_1 = VAR_0->private;

 FUNC_1("mdsc con_put %p (%d)\n", VAR_1, FUNC_2(&VAR_1->s_ref) - 1);
 FUNC_0(VAR_1);
}
