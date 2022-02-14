
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ceph_options {int mount_timeout; } ;
struct ceph_mds_request {int r_wait; int r_tid; } ;
struct ceph_mds_client {int mutex; int safe_umount_waiters; TYPE_2__* fsc; } ;
struct TYPE_4__ {TYPE_1__* client; } ;
struct TYPE_3__ {struct ceph_options* options; } ;


 struct ceph_mds_request* FUNC_0 (struct ceph_mds_client*) ;
 int FUNC_1 (struct ceph_mds_client*,struct ceph_mds_request*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static void FUNC_8(struct ceph_mds_client *VAR_0)
{
 struct ceph_options *VAR_1 = VAR_0->fsc->client->options;
 struct ceph_mds_request *VAR_2;

 FUNC_5(&VAR_0->mutex);
 if (FUNC_0(VAR_0)) {
  FUNC_6(&VAR_0->mutex);

  FUNC_3("wait_requests waiting for requests\n");
  FUNC_7(&VAR_0->safe_umount_waiters,
        FUNC_2(VAR_1->mount_timeout));


  FUNC_5(&VAR_0->mutex);
  while ((VAR_2 = FUNC_0(VAR_0))) {
   FUNC_3("wait_requests timed out on tid %llu\n",
        VAR_2->r_tid);
   FUNC_4(&VAR_2->r_wait);
   FUNC_1(VAR_0, VAR_2);
  }
 }
 FUNC_6(&VAR_0->mutex);
 FUNC_3("wait_requests done\n");
}
