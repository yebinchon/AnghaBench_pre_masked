
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef enum btrfs_raid_types { ____Placeholder_btrfs_raid_types } btrfs_raid_types ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static inline enum btrfs_raid_types FUNC_0(u64 VAR_13)
{
 if (VAR_13 & VAR_3)
  return VAR_9;
 else if (VAR_13 & VAR_2)
  return VAR_8;
 else if (VAR_13 & VAR_0)
  return VAR_6;
 else if (VAR_13 & VAR_1)
  return VAR_7;
 else if (VAR_13 & VAR_4)
  return VAR_10;
 else if (VAR_13 & VAR_5)
  return VAR_11;

 return VAR_12;
}
