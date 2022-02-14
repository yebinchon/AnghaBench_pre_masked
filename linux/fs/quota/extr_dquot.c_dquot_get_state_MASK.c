
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct quota_info {TYPE_1__** files; struct mem_dqinfo* info; } ;
struct qc_type_state {int nextents; int blocks; int ino; int ino_timelimit; int spc_timelimit; int flags; } ;
struct qc_state {struct qc_type_state* s_state; } ;
struct mem_dqinfo {int dqi_flags; int dqi_igrace; int dqi_bgrace; } ;
struct TYPE_2__ {int i_blocks; int i_ino; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct qc_state*,int ,int) ;
 struct quota_info* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*,int) ;
 scalar_t__ FUNC_3 (struct super_block*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct super_block *VAR_8, struct qc_state *VAR_9)
{
 struct mem_dqinfo *VAR_10;
 struct qc_type_state *VAR_11;
 struct quota_info *VAR_12 = FUNC_1(VAR_8);
 int VAR_13;

 FUNC_0(VAR_9, 0, sizeof(*VAR_9));
 for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++) {
  if (!FUNC_2(VAR_8, VAR_13))
   continue;
  VAR_11 = VAR_9->s_state + VAR_13;
  VAR_10 = FUNC_1(VAR_8)->info + VAR_13;
  VAR_11->flags = VAR_3;
  FUNC_4(&VAR_7);
  if (VAR_10->dqi_flags & VAR_1)
   VAR_11->flags |= VAR_6;
  if (VAR_10->dqi_flags & VAR_0)
   VAR_11->flags |= VAR_5;
  if (FUNC_3(VAR_8, VAR_13))
   VAR_11->flags |= VAR_4;
  VAR_11->spc_timelimit = VAR_10->dqi_bgrace;
  VAR_11->ino_timelimit = VAR_10->dqi_igrace;
  VAR_11->ino = VAR_12->files[VAR_13]->i_ino;
  VAR_11->blocks = VAR_12->files[VAR_13]->i_blocks;
  VAR_11->nextents = 1;
  FUNC_5(&VAR_7);
 }
 return 0;
}
