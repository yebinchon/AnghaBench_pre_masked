
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_write_info {scalar_t__ nr_vecs; scalar_t__ end; scalar_t__ bio; scalar_t__ blocknr; int nilfs; } ;
struct nilfs_segment_buffer {int dummy; } ;
struct buffer_head {int b_size; int b_page; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (scalar_t__,int ,int,int ) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct nilfs_segment_buffer*,struct nilfs_write_info*,int,int ) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct nilfs_segment_buffer *VAR_1,
      struct nilfs_write_info *VAR_2,
      struct buffer_head *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;

 FUNC_0(VAR_2->nr_vecs <= 0);
 repeat:
 if (!VAR_2->bio) {
  VAR_2->bio = FUNC_4(VAR_2->nilfs, VAR_2->blocknr + VAR_2->end,
           VAR_2->nr_vecs);
  if (FUNC_6(!VAR_2->bio))
   return -VAR_0;
 }

 VAR_5 = FUNC_2(VAR_2->bio, VAR_3->b_page, VAR_3->b_size, FUNC_1(VAR_3));
 if (VAR_5 == VAR_3->b_size) {
  VAR_2->end++;
  return 0;
 }

 VAR_6 = FUNC_5(VAR_1, VAR_2, VAR_4, 0);

 if (FUNC_3(!VAR_6))
  goto repeat;
 return VAR_6;
}
