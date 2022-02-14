
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_device_info {scalar_t__ max_avail; } ;



__attribute__((used)) static inline int FUNC_0(const void *VAR_0,
           const void *VAR_1)
{
 if (((struct btrfs_device_info *)VAR_0)->max_avail >
     ((struct btrfs_device_info *)VAR_1)->max_avail)
  return -1;
 else if (((struct btrfs_device_info *)VAR_0)->max_avail <
   ((struct btrfs_device_info *)VAR_1)->max_avail)
  return 1;
 else
 return 0;
}
