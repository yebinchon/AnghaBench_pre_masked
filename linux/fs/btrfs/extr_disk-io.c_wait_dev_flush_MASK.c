
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_device {int flush_wait; int dev_state; struct bio* flush_bio; } ;
struct bio {int bi_status; } ;
typedef int blk_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static blk_status_t FUNC_3(struct btrfs_device *VAR_2)
{
 struct bio *VAR_3 = VAR_2->flush_bio;

 if (!FUNC_1(VAR_1, &VAR_2->dev_state))
  return VAR_0;

 FUNC_0(VAR_1, &VAR_2->dev_state);
 FUNC_2(&VAR_2->flush_wait);

 return VAR_3->bi_status;
}
