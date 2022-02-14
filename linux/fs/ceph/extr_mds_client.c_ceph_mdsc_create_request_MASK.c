
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timespec64 {int dummy; } ;
struct ceph_mds_request {int r_resend_mds; int r_fmode; int r_op; int r_direct_mode; int r_stamp; int r_unsafe_item; int r_safe_completion; int r_completion; int r_wait; int r_node; int r_kref; int r_unsafe_target_item; int r_unsafe_dir_item; int r_started; struct ceph_mds_client* r_mdsc; int r_fill_mutex; } ;
struct ceph_mds_client {TYPE_2__* fsc; } ;
struct TYPE_4__ {TYPE_1__* sb; } ;
struct TYPE_3__ {int s_time_gran; } ;


 int VAR_0 ;
 struct ceph_mds_request* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct timespec64*) ;
 struct ceph_mds_request* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct timespec64,int ) ;

struct ceph_mds_request *
FUNC_9(struct ceph_mds_client *VAR_3, int VAR_4, int VAR_5)
{
 struct ceph_mds_request *VAR_6 = FUNC_6(sizeof(*VAR_6), VAR_1);
 struct timespec64 VAR_7;

 if (!VAR_6)
  return FUNC_0(-VAR_0);

 FUNC_7(&VAR_6->r_fill_mutex);
 VAR_6->r_mdsc = VAR_3;
 VAR_6->r_started = VAR_2;
 VAR_6->r_resend_mds = -1;
 FUNC_1(&VAR_6->r_unsafe_dir_item);
 FUNC_1(&VAR_6->r_unsafe_target_item);
 VAR_6->r_fmode = -1;
 FUNC_4(&VAR_6->r_kref);
 FUNC_2(&VAR_6->r_node);
 FUNC_1(&VAR_6->r_wait);
 FUNC_3(&VAR_6->r_completion);
 FUNC_3(&VAR_6->r_safe_completion);
 FUNC_1(&VAR_6->r_unsafe_item);

 FUNC_5(&VAR_7);
 VAR_6->r_stamp = FUNC_8(VAR_7, VAR_3->fsc->sb->s_time_gran);

 VAR_6->r_op = VAR_4;
 VAR_6->r_direct_mode = VAR_5;
 return VAR_6;
}
