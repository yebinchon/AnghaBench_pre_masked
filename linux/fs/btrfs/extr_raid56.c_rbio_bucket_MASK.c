
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct btrfs_raid_bio {TYPE_1__* bbio; } ;
struct TYPE_2__ {int* raid_map; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct btrfs_raid_bio *VAR_1)
{
 u64 VAR_2 = VAR_1->bbio->raid_map[0];
 return FUNC_0(VAR_2 >> 16, VAR_0);
}
