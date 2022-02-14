
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qc_dqblk {int d_ino_timer; int d_spc_timer; int d_ino_count; int d_ino_softlimit; int d_ino_hardlimit; int d_space; int d_spc_softlimit; int d_spc_hardlimit; } ;
struct if_dqblk {int dqb_valid; int dqb_itime; int dqb_btime; int dqb_curinodes; int dqb_isoftlimit; int dqb_ihardlimit; int dqb_curspace; void* dqb_bsoftlimit; void* dqb_bhardlimit; } ;


 int VAR_0 ;
 int FUNC_0 (struct if_dqblk*,int ,int) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct if_dqblk *VAR_1, struct qc_dqblk *VAR_2)
{
 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->dqb_bhardlimit = FUNC_1(VAR_2->d_spc_hardlimit);
 VAR_1->dqb_bsoftlimit = FUNC_1(VAR_2->d_spc_softlimit);
 VAR_1->dqb_curspace = VAR_2->d_space;
 VAR_1->dqb_ihardlimit = VAR_2->d_ino_hardlimit;
 VAR_1->dqb_isoftlimit = VAR_2->d_ino_softlimit;
 VAR_1->dqb_curinodes = VAR_2->d_ino_count;
 VAR_1->dqb_btime = VAR_2->d_spc_timer;
 VAR_1->dqb_itime = VAR_2->d_ino_timer;
 VAR_1->dqb_valid = VAR_0;
}
