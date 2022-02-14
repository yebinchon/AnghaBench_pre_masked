
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mds_session {int dummy; } ;
struct ceph_mds_client {int max_sessions; int * sessions; } ;


 struct ceph_mds_session* FUNC_0 (int ) ;

struct ceph_mds_session *FUNC_1(struct ceph_mds_client *VAR_0,
         int VAR_1)
{
 if (VAR_1 >= VAR_0->max_sessions || !VAR_0->sessions[VAR_1])
  return ((void*)0);
 return FUNC_0(VAR_0->sessions[VAR_1]);
}
