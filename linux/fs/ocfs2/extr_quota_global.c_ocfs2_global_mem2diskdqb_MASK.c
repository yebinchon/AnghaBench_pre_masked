
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_global_disk_dqblk {scalar_t__ dqb_pad2; scalar_t__ dqb_pad1; void* dqb_itime; void* dqb_btime; void* dqb_curspace; void* dqb_bsoftlimit; void* dqb_bhardlimit; void* dqb_curinodes; void* dqb_isoftlimit; void* dqb_ihardlimit; void* dqb_use_count; void* dqb_id; } ;
struct mem_dqblk {int dqb_itime; int dqb_btime; int dqb_curspace; int dqb_bsoftlimit; int dqb_bhardlimit; int dqb_curinodes; int dqb_isoftlimit; int dqb_ihardlimit; } ;
struct dquot {int dq_id; struct mem_dqblk dq_dqb; } ;
struct TYPE_2__ {int dq_use_count; } ;


 TYPE_1__* FUNC_0 (struct dquot*) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(void *VAR_1, struct dquot *VAR_2)
{
 struct ocfs2_global_disk_dqblk *VAR_3 = VAR_1;
 struct mem_dqblk *VAR_4 = &VAR_2->dq_dqb;

 VAR_3->dqb_id = FUNC_1(FUNC_3(&VAR_0, VAR_2->dq_id));
 VAR_3->dqb_use_count = FUNC_1(FUNC_0(VAR_2)->dq_use_count);
 VAR_3->dqb_ihardlimit = FUNC_2(VAR_4->dqb_ihardlimit);
 VAR_3->dqb_isoftlimit = FUNC_2(VAR_4->dqb_isoftlimit);
 VAR_3->dqb_curinodes = FUNC_2(VAR_4->dqb_curinodes);
 VAR_3->dqb_bhardlimit = FUNC_2(VAR_4->dqb_bhardlimit);
 VAR_3->dqb_bsoftlimit = FUNC_2(VAR_4->dqb_bsoftlimit);
 VAR_3->dqb_curspace = FUNC_2(VAR_4->dqb_curspace);
 VAR_3->dqb_btime = FUNC_2(VAR_4->dqb_btime);
 VAR_3->dqb_itime = FUNC_2(VAR_4->dqb_itime);
 VAR_3->dqb_pad1 = VAR_3->dqb_pad2 = 0;
}
