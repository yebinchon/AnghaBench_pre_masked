
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mds_client {int caps_list_lock; int caps_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct ceph_mds_client *VAR_0)
{
 FUNC_0(&VAR_0->caps_list);
 FUNC_1(&VAR_0->caps_list_lock);
}
