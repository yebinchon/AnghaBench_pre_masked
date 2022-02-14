
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ceph_mds_client {scalar_t__ caps_use_max; scalar_t__ caps_use_count; TYPE_2__* fsc; int caps_list_lock; } ;
struct ceph_lease_walk_control {int dir_lease; int nr_to_scan; int expire_dir_lease; int dir_lease_ttl; } ;
struct TYPE_4__ {TYPE_1__* mount_options; } ;
struct TYPE_3__ {int caps_wanted_delay_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (struct ceph_mds_client*,struct ceph_lease_walk_control*,int ) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct ceph_mds_client *VAR_5)
{
 struct ceph_lease_walk_control VAR_6;
 unsigned long VAR_7;
 unsigned long VAR_8;

 FUNC_1(&VAR_5->caps_list_lock);
        if (VAR_5->caps_use_max > 0 &&
            VAR_5->caps_use_count > VAR_5->caps_use_max)
  VAR_7 = VAR_5->caps_use_count - VAR_5->caps_use_max;
 else
  VAR_7 = 0;
        FUNC_2(&VAR_5->caps_list_lock);

 VAR_6.dir_lease = 0;
 VAR_6.nr_to_scan = VAR_0 * 2;
 VAR_8 = FUNC_0(VAR_5, &VAR_6, VAR_3);
 if (!VAR_6.nr_to_scan)
  return -VAR_1;

 if (VAR_6.nr_to_scan < VAR_0)
  VAR_6.nr_to_scan = VAR_0;

 VAR_6.dir_lease = 1;
 VAR_6.expire_dir_lease = VAR_8 < VAR_7;
 VAR_6.dir_lease_ttl = VAR_5->fsc->mount_options->caps_wanted_delay_max * VAR_2;
 VAR_8 +=FUNC_0(VAR_5, &VAR_6, VAR_4);
 if (!VAR_6.nr_to_scan)
  return -VAR_1;

 return VAR_8 > 0 ? 1 : 0;
}
