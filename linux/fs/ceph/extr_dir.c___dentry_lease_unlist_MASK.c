
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ceph_mds_client {int dentry_list_lock; } ;
struct ceph_dentry_info {int flags; int lease_list; TYPE_1__* dentry; } ;
struct TYPE_4__ {struct ceph_mds_client* mdsc; } ;
struct TYPE_3__ {int d_sb; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ceph_dentry_info *VAR_1)
{
 struct ceph_mds_client *VAR_2;
 if (VAR_1->flags & VAR_0)
  return;
 if (FUNC_2(&VAR_1->lease_list))
  return;

 VAR_2 = FUNC_0(VAR_1->dentry->d_sb)->mdsc;
 FUNC_3(&VAR_2->dentry_list_lock);
 FUNC_1(&VAR_1->lease_list);
 FUNC_4(&VAR_2->dentry_list_lock);
}
