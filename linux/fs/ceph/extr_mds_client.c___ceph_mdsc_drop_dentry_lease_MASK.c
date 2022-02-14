
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;
struct ceph_dentry_info {int * lease_session; } ;


 struct ceph_dentry_info* FUNC_0 (struct dentry*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct dentry *VAR_0)
{
 struct ceph_dentry_info *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->lease_session);
 VAR_1->lease_session = ((void*)0);
}
