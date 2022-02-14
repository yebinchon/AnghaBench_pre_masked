
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_write_info {int blocknr; scalar_t__ end; scalar_t__ start; int rest_blocks; int max_pages; int nr_vecs; int * bio; } ;
struct TYPE_2__ {int nblocks; } ;
struct nilfs_segment_buffer {int sb_pseg_start; TYPE_1__ sb_sum; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct nilfs_segment_buffer *VAR_1,
           struct nilfs_write_info *VAR_2)
{
 VAR_2->bio = ((void*)0);
 VAR_2->rest_blocks = VAR_1->sb_sum.nblocks;
 VAR_2->max_pages = VAR_0;
 VAR_2->nr_vecs = FUNC_0(VAR_2->max_pages, VAR_2->rest_blocks);
 VAR_2->start = VAR_2->end = 0;
 VAR_2->blocknr = VAR_1->sb_pseg_start;
}
