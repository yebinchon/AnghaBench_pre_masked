
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_mds_client {int num_sessions; TYPE_1__* fsc; } ;
struct TYPE_2__ {int mount_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct ceph_mds_client *VAR_1, int VAR_2)
{
 if (FUNC_0(VAR_1->fsc->mount_state) == VAR_0)
  return 1;
 return FUNC_1(&VAR_1->num_sessions) <= VAR_2;
}
