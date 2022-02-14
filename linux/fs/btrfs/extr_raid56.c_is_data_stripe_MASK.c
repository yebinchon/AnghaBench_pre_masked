
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_raid_bio {int nr_data; } ;



__attribute__((used)) static inline int FUNC_0(struct btrfs_raid_bio *VAR_0, int VAR_1)
{
 if (VAR_1 >= 0 && VAR_1 < VAR_0->nr_data)
  return 1;
 return 0;
}
