
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_lock; int * d_fsdata; } ;
struct ceph_dentry_info {scalar_t__ lease_session; } ;


 int FUNC_0 (struct ceph_dentry_info*) ;
 struct ceph_dentry_info* FUNC_1 (struct dentry*) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,struct dentry*) ;
 int FUNC_4 (int ,struct ceph_dentry_info*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct dentry *VAR_1)
{
 struct ceph_dentry_info *VAR_2 = FUNC_1(VAR_1);

 FUNC_3("d_release %p\n", VAR_1);

 FUNC_5(&VAR_1->d_lock);
 FUNC_0(VAR_2);
 VAR_1->d_fsdata = ((void*)0);
 FUNC_6(&VAR_1->d_lock);

 if (VAR_2->lease_session)
  FUNC_2(VAR_2->lease_session);
 FUNC_4(VAR_0, VAR_2);
}
