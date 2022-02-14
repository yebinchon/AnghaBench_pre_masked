
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ocfs2_cached_dealloc_ctxt {struct ocfs2_cached_block_free* c_global_allocator; } ;
struct ocfs2_cached_block_free {unsigned int free_bit; struct ocfs2_cached_block_free* free_next; scalar_t__ free_blk; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ocfs2_cached_block_free* FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned long long,unsigned int) ;

int FUNC_3(struct ocfs2_cached_dealloc_ctxt *VAR_2,
    u64 VAR_3, unsigned int VAR_4)
{
 int VAR_5 = 0;
 struct ocfs2_cached_block_free *VAR_6;

 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_1);
 if (VAR_6 == ((void*)0)) {
  VAR_5 = -VAR_0;
  FUNC_1(VAR_5);
  return VAR_5;
 }

 FUNC_2((unsigned long long)VAR_3, VAR_4);

 VAR_6->free_blk = VAR_3;
 VAR_6->free_bit = VAR_4;
 VAR_6->free_next = VAR_2->c_global_allocator;

 VAR_2->c_global_allocator = VAR_6;
 return VAR_5;
}
