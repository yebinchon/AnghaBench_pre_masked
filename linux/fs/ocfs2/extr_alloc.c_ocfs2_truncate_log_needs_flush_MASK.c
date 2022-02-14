
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_truncate_log {int tl_count; int tl_used; } ;
struct ocfs2_super {int slot_num; struct buffer_head* osb_tl_bh; } ;
struct TYPE_2__ {struct ocfs2_truncate_log i_dealloc; } ;
struct ocfs2_dinode {TYPE_1__ id2; } ;
struct buffer_head {scalar_t__ b_data; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,char*,int ,scalar_t__,scalar_t__) ;

int FUNC_2(struct ocfs2_super *VAR_0)
{
 struct buffer_head *VAR_1 = VAR_0->osb_tl_bh;
 struct ocfs2_dinode *VAR_2;
 struct ocfs2_truncate_log *VAR_3;

 VAR_2 = (struct ocfs2_dinode *) VAR_1->b_data;
 VAR_3 = &VAR_2->id2.i_dealloc;

 FUNC_1(FUNC_0(VAR_3->tl_used) > FUNC_0(VAR_3->tl_count),
   "slot %d, invalid truncate log parameters: used = "
   "%u, count = %u\n", VAR_0->slot_num,
   FUNC_0(VAR_3->tl_used), FUNC_0(VAR_3->tl_count));
 return FUNC_0(VAR_3->tl_used) == FUNC_0(VAR_3->tl_count);
}
