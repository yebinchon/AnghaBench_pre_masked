
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_raid_bio {int dummy; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_raid_bio*,int) ;
 int FUNC_1 (struct btrfs_raid_bio*,struct bio*) ;

__attribute__((used)) static int FUNC_2(struct btrfs_raid_bio *VAR_1,
      struct bio *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_1, VAR_2);

 if (VAR_3 < 0)
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_3);
}
