
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mds_session {int s_ref; } ;
struct ceph_connection {struct ceph_mds_session* private; } ;


 int FUNC_0 (char*,struct ceph_mds_session*,...) ;
 scalar_t__ FUNC_1 (struct ceph_mds_session*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct ceph_connection *FUNC_3(struct ceph_connection *VAR_0)
{
 struct ceph_mds_session *VAR_1 = VAR_0->private;

 if (FUNC_1(VAR_1)) {
  FUNC_0("mdsc con_get %p ok (%d)\n", VAR_1, FUNC_2(&VAR_1->s_ref));
  return VAR_0;
 }
 FUNC_0("mdsc con_get %p FAIL\n", VAR_1);
 return ((void*)0);
}
