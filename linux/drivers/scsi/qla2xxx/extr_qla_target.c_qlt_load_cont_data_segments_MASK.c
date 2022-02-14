
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qla_tgt_prm {scalar_t__ seg_cnt; int sg; TYPE_2__* cmd; } ;
struct dsd64 {int dummy; } ;
struct TYPE_7__ {int entry_count; struct dsd64* dsd; int entry_type; scalar_t__ sys_define; } ;
typedef TYPE_3__ cont_a64_entry_t ;
struct TYPE_6__ {TYPE_1__* qpair; } ;
struct TYPE_5__ {int req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dsd64**,int ) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct qla_tgt_prm *VAR_2)
{
 int VAR_3;
 struct dsd64 *VAR_4;


 while (VAR_2->seg_cnt > 0) {
  cont_a64_entry_t *VAR_5 =
   (cont_a64_entry_t *)FUNC_2(
      VAR_2->cmd->qpair->req);
  FUNC_1(VAR_5, 0, sizeof(*VAR_5));

  VAR_5->entry_count = 1;
  VAR_5->sys_define = 0;

  VAR_5->entry_type = VAR_0;
  VAR_4 = VAR_5->dsd;


  for (VAR_3 = 0;
      VAR_3 < VAR_1 && VAR_2->seg_cnt;
      VAR_3++, VAR_2->seg_cnt--) {
   FUNC_0(&VAR_4, VAR_2->sg);
   VAR_2->sg = FUNC_3(VAR_2->sg);
  }
 }
}
