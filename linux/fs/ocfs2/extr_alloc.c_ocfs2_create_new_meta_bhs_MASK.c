
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct ocfs2_super {TYPE_2__* sb; int fs_generation; } ;
struct ocfs2_extent_tree {int et_ci; } ;
struct TYPE_4__ {void* l_count; } ;
struct ocfs2_extent_block {TYPE_1__ h_list; void* h_suballoc_bit; void* h_suballoc_loc; void* h_suballoc_slot; int h_fs_generation; void* h_blkno; int h_signature; } ;
struct ocfs2_alloc_context {int ac_alloc_slot; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_5__ {int s_blocksize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ocfs2_super* FUNC_0 (int ) ;
 int FUNC_1 (struct buffer_head*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,int ,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,struct ocfs2_alloc_context*,int,int *,int *,int*,int *) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_10 (int *,struct buffer_head*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,struct buffer_head*) ;
 struct buffer_head* FUNC_13 (TYPE_2__*,int ) ;
 int FUNC_14 (int ,int ) ;

__attribute__((used)) static int FUNC_15(handle_t *VAR_3,
         struct ocfs2_extent_tree *VAR_4,
         int VAR_5,
         struct ocfs2_alloc_context *VAR_6,
         struct buffer_head *VAR_7[])
{
 int VAR_8, VAR_9, VAR_10;
 u16 VAR_11;
 u32 VAR_12;
 u64 VAR_13, VAR_14;
 struct ocfs2_super *VAR_15 =
  FUNC_0(FUNC_11(VAR_4->et_ci));
 struct ocfs2_extent_block *VAR_16;

 VAR_8 = 0;
 while (VAR_8 < VAR_5) {
  VAR_9 = FUNC_7(VAR_3,
           VAR_6,
           VAR_5 - VAR_8,
           &VAR_13,
           &VAR_11,
           &VAR_12,
           &VAR_14);
  if (VAR_9 < 0) {
   FUNC_6(VAR_9);
   goto bail;
  }

  for(VAR_10 = VAR_8; VAR_10 < (VAR_12 + VAR_8); VAR_10++) {
   VAR_7[VAR_10] = FUNC_13(VAR_15->sb, VAR_14);
   if (VAR_7[VAR_10] == ((void*)0)) {
    VAR_9 = -VAR_0;
    FUNC_6(VAR_9);
    goto bail;
   }
   FUNC_12(VAR_4->et_ci, VAR_7[VAR_10]);

   VAR_9 = FUNC_9(VAR_3, VAR_4->et_ci,
        VAR_7[VAR_10],
        VAR_2);
   if (VAR_9 < 0) {
    FUNC_6(VAR_9);
    goto bail;
   }

   FUNC_5(VAR_7[VAR_10]->b_data, 0, VAR_15->sb->s_blocksize);
   VAR_16 = (struct ocfs2_extent_block *) VAR_7[VAR_10]->b_data;

   FUNC_14(VAR_16->h_signature, VAR_1);
   VAR_16->h_blkno = FUNC_4(VAR_14);
   VAR_16->h_fs_generation = FUNC_3(VAR_15->fs_generation);
   VAR_16->h_suballoc_slot =
    FUNC_2(VAR_6->ac_alloc_slot);
   VAR_16->h_suballoc_loc = FUNC_4(VAR_13);
   VAR_16->h_suballoc_bit = FUNC_2(VAR_11);
   VAR_16->h_list.l_count =
    FUNC_2(FUNC_8(VAR_15->sb));

   VAR_11++;
   VAR_14++;



   FUNC_10(VAR_3, VAR_7[VAR_10]);
  }

  VAR_8 += VAR_12;
 }

 VAR_9 = 0;
bail:
 if (VAR_9 < 0) {
  for(VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
   FUNC_1(VAR_7[VAR_10]);
   VAR_7[VAR_10] = ((void*)0);
  }
  FUNC_6(VAR_9);
 }
 return VAR_9;
}
