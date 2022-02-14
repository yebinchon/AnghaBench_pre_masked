
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_fs_info {int workers; } ;
struct bio {int bi_opf; } ;
struct async_submit_bio {int mirror_num; int work; scalar_t__ status; int bio_offset; int * submit_bio_start; struct bio* bio; void* private_data; } ;
typedef int extent_submit_bio_start_t ;
typedef int blk_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 struct async_submit_bio* FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

blk_status_t FUNC_5(struct btrfs_fs_info *VAR_6, struct bio *VAR_7,
     int VAR_8, unsigned long VAR_9,
     u64 VAR_10, void *VAR_11,
     extent_submit_bio_start_t *VAR_12)
{
 struct async_submit_bio *VAR_13;

 VAR_13 = FUNC_3(sizeof(*VAR_13), VAR_1);
 if (!VAR_13)
  return VAR_0;

 VAR_13->private_data = VAR_11;
 VAR_13->bio = VAR_7;
 VAR_13->mirror_num = VAR_8;
 VAR_13->submit_bio_start = VAR_12;

 FUNC_0(&VAR_13->work, VAR_2, VAR_5,
   VAR_3, VAR_4);

 VAR_13->bio_offset = VAR_10;

 VAR_13->status = 0;

 if (FUNC_4(VAR_7->bi_opf))
  FUNC_2(&VAR_13->work);

 FUNC_1(VAR_6->workers, &VAR_13->work);
 return 0;
}
