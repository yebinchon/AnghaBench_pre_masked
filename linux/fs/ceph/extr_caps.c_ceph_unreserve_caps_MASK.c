
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mds_client {scalar_t__ caps_use_max; scalar_t__ caps_use_count; int caps_list_lock; } ;
struct ceph_cap_reservation {int used; scalar_t__ count; } ;


 int FUNC_0 (struct ceph_mds_client*,scalar_t__) ;
 int FUNC_1 (struct ceph_mds_client*,int ) ;
 int FUNC_2 (char*,struct ceph_cap_reservation*,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct ceph_mds_client *VAR_0,
    struct ceph_cap_reservation *VAR_1)
{
 bool VAR_2 = 0;
 if (!VAR_1->count)
  return;

 FUNC_2("unreserve caps ctx=%p count=%d\n", VAR_1, VAR_1->count);
 FUNC_3(&VAR_0->caps_list_lock);
 FUNC_0(VAR_0, VAR_1->count);
 VAR_1->count = 0;

 if (VAR_0->caps_use_max > 0 &&
     VAR_0->caps_use_count > VAR_0->caps_use_max)
  VAR_2 = 1;
 FUNC_4(&VAR_0->caps_list_lock);

 if (VAR_2)
  FUNC_1(VAR_0, VAR_1->used);
}
