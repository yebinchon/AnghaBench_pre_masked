
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_fs_info {int dummy; } ;
typedef enum btrfs_feature_set { ____Placeholder_btrfs_feature_set } btrfs_feature_set ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int) ;
 char* FUNC_1 (int,int) ;
 int FUNC_2 (struct btrfs_fs_info*,char*,char const*,...) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char) ;

__attribute__((used)) static int FUNC_5(struct btrfs_fs_info *VAR_2,
         enum btrfs_feature_set VAR_3,
         u64 VAR_4, u64 VAR_5, u64 VAR_6,
         u64 VAR_7, u64 VAR_8)
{
 const char *VAR_9 = FUNC_0(VAR_3);
 char *VAR_10;
 u64 VAR_11, VAR_12;
 u64 VAR_13 = VAR_5 & VAR_4;
 u64 VAR_14 = ~VAR_5 & VAR_4;

 VAR_12 = VAR_13 & ~VAR_6;
 if (VAR_12) {
  VAR_10 = FUNC_1(VAR_3, VAR_12);
  if (VAR_10) {
   FUNC_2(VAR_2,
       "this kernel does not support the %s feature bit%s",
       VAR_10, FUNC_4(VAR_10, ',') ? "s" : "");
   FUNC_3(VAR_10);
  } else
   FUNC_2(VAR_2,
       "this kernel does not support %s bits 0x%llx",
       VAR_9, VAR_12);
  return -VAR_0;
 }

 VAR_11 = VAR_13 & ~VAR_7;
 if (VAR_11) {
  VAR_10 = FUNC_1(VAR_3, VAR_11);
  if (VAR_10) {
   FUNC_2(VAR_2,
       "can't set the %s feature bit%s while mounted",
       VAR_10, FUNC_4(VAR_10, ',') ? "s" : "");
   FUNC_3(VAR_10);
  } else
   FUNC_2(VAR_2,
       "can't set %s bits 0x%llx while mounted",
       VAR_9, VAR_11);
  return -VAR_1;
 }

 VAR_11 = VAR_14 & ~VAR_8;
 if (VAR_11) {
  VAR_10 = FUNC_1(VAR_3, VAR_11);
  if (VAR_10) {
   FUNC_2(VAR_2,
       "can't clear the %s feature bit%s while mounted",
       VAR_10, FUNC_4(VAR_10, ',') ? "s" : "");
   FUNC_3(VAR_10);
  } else
   FUNC_2(VAR_2,
       "can't clear %s bits 0x%llx while mounted",
       VAR_9, VAR_11);
  return -VAR_1;
 }

 return 0;
}
