
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ count; } ;
struct dentry {TYPE_1__ d_lockref; } ;
struct ceph_lease_walk_control {int expire_dir_lease; scalar_t__ dir_lease_ttl; } ;
struct ceph_dentry_info {int flags; scalar_t__ lease_shared_gen; scalar_t__ time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct dentry*) ;
 struct ceph_dentry_info* FUNC_1 (struct dentry*) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct dentry *VAR_7, void *VAR_8)
{
 struct ceph_lease_walk_control *VAR_9 = VAR_8;
 struct ceph_dentry_info *VAR_10 = FUNC_1(VAR_7);

 int VAR_11 = FUNC_0(VAR_7);
 if (VAR_11 == -VAR_2)
  return VAR_3;
 if (VAR_11 > 0) {
  if (FUNC_2(VAR_6, VAR_10->time + VAR_9->dir_lease_ttl))
   return VAR_4;



  if (!VAR_9->expire_dir_lease)
   return VAR_5;
  if (VAR_7->d_lockref.count > 0 ||
      (VAR_10->flags & VAR_0))
   return VAR_5;

  VAR_10->lease_shared_gen = 0;
 }
 return VAR_1;
}
