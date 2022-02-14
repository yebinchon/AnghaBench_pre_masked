
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mds_client {int caps_total_count; int caps_avail_count; int caps_use_count; int caps_reserve_count; int caps_min_count; int caps_list_lock; } ;
struct ceph_fs_client {struct ceph_mds_client* mdsc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct ceph_fs_client *VAR_0,
        int *VAR_1, int *VAR_2, int *VAR_3, int *VAR_4,
        int *VAR_5)
{
 struct ceph_mds_client *VAR_6 = VAR_0->mdsc;

 FUNC_0(&VAR_6->caps_list_lock);

 if (VAR_1)
  *VAR_1 = VAR_6->caps_total_count;
 if (VAR_2)
  *VAR_2 = VAR_6->caps_avail_count;
 if (VAR_3)
  *VAR_3 = VAR_6->caps_use_count;
 if (VAR_4)
  *VAR_4 = VAR_6->caps_reserve_count;
 if (VAR_5)
  *VAR_5 = VAR_6->caps_min_count;

 FUNC_1(&VAR_6->caps_list_lock);
}
