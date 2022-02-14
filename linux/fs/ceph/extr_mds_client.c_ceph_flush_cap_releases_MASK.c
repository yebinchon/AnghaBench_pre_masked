
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_mds_session {int s_cap_release_work; } ;
struct ceph_mds_client {TYPE_1__* fsc; scalar_t__ stopping; } ;
struct TYPE_2__ {int cap_wq; } ;


 int FUNC_0 (struct ceph_mds_session*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct ceph_mds_session*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

void FUNC_4(struct ceph_mds_client *VAR_0,
               struct ceph_mds_session *VAR_1)
{
 if (VAR_0->stopping)
  return;

 FUNC_2(VAR_1);
 if (FUNC_3(VAR_0->fsc->cap_wq,
         &VAR_1->s_cap_release_work)) {
  FUNC_1("cap release work queued\n");
 } else {
  FUNC_0(VAR_1);
  FUNC_1("failed to queue cap release work\n");
 }
}
