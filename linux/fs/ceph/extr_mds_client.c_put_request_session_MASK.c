
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mds_request {int * r_session; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ceph_mds_request *VAR_0)
{
 if (VAR_0->r_session) {
  FUNC_0(VAR_0->r_session);
  VAR_0->r_session = ((void*)0);
 }
}
