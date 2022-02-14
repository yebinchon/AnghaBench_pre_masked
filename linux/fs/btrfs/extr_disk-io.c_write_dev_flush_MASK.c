
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int queue_flags; } ;
struct btrfs_device {int dev_state; int flush_wait; int bdev; struct bio* flush_bio; } ;
struct bio {int bi_opf; int * bi_private; int bi_end_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct request_queue* FUNC_0 (int ) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*,int ) ;
 int VAR_5 ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct btrfs_device *VAR_6)
{
 struct request_queue *VAR_7 = FUNC_0(VAR_6->bdev);
 struct bio *VAR_8 = VAR_6->flush_bio;

 if (!FUNC_6(VAR_1, &VAR_7->queue_flags))
  return;

 FUNC_1(VAR_8);
 VAR_8->bi_end_io = VAR_5;
 FUNC_2(VAR_8, VAR_6->bdev);
 VAR_8->bi_opf = VAR_2 | VAR_4 | VAR_3;
 FUNC_4(&VAR_6->flush_wait);
 VAR_8->bi_private = &VAR_6->flush_wait;

 FUNC_3(VAR_8);
 FUNC_5(VAR_0, &VAR_6->dev_state);
}
