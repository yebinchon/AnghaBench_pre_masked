
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct ocfs2_per_slot_free_list {struct ocfs2_cached_block_free* f_first; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
struct ocfs2_cached_block_free {unsigned int free_bit; struct ocfs2_cached_block_free* free_next; void* free_blk; void* free_bg; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ocfs2_cached_block_free* FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 struct ocfs2_per_slot_free_list* FUNC_2 (int,int,struct ocfs2_cached_dealloc_ctxt*) ;
 int FUNC_3 (int,int,unsigned long long,unsigned long long,unsigned int) ;

int FUNC_4(struct ocfs2_cached_dealloc_ctxt *VAR_2,
         int VAR_3, int VAR_4, u64 VAR_5,
         u64 VAR_6, unsigned int VAR_7)
{
 int VAR_8;
 struct ocfs2_per_slot_free_list *VAR_9;
 struct ocfs2_cached_block_free *VAR_10;

 VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_2);
 if (VAR_9 == ((void*)0)) {
  VAR_8 = -VAR_0;
  FUNC_1(VAR_8);
  goto out;
 }

 VAR_10 = FUNC_0(sizeof(*VAR_10), VAR_1);
 if (VAR_10 == ((void*)0)) {
  VAR_8 = -VAR_0;
  FUNC_1(VAR_8);
  goto out;
 }

 FUNC_3(VAR_3, VAR_4,
     (unsigned long long)VAR_5,
     (unsigned long long)VAR_6, VAR_7);

 VAR_10->free_bg = VAR_5;
 VAR_10->free_blk = VAR_6;
 VAR_10->free_bit = VAR_7;
 VAR_10->free_next = VAR_9->f_first;

 VAR_9->f_first = VAR_10;

 VAR_8 = 0;
out:
 return VAR_8;
}
