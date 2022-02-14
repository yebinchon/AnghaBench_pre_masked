
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v1_disk_dqblk {int dqb_btime; int dqb_itime; void* dqb_curblocks; void* dqb_bsoftlimit; void* dqb_bhardlimit; int dqb_curinodes; int dqb_isoftlimit; int dqb_ihardlimit; } ;
struct mem_dqblk {int dqb_btime; int dqb_itime; int dqb_curspace; int dqb_bsoftlimit; int dqb_bhardlimit; int dqb_curinodes; int dqb_isoftlimit; int dqb_ihardlimit; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct v1_disk_dqblk *VAR_0, struct mem_dqblk *VAR_1)
{
 VAR_0->dqb_ihardlimit = VAR_1->dqb_ihardlimit;
 VAR_0->dqb_isoftlimit = VAR_1->dqb_isoftlimit;
 VAR_0->dqb_curinodes = VAR_1->dqb_curinodes;
 VAR_0->dqb_bhardlimit = FUNC_0(VAR_1->dqb_bhardlimit);
 VAR_0->dqb_bsoftlimit = FUNC_0(VAR_1->dqb_bsoftlimit);
 VAR_0->dqb_curblocks = FUNC_0(VAR_1->dqb_curspace);
 VAR_0->dqb_itime = VAR_1->dqb_itime;
 VAR_0->dqb_btime = VAR_1->dqb_btime;
}
