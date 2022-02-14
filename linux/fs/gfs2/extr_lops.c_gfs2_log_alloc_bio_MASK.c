
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct super_block {int s_blocksize; int s_bdev; } ;
struct gfs2_sbd {struct super_block* sd_vfs; } ;
struct TYPE_2__ {int bi_sector; } ;
struct bio {struct gfs2_sbd* bi_private; int * bi_end_io; TYPE_1__ bi_iter; } ;
typedef int bio_end_io_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct bio* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct bio*,int ) ;

__attribute__((used)) static struct bio *FUNC_2(struct gfs2_sbd *VAR_2, u64 VAR_3,
          bio_end_io_t *VAR_4)
{
 struct super_block *VAR_5 = VAR_2->sd_vfs;
 struct bio *VAR_6 = FUNC_0(VAR_1, VAR_0);

 VAR_6->bi_iter.bi_sector = VAR_3 * (VAR_5->s_blocksize >> 9);
 FUNC_1(VAR_6, VAR_5->s_bdev);
 VAR_6->bi_end_io = VAR_4;
 VAR_6->bi_private = VAR_2;

 return VAR_6;
}
