
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ocfs2_local_disk_dqblk {void* dqb_inodemod; void* dqb_spacemod; void* dqb_id; } ;
struct TYPE_3__ {scalar_t__ dqb_curinodes; scalar_t__ dqb_curspace; } ;
struct TYPE_4__ {int dq_id; int dq_dqb_lock; TYPE_1__ dq_dqb; struct super_block* dq_sb; } ;
struct ocfs2_dquot {TYPE_2__ dq_dquot; scalar_t__ dq_originodes; scalar_t__ dq_origspace; int dq_local_off; } ;
struct buffer_head {scalar_t__ b_data; } ;


 void* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (struct super_block*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (unsigned long long,unsigned long long,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct buffer_head *VAR_1, void *VAR_2)
{
 struct ocfs2_dquot *VAR_3 = VAR_2;
 struct ocfs2_local_disk_dqblk *VAR_4;
 struct super_block *VAR_5 = VAR_3->dq_dquot.dq_sb;

 VAR_4 = (struct ocfs2_local_disk_dqblk *)(VAR_1->b_data
  + FUNC_3(VAR_5, VAR_3->dq_local_off));

 VAR_4->dqb_id = FUNC_0(FUNC_1(&VAR_0,
           VAR_3->dq_dquot.dq_id));
 FUNC_4(&VAR_3->dq_dquot.dq_dqb_lock);
 VAR_4->dqb_spacemod = FUNC_0(VAR_3->dq_dquot.dq_dqb.dqb_curspace -
       VAR_3->dq_origspace);
 VAR_4->dqb_inodemod = FUNC_0(VAR_3->dq_dquot.dq_dqb.dqb_curinodes -
       VAR_3->dq_originodes);
 FUNC_5(&VAR_3->dq_dquot.dq_dqb_lock);
 FUNC_6(
  (unsigned long long)FUNC_2(VAR_4->dqb_spacemod),
  (unsigned long long)FUNC_2(VAR_4->dqb_inodemod),
  FUNC_1(&VAR_0, VAR_3->dq_dquot.dq_id));
}
