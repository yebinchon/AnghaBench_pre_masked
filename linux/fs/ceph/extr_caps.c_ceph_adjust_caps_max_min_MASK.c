
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mount_options {int max_readdir; int caps_max; } ;
struct ceph_mds_client {int caps_min_count; int caps_use_max; int caps_list_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct ceph_mds_client *VAR_0,
         struct ceph_mount_options *VAR_1)
{
 FUNC_0(&VAR_0->caps_list_lock);
 VAR_0->caps_min_count = VAR_1->max_readdir;
 if (VAR_0->caps_min_count < 1024)
  VAR_0->caps_min_count = 1024;
 VAR_0->caps_use_max = VAR_1->caps_max;
 if (VAR_0->caps_use_max > 0 &&
     VAR_0->caps_use_max < VAR_0->caps_min_count)
  VAR_0->caps_use_max = VAR_0->caps_min_count;
 FUNC_1(&VAR_0->caps_list_lock);
}
