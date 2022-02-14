
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_raid_bio {int stripe_npages; } ;



__attribute__((used)) static int FUNC_0(struct btrfs_raid_bio *VAR_0, int VAR_1,
      int VAR_2)
{
 return VAR_1 * VAR_0->stripe_npages + VAR_2;
}
