
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_raid_bio {unsigned long bio_list_bytes; unsigned long nr_data; unsigned long stripe_len; int bio_list_lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct btrfs_raid_bio *VAR_0)
{
 unsigned long VAR_1;
 unsigned long VAR_2 = VAR_0->bio_list_bytes;
 int VAR_3 = 1;

 FUNC_1(&VAR_0->bio_list_lock, VAR_1);
 if (VAR_2 != VAR_0->nr_data * VAR_0->stripe_len)
  VAR_3 = 0;
 FUNC_0(VAR_2 > VAR_0->nr_data * VAR_0->stripe_len);
 FUNC_2(&VAR_0->bio_list_lock, VAR_1);

 return VAR_3;
}
