
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct nilfs_super_block {int s_feature_compat_ro; int s_feature_incompat; } ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct super_block*,int ,char*,unsigned long long) ;
 int FUNC_2 (struct super_block*) ;

int FUNC_3(struct super_block *VAR_4,
          struct nilfs_super_block *VAR_5)
{
 __u64 VAR_6;

 VAR_6 = FUNC_0(VAR_5->s_feature_incompat) &
  ~VAR_3;
 if (VAR_6) {
  FUNC_1(VAR_4, VAR_1,
     "couldn't mount because of unsupported optional features (%llx)",
     (unsigned long long)VAR_6);
  return -VAR_0;
 }
 VAR_6 = FUNC_0(VAR_5->s_feature_compat_ro) &
  ~VAR_2;
 if (!FUNC_2(VAR_4) && VAR_6) {
  FUNC_1(VAR_4, VAR_1,
     "couldn't mount RDWR because of unsupported optional features (%llx)",
     (unsigned long long)VAR_6);
  return -VAR_0;
 }
 return 0;
}
