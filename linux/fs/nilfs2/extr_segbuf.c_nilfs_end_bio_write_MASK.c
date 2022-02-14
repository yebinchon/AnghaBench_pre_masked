
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_segment_buffer {int sb_bio_event; int sb_err; } ;
struct bio {scalar_t__ bi_status; struct nilfs_segment_buffer* bi_private; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct bio *VAR_0)
{
 struct nilfs_segment_buffer *VAR_1 = VAR_0->bi_private;

 if (VAR_0->bi_status)
  FUNC_0(&VAR_1->sb_err);

 FUNC_1(VAR_0);
 FUNC_2(&VAR_1->sb_bio_event);
}
