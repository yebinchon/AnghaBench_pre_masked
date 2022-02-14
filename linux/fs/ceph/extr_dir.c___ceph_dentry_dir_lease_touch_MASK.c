
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int d_sb; } ;
struct ceph_mds_client {int dentry_list_lock; } ;
struct ceph_dentry_info {int flags; int lease_list; int offset; struct dentry* dentry; } ;
typedef struct ceph_mds_client* mdsc ;
typedef struct ceph_dentry_info* di ;
struct TYPE_2__ {struct ceph_mds_client* mdsc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ceph_mds_client*,struct ceph_dentry_info*) ;
 scalar_t__ FUNC_1 (struct ceph_dentry_info*) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (char*,struct ceph_dentry_info*,struct dentry*,struct dentry*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct ceph_dentry_info *VAR_3)
{
 struct dentry *VAR_4 = VAR_3->dentry;
 struct ceph_mds_client *VAR_5;

 FUNC_3("dentry_dir_lease_touch %p %p '%pd' (offset %lld)\n",
      VAR_3, VAR_4, VAR_4, VAR_3->offset);

 if (!FUNC_4(&VAR_3->lease_list)) {
  if (VAR_3->flags & VAR_0) {


   if (FUNC_1(VAR_3))
    return;
  } else {
   VAR_3->flags |= VAR_1;
   return;
  }
 }

 if (VAR_3->flags & VAR_2) {
  VAR_3->flags |= VAR_1;
  VAR_3->flags &= ~VAR_0;
  return;
 }

 VAR_5 = FUNC_2(VAR_4->d_sb)->mdsc;
 FUNC_5(&VAR_5->dentry_list_lock);
 FUNC_0(VAR_5, VAR_3),
 FUNC_6(&VAR_5->dentry_list_lock);
}
