
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ocfs2_super {TYPE_2__* sb; int fs_generation; int slot_num; } ;
struct ocfs2_per_slot_free_list {int free_bit; int f_next_suballocator; struct ocfs2_per_slot_free_list* f_first; int free_bg; int free_blk; struct ocfs2_per_slot_free_list* free_next; } ;
struct ocfs2_extent_tree {int et_ci; struct ocfs2_cached_dealloc_ctxt* et_dealloc; } ;
struct TYPE_4__ {void* l_count; } ;
struct ocfs2_extent_block {TYPE_1__ h_list; void* h_suballoc_bit; void* h_suballoc_loc; void* h_suballoc_slot; int h_fs_generation; void* h_blkno; int h_signature; } ;
struct ocfs2_cached_dealloc_ctxt {int c_first_suballocator; } ;
struct ocfs2_cached_block_free {int free_bit; int f_next_suballocator; struct ocfs2_cached_block_free* f_first; int free_bg; int free_blk; struct ocfs2_cached_block_free* free_next; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_5__ {int s_blocksize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ocfs2_super* FUNC_0 (int ) ;
 int FUNC_1 (struct buffer_head*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct ocfs2_per_slot_free_list*) ;
 int FUNC_6 (scalar_t__,int ,int ) ;
 int FUNC_7 (int ,char*,int ,int ,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (TYPE_2__*) ;
 struct ocfs2_per_slot_free_list* FUNC_10 (int ,int ,int*,struct ocfs2_cached_dealloc_ctxt*) ;
 int FUNC_11 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_12 (int *,struct buffer_head*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,struct buffer_head*) ;
 struct buffer_head* FUNC_15 (TYPE_2__*,int ) ;
 int FUNC_16 (int ,int ) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static int FUNC_18(handle_t *VAR_4,
     struct ocfs2_extent_tree *VAR_5,
     struct buffer_head **VAR_6,
     int VAR_7, int *VAR_8)
{
 int VAR_9, VAR_10 = 0, VAR_11;
 struct ocfs2_cached_dealloc_ctxt *VAR_12;
 struct ocfs2_per_slot_free_list *VAR_13;
 struct ocfs2_cached_block_free *VAR_14;
 struct ocfs2_extent_block *VAR_15;
 struct ocfs2_super *VAR_16 =
  FUNC_0(FUNC_13(VAR_5->et_ci));

 *VAR_8 = 0;





 VAR_12 = VAR_5->et_dealloc;
 if (!VAR_12)
  goto bail;

 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {

  VAR_13 = FUNC_10(VAR_1,
          VAR_16->slot_num, &VAR_11,
          VAR_12);



  if (!VAR_13) {
   VAR_10 = 0;
   break;
  }

  VAR_14 = VAR_13->f_first;
  VAR_13->f_first = VAR_14->free_next;

  VAR_6[VAR_9] = FUNC_15(VAR_16->sb, VAR_14->free_blk);
  if (VAR_6[VAR_9] == ((void*)0)) {
   VAR_10 = -VAR_0;
   FUNC_8(VAR_10);
   goto bail;
  }

  FUNC_7(0, "Reusing block(%llu) from "
       "dealloc(local slot:%d, real slot:%d)\n",
       VAR_14->free_blk, VAR_16->slot_num, VAR_11);

  FUNC_14(VAR_5->et_ci, VAR_6[VAR_9]);

  VAR_10 = FUNC_11(VAR_4, VAR_5->et_ci,
       VAR_6[VAR_9],
       VAR_3);
  if (VAR_10 < 0) {
   FUNC_8(VAR_10);
   goto bail;
  }

  FUNC_6(VAR_6[VAR_9]->b_data, 0, VAR_16->sb->s_blocksize);
  VAR_15 = (struct ocfs2_extent_block *) VAR_6[VAR_9]->b_data;




  FUNC_16(VAR_15->h_signature, VAR_2);
  VAR_15->h_blkno = FUNC_4(VAR_14->free_blk);
  VAR_15->h_fs_generation = FUNC_3(VAR_16->fs_generation);
  VAR_15->h_suballoc_slot = FUNC_2(VAR_11);
  VAR_15->h_suballoc_loc = FUNC_4(VAR_14->free_bg);
  VAR_15->h_suballoc_bit = FUNC_2(VAR_14->free_bit);
  VAR_15->h_list.l_count =
   FUNC_2(FUNC_9(VAR_16->sb));




  FUNC_12(VAR_4, VAR_6[VAR_9]);

  if (!VAR_13->f_first) {
   VAR_12->c_first_suballocator = VAR_13->f_next_suballocator;
   FUNC_5(VAR_13);
  }
  FUNC_5(VAR_14);
 }

 *VAR_8 = VAR_9;

bail:
 if (FUNC_17(VAR_10 < 0)) {
  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
   FUNC_1(VAR_6[VAR_9]);
 }

 return VAR_10;
}
