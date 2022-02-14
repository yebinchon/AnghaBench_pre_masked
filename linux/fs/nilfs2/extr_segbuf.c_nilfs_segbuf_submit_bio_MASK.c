
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_write_info {struct bio* bio; scalar_t__ end; scalar_t__ start; int rest_blocks; int max_pages; int nr_vecs; } ;
struct nilfs_segment_buffer {scalar_t__ sb_nbio; int sb_err; int sb_bio_event; TYPE_1__* sb_super; } ;
struct bio {struct nilfs_segment_buffer* bi_private; int bi_end_io; } ;
struct TYPE_2__ {int s_bdi; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct bio*,int,int) ;
 int FUNC_4 (int ,int ) ;
 int VAR_1 ;
 int FUNC_5 (struct bio*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct nilfs_segment_buffer *VAR_2,
       struct nilfs_write_info *VAR_3, int VAR_4,
       int VAR_5)
{
 struct bio *VAR_6 = VAR_3->bio;
 int VAR_7;

 if (VAR_2->sb_nbio > 0 &&
     FUNC_1(VAR_2->sb_super->s_bdi)) {
  FUNC_7(&VAR_2->sb_bio_event);
  VAR_2->sb_nbio--;
  if (FUNC_6(FUNC_0(&VAR_2->sb_err))) {
   FUNC_2(VAR_6);
   VAR_7 = -VAR_0;
   goto failed;
  }
 }

 VAR_6->bi_end_io = VAR_1;
 VAR_6->bi_private = VAR_2;
 FUNC_3(VAR_6, VAR_4, VAR_5);
 FUNC_5(VAR_6);
 VAR_2->sb_nbio++;

 VAR_3->bio = ((void*)0);
 VAR_3->rest_blocks -= VAR_3->end - VAR_3->start;
 VAR_3->nr_vecs = FUNC_4(VAR_3->max_pages, VAR_3->rest_blocks);
 VAR_3->start = VAR_3->end;
 return 0;

 failed:
 VAR_3->bio = ((void*)0);
 return VAR_7;
}
