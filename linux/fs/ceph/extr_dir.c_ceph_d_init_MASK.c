
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {struct ceph_dentry_info* d_fsdata; } ;
struct ceph_dentry_info {int lease_list; int time; int * lease_session; struct dentry* dentry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 struct ceph_dentry_info* FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct dentry *VAR_4)
{
 struct ceph_dentry_info *VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->dentry = VAR_4;
 VAR_5->lease_session = ((void*)0);
 VAR_5->time = VAR_3;
 VAR_4->d_fsdata = VAR_5;
 FUNC_0(&VAR_5->lease_list);
 return 0;
}
