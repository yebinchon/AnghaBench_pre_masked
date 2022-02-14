
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qc_dqblk {int d_ino_timer; int d_spc_timer; int d_ino_count; scalar_t__ d_space; int d_ino_softlimit; int d_ino_hardlimit; int d_spc_softlimit; int d_spc_hardlimit; } ;
struct mem_dqblk {int dqb_itime; int dqb_btime; int dqb_curinodes; scalar_t__ dqb_rsvspace; scalar_t__ dqb_curspace; int dqb_isoftlimit; int dqb_ihardlimit; int dqb_bsoftlimit; int dqb_bhardlimit; } ;
struct dquot {int dq_dqb_lock; struct mem_dqblk dq_dqb; } ;


 int FUNC_0 (struct qc_dqblk*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct dquot *VAR_0, struct qc_dqblk *VAR_1)
{
 struct mem_dqblk *VAR_2 = &VAR_0->dq_dqb;

 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
 FUNC_1(&VAR_0->dq_dqb_lock);
 VAR_1->d_spc_hardlimit = VAR_2->dqb_bhardlimit;
 VAR_1->d_spc_softlimit = VAR_2->dqb_bsoftlimit;
 VAR_1->d_ino_hardlimit = VAR_2->dqb_ihardlimit;
 VAR_1->d_ino_softlimit = VAR_2->dqb_isoftlimit;
 VAR_1->d_space = VAR_2->dqb_curspace + VAR_2->dqb_rsvspace;
 VAR_1->d_ino_count = VAR_2->dqb_curinodes;
 VAR_1->d_spc_timer = VAR_2->dqb_btime;
 VAR_1->d_ino_timer = VAR_2->dqb_itime;
 FUNC_2(&VAR_0->dq_dqb_lock);
}
