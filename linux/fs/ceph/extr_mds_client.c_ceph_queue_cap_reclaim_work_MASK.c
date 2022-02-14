
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_mds_client {int cap_reclaim_work; TYPE_1__* fsc; scalar_t__ stopping; } ;
struct TYPE_2__ {int cap_wq; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

void FUNC_2(struct ceph_mds_client *VAR_0)
{
 if (VAR_0->stopping)
  return;

        if (FUNC_1(VAR_0->fsc->cap_wq, &VAR_0->cap_reclaim_work)) {
                FUNC_0("caps reclaim work queued\n");
        } else {
                FUNC_0("failed to queue caps release work\n");
        }
}
