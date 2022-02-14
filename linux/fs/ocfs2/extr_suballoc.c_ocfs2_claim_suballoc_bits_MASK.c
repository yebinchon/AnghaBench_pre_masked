
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* u64 ;
typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct ocfs2_suballoc_result {void* sr_bg_blkno; } ;
struct TYPE_10__ {int i_chain; } ;
struct TYPE_8__ {int i_total; int i_used; } ;
struct TYPE_9__ {TYPE_2__ bitmap1; } ;
struct ocfs2_dinode {TYPE_4__ id2; TYPE_3__ id1; int i_blkno; } ;
struct ocfs2_chain_list {TYPE_5__* cl_recs; int cl_next_free_rec; } ;
struct ocfs2_alloc_context {scalar_t__ ac_bits_given; scalar_t__ ac_bits_wanted; size_t ac_chain; int ac_disable_chain_relink; void* ac_last_group; TYPE_6__* ac_inode; TYPE_1__* ac_bh; } ;
typedef int handle_t ;
struct TYPE_12__ {int i_sb; } ;
struct TYPE_11__ {int c_free; } ;
struct TYPE_7__ {scalar_t__ b_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct ocfs2_dinode*) ;
 size_t FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*,unsigned long long,scalar_t__,scalar_t__) ;
 size_t FUNC_7 (struct ocfs2_chain_list*) ;
 void* FUNC_8 (struct ocfs2_suballoc_result*) ;
 scalar_t__ FUNC_9 (TYPE_6__*) ;
 int FUNC_10 (struct ocfs2_alloc_context*,int *,scalar_t__,scalar_t__,struct ocfs2_suballoc_result*,size_t*) ;
 int FUNC_11 (struct ocfs2_alloc_context*,int *,scalar_t__,scalar_t__,struct ocfs2_suballoc_result*,size_t*) ;
 int FUNC_12 (size_t) ;

__attribute__((used)) static int FUNC_13(struct ocfs2_alloc_context *VAR_1,
         handle_t *VAR_2,
         u32 VAR_3,
         u32 VAR_4,
         struct ocfs2_suballoc_result *VAR_5)
{
 int VAR_6;
 u16 VAR_7, VAR_8;
 u16 VAR_9 = 0;
 u64 VAR_10 = VAR_1->ac_last_group;
 struct ocfs2_chain_list *VAR_11;
 struct ocfs2_dinode *VAR_12;

 FUNC_0(VAR_1->ac_bits_given >= VAR_1->ac_bits_wanted);
 FUNC_0(VAR_3 > (VAR_1->ac_bits_wanted - VAR_1->ac_bits_given));
 FUNC_0(!VAR_1->ac_bh);

 VAR_12 = (struct ocfs2_dinode *) VAR_1->ac_bh->b_data;



 FUNC_0(!FUNC_1(VAR_12));

 if (FUNC_3(VAR_12->id1.bitmap1.i_used) >=
     FUNC_3(VAR_12->id1.bitmap1.i_total)) {
  VAR_6 = FUNC_6(VAR_1->ac_inode->i_sb,
         "Chain allocator dinode %llu has %u used bits but only %u total\n",
         (unsigned long long)FUNC_4(VAR_12->i_blkno),
         FUNC_3(VAR_12->id1.bitmap1.i_used),
         FUNC_3(VAR_12->id1.bitmap1.i_total));
  goto bail;
 }

 VAR_5->sr_bg_blkno = VAR_10;
 if (VAR_5->sr_bg_blkno) {




  VAR_6 = FUNC_11(VAR_1, VAR_2, VAR_3,
      VAR_4, VAR_5, &VAR_9);
  if (!VAR_6)
   goto set_hint;
  if (VAR_6 < 0 && VAR_6 != -VAR_0) {
   FUNC_5(VAR_6);
   goto bail;
  }
 }

 VAR_11 = (struct ocfs2_chain_list *) &VAR_12->id2.i_chain;

 VAR_7 = FUNC_7(VAR_11);
 VAR_1->ac_chain = VAR_7;

 VAR_6 = FUNC_10(VAR_1, VAR_2, VAR_3, VAR_4,
        VAR_5, &VAR_9);
 if (!VAR_6) {
  if (FUNC_9(VAR_1->ac_inode))
   VAR_10 = VAR_5->sr_bg_blkno;
  else
   VAR_10 = FUNC_8(VAR_5);
  goto set_hint;
 }
 if (VAR_6 < 0 && VAR_6 != -VAR_0) {
  FUNC_5(VAR_6);
  goto bail;
 }

 FUNC_12(VAR_7);





 VAR_1->ac_disable_chain_relink = 1;
 for (VAR_8 = 0; VAR_8 < FUNC_2(VAR_11->cl_next_free_rec); VAR_8 ++) {
  if (VAR_8 == VAR_7)
   continue;
  if (!VAR_11->cl_recs[VAR_8].c_free)
   continue;

  VAR_1->ac_chain = VAR_8;
  VAR_6 = FUNC_10(VAR_1, VAR_2, VAR_3, VAR_4,
         VAR_5, &VAR_9);
  if (!VAR_6) {
   VAR_10 = FUNC_8(VAR_5);
   break;
  }
  if (VAR_6 < 0 && VAR_6 != -VAR_0) {
   FUNC_5(VAR_6);
   goto bail;
  }
 }

set_hint:
 if (VAR_6 != -VAR_0) {



  if (VAR_9 < VAR_4)
   VAR_1->ac_last_group = 0;
  else
   VAR_1->ac_last_group = VAR_10;
 }

bail:
 if (VAR_6)
  FUNC_5(VAR_6);
 return VAR_6;
}
