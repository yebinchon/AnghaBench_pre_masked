
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mds_session {size_t s_mds; } ;
struct ceph_mds_client {size_t max_sessions; struct ceph_mds_session** sessions; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct ceph_mds_client *VAR_1,
           struct ceph_mds_session *VAR_2)
{
 if (VAR_2->s_mds >= VAR_1->max_sessions ||
     VAR_1->sessions[VAR_2->s_mds] != VAR_2)
  return -VAR_0;
 return 0;
}
