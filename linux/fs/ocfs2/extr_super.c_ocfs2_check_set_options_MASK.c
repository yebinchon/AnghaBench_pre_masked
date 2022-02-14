
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct mount_options {int mount_opt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct super_block*,int ) ;
 int FUNC_1 (struct super_block*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct super_block *VAR_8,
       struct mount_options *VAR_9)
{
 if (VAR_9->mount_opt & VAR_7 &&
     !FUNC_1(VAR_8,
      VAR_3)) {
  FUNC_2(VAR_0, "User quotas were requested, but this "
       "filesystem does not have the feature enabled.\n");
  return 0;
 }
 if (VAR_9->mount_opt & VAR_4 &&
     !FUNC_1(VAR_8,
      VAR_2)) {
  FUNC_2(VAR_0, "Group quotas were requested, but this "
       "filesystem does not have the feature enabled.\n");
  return 0;
 }
 if (VAR_9->mount_opt & VAR_6 &&
     !FUNC_0(VAR_8, VAR_1)) {
  FUNC_2(VAR_0, "ACL support requested but extended attributes "
       "feature is not enabled\n");
  return 0;
 }

 if (!(VAR_9->mount_opt & (VAR_6 |
        VAR_5))) {
  if (FUNC_0(VAR_8, VAR_1))
   VAR_9->mount_opt |= VAR_6;
  else
   VAR_9->mount_opt |= VAR_5;
 }
 return 1;
}
