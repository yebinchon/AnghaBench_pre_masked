
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct nilfs_segment_buffer {scalar_t__ sb_nbio; int sb_err; int sb_bio_event; int * sb_super_root; int sb_payload_buffers; int sb_segsum_buffers; int sb_list; struct super_block* sb_super; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 struct nilfs_segment_buffer* FUNC_3 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int) ;

struct nilfs_segment_buffer *FUNC_5(struct super_block *VAR_2)
{
 struct nilfs_segment_buffer *VAR_3;

 VAR_3 = FUNC_3(VAR_1, VAR_0);
 if (FUNC_4(!VAR_3))
  return ((void*)0);

 VAR_3->sb_super = VAR_2;
 FUNC_0(&VAR_3->sb_list);
 FUNC_0(&VAR_3->sb_segsum_buffers);
 FUNC_0(&VAR_3->sb_payload_buffers);
 VAR_3->sb_super_root = ((void*)0);

 FUNC_2(&VAR_3->sb_bio_event);
 FUNC_1(&VAR_3->sb_err, 0);
 VAR_3->sb_nbio = 0;

 return VAR_3;
}
