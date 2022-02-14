
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_last_segment_lock; int ns_last_cno; int ns_last_pseg; int ns_last_seq; } ;
struct nilfs_super_block {void* s_last_cno; void* s_last_pseg; void* s_last_seq; void* s_free_blocks_count; } ;
typedef int sector_t ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (struct the_nilfs*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct nilfs_super_block *VAR_0,
     struct the_nilfs *VAR_1)
{
 sector_t VAR_2;


 FUNC_1(VAR_1, &VAR_2);
 VAR_0->s_free_blocks_count = FUNC_0(VAR_2);

 FUNC_2(&VAR_1->ns_last_segment_lock);
 VAR_0->s_last_seq = FUNC_0(VAR_1->ns_last_seq);
 VAR_0->s_last_pseg = FUNC_0(VAR_1->ns_last_pseg);
 VAR_0->s_last_cno = FUNC_0(VAR_1->ns_last_cno);
 FUNC_3(&VAR_1->ns_last_segment_lock);
}
