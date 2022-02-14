
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_raid_bio {int faila; int failb; int bio_list_lock; int error; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct btrfs_raid_bio *VAR_1, int VAR_2)
{
 unsigned long VAR_3;
 int VAR_4 = 0;

 FUNC_1(&VAR_1->bio_list_lock, VAR_3);


 if (VAR_1->faila == VAR_2 || VAR_1->failb == VAR_2)
  goto out;

 if (VAR_1->faila == -1) {

  VAR_1->faila = VAR_2;
  FUNC_0(&VAR_1->error);
 } else if (VAR_1->failb == -1) {

  VAR_1->failb = VAR_2;
  FUNC_0(&VAR_1->error);
 } else {
  VAR_4 = -VAR_0;
 }
out:
 FUNC_2(&VAR_1->bio_list_lock, VAR_3);

 return VAR_4;
}
