
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mds_client {scalar_t__ caps_total_count; scalar_t__ caps_use_count; scalar_t__ caps_reserve_count; scalar_t__ caps_avail_count; scalar_t__ caps_min_count; int caps_list_lock; int caps_list; } ;
struct ceph_cap {int caps_item; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,struct ceph_cap*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,struct ceph_cap*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct ceph_mds_client *VAR_1, struct ceph_cap *VAR_2)
{
 FUNC_4(&VAR_1->caps_list_lock);
 FUNC_1("put_cap %p %d = %d used + %d resv + %d avail\n",
      VAR_2, VAR_1->caps_total_count, VAR_1->caps_use_count,
      VAR_1->caps_reserve_count, VAR_1->caps_avail_count);
 VAR_1->caps_use_count--;




 if (VAR_1->caps_avail_count >= VAR_1->caps_reserve_count +
          VAR_1->caps_min_count) {
  VAR_1->caps_total_count--;
  FUNC_2(VAR_0, VAR_2);
 } else {
  VAR_1->caps_avail_count++;
  FUNC_3(&VAR_2->caps_item, &VAR_1->caps_list);
 }

 FUNC_0(VAR_1->caps_total_count != VAR_1->caps_use_count +
        VAR_1->caps_reserve_count + VAR_1->caps_avail_count);
 FUNC_5(&VAR_1->caps_list_lock);
}
