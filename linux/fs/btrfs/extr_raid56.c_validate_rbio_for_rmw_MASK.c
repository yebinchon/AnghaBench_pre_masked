
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_raid_bio {scalar_t__ faila; scalar_t__ failb; int real_stripes; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct btrfs_raid_bio*) ;
 int FUNC_2 (struct btrfs_raid_bio*) ;

__attribute__((used)) static void FUNC_3(struct btrfs_raid_bio *VAR_0)
{
 if (VAR_0->faila >= 0 || VAR_0->failb >= 0) {
  FUNC_0(VAR_0->faila == VAR_0->real_stripes - 1);
  FUNC_1(VAR_0);
 } else {
  FUNC_2(VAR_0);
 }
}
