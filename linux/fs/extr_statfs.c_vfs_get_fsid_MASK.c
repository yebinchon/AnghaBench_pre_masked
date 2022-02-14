
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kstatfs {int f_fsid; } ;
struct dentry {int dummy; } ;
typedef int __kernel_fsid_t ;


 int FUNC_0 (struct dentry*,struct kstatfs*) ;

int FUNC_1(struct dentry *VAR_0, __kernel_fsid_t *VAR_1)
{
 struct kstatfs VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, &VAR_2);
 if (VAR_3)
  return VAR_3;

 *VAR_1 = VAR_2.f_fsid;
 return 0;
}
