
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_segment_buffer {int * sb_super_root; int sb_payload_buffers; int sb_segsum_buffers; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct nilfs_segment_buffer *VAR_0)
{
 FUNC_0(&VAR_0->sb_segsum_buffers);
 FUNC_0(&VAR_0->sb_payload_buffers);
 VAR_0->sb_super_root = ((void*)0);
}
