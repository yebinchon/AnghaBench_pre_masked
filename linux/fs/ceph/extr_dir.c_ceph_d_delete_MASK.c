
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;
struct ceph_dentry_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct ceph_dentry_info*) ;
 scalar_t__ FUNC_1 (struct dentry const*) ;
 struct ceph_dentry_info* FUNC_2 (struct dentry const*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct dentry const*) ;
 scalar_t__ FUNC_5 (struct dentry const*) ;

__attribute__((used)) static int FUNC_6(const struct dentry *VAR_1)
{
 struct ceph_dentry_info *VAR_2;


 if (FUNC_5(VAR_1))
  return 0;
 if (FUNC_3(FUNC_4(VAR_1)) != VAR_0)
  return 0;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2) {
  if (FUNC_0(VAR_2))
   return 0;
  if (FUNC_1(VAR_1))
   return 0;
 }
 return 1;
}
