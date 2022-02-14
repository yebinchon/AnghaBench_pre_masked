
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct btrfs_raid_bio {int nr_data; } ;


 struct page* FUNC_0 (struct btrfs_raid_bio*,int ,int) ;

__attribute__((used)) static struct page *FUNC_1(struct btrfs_raid_bio *VAR_0, int VAR_1)
{
 return FUNC_0(VAR_0, VAR_0->nr_data, VAR_1);
}
