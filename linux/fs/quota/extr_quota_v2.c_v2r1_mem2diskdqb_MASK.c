
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v2r1_disk_dqblk {void* dqb_itime; int dqb_id; void* dqb_btime; void* dqb_curspace; void* dqb_bsoftlimit; void* dqb_bhardlimit; void* dqb_curinodes; void* dqb_isoftlimit; void* dqb_ihardlimit; } ;
struct qtree_mem_dqinfo {int dummy; } ;
struct mem_dqblk {int dqb_ihardlimit; int dqb_isoftlimit; int dqb_curinodes; int dqb_itime; int dqb_curspace; int dqb_btime; int dqb_bsoftlimit; int dqb_bhardlimit; } ;
struct TYPE_4__ {int type; } ;
struct dquot {TYPE_2__ dq_id; int dq_sb; struct mem_dqblk dq_dqb; } ;
struct TYPE_3__ {struct qtree_mem_dqinfo* dqi_priv; } ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int *,TYPE_2__) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (struct qtree_mem_dqinfo*,void*) ;
 TYPE_1__* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(void *VAR_1, struct dquot *VAR_2)
{
 struct v2r1_disk_dqblk *VAR_3 = VAR_1;
 struct mem_dqblk *VAR_4 = &VAR_2->dq_dqb;
 struct qtree_mem_dqinfo *VAR_5 =
   FUNC_4(VAR_2->dq_sb, VAR_2->dq_id.type)->dqi_priv;

 VAR_3->dqb_ihardlimit = FUNC_1(VAR_4->dqb_ihardlimit);
 VAR_3->dqb_isoftlimit = FUNC_1(VAR_4->dqb_isoftlimit);
 VAR_3->dqb_curinodes = FUNC_1(VAR_4->dqb_curinodes);
 VAR_3->dqb_itime = FUNC_1(VAR_4->dqb_itime);
 VAR_3->dqb_bhardlimit = FUNC_1(FUNC_5(VAR_4->dqb_bhardlimit));
 VAR_3->dqb_bsoftlimit = FUNC_1(FUNC_5(VAR_4->dqb_bsoftlimit));
 VAR_3->dqb_curspace = FUNC_1(VAR_4->dqb_curspace);
 VAR_3->dqb_btime = FUNC_1(VAR_4->dqb_btime);
 VAR_3->dqb_id = FUNC_0(FUNC_2(&VAR_0, VAR_2->dq_id));
 if (FUNC_3(VAR_5, VAR_1))
  VAR_3->dqb_itime = FUNC_1(1);
}
