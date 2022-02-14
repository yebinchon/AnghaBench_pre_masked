
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;
struct ceph_dentry_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct ceph_dentry_info*) ;
 int FUNC_1 (struct dentry*) ;
 struct ceph_dentry_info* FUNC_2 (struct dentry*) ;

__attribute__((used)) static int FUNC_3(struct dentry *VAR_5, void *VAR_6)
{
 struct ceph_dentry_info *VAR_7 = FUNC_2(VAR_5);
 int VAR_8;

 if (FUNC_0(VAR_7))
  return VAR_3;
 VAR_8 = FUNC_1(VAR_5);
 if (VAR_8 == -VAR_1)
  return VAR_2;
 if (VAR_8 > 0)
  return VAR_4;
 return VAR_0;
}
