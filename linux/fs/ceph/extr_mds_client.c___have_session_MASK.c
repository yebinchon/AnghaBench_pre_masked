
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mds_client {int max_sessions; int * sessions; } ;



__attribute__((used)) static bool FUNC_0(struct ceph_mds_client *VAR_0, int VAR_1)
{
 if (VAR_1 >= VAR_0->max_sessions || !VAR_0->sessions[VAR_1])
  return 0;
 else
  return 1;
}
