
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ocfs2_suballoc_result {scalar_t__ sr_bg_blkno; scalar_t__ sr_bit_offset; scalar_t__ sr_blkno; } ;
struct TYPE_7__ {struct ocfs2_extent_rec* l_recs; int l_next_free_rec; } ;
struct ocfs2_group_desc {TYPE_3__ bg_list; } ;
struct ocfs2_extent_rec {int dummy; } ;
struct ocfs2_chain_list {int dummy; } ;
struct TYPE_6__ {struct ocfs2_chain_list i_chain; } ;
struct ocfs2_dinode {TYPE_2__ id2; } ;
struct ocfs2_alloc_context {TYPE_4__* ac_inode; TYPE_1__* ac_bh; } ;
struct TYPE_8__ {int i_sb; } ;
struct TYPE_5__ {scalar_t__ b_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct ocfs2_suballoc_result*,struct ocfs2_extent_rec*,struct ocfs2_chain_list*) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct ocfs2_alloc_context *VAR_0,
       struct ocfs2_group_desc *VAR_1,
       struct ocfs2_suballoc_result *VAR_2)
{
 int VAR_3;
 u64 VAR_4 = VAR_2->sr_bg_blkno;
 struct ocfs2_extent_rec *VAR_5;
 struct ocfs2_dinode *VAR_6 = (struct ocfs2_dinode *)VAR_0->ac_bh->b_data;
 struct ocfs2_chain_list *VAR_7 = &VAR_6->id2.i_chain;

 if (FUNC_3(VAR_0->ac_inode)) {
  VAR_2->sr_blkno = 0;
  return;
 }

 VAR_2->sr_blkno = VAR_2->sr_bg_blkno + VAR_2->sr_bit_offset;
 VAR_2->sr_bg_blkno = 0;
 if (!FUNC_4(FUNC_0(VAR_0->ac_inode->i_sb)) ||
     !VAR_1->bg_list.l_next_free_rec)
  return;

 for (VAR_3 = 0; VAR_3 < FUNC_1(VAR_1->bg_list.l_next_free_rec); VAR_3++) {
  VAR_5 = &VAR_1->bg_list.l_recs[VAR_3];
  if (FUNC_2(VAR_2, VAR_5, VAR_7)) {
   VAR_2->sr_bg_blkno = VAR_4;
   break;
  }
 }
}
