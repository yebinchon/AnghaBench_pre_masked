
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int d_sb; } ;
struct ceph_mds_client {int dentry_list_lock; int dentry_leases; } ;
struct ceph_dentry_info {int flags; int lease_list; struct dentry* dentry; } ;
struct TYPE_2__ {struct ceph_mds_client* mdsc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (char*,struct ceph_dentry_info*,struct dentry*,struct dentry*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct ceph_dentry_info *VAR_3)
{
 struct dentry *VAR_4 = VAR_3->dentry;
 struct ceph_mds_client *VAR_5;

 FUNC_1("dentry_lease_touch %p %p '%pd'\n", VAR_3, VAR_4, VAR_4);

 VAR_3->flags |= VAR_0;
 if (VAR_3->flags & VAR_2) {
  VAR_3->flags |= VAR_1;
  return;
 }

 VAR_5 = FUNC_0(VAR_4->d_sb)->mdsc;
 FUNC_3(&VAR_5->dentry_list_lock);
 FUNC_2(&VAR_3->lease_list, &VAR_5->dentry_leases);
 FUNC_4(&VAR_5->dentry_list_lock);
}
