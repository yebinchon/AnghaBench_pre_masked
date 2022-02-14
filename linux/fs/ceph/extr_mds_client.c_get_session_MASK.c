
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mds_session {int s_ref; } ;


 int FUNC_0 (char*,struct ceph_mds_session*,...) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static struct ceph_mds_session *FUNC_3(struct ceph_mds_session *VAR_0)
{
 if (FUNC_1(&VAR_0->s_ref)) {
  FUNC_0("mdsc get_session %p %d -> %d\n", VAR_0,
       FUNC_2(&VAR_0->s_ref)-1, FUNC_2(&VAR_0->s_ref));
  return VAR_0;
 } else {
  FUNC_0("mdsc get_session %p 0 -- FAIL\n", VAR_0);
  return ((void*)0);
 }
}
