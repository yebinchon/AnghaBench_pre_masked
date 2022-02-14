
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_lock; } ;
struct ceph_dentry_info {scalar_t__ lease_shared_gen; int time; } ;


 int FUNC_0 (struct ceph_dentry_info*) ;
 struct ceph_dentry_info* FUNC_1 (struct dentry*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct dentry *VAR_1)
{
 struct ceph_dentry_info *VAR_2 = FUNC_1(VAR_1);
 FUNC_2(&VAR_1->d_lock);
 VAR_2->time = VAR_0;
 VAR_2->lease_shared_gen = 0;
 FUNC_0(VAR_2);
 FUNC_3(&VAR_1->d_lock);
}
