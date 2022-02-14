
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qla_tgt_prm {scalar_t__ seg_cnt; int sg; TYPE_1__* cmd; scalar_t__ pkt; } ;
struct dsd64 {scalar_t__ length; scalar_t__ address; } ;
struct TYPE_5__ {struct dsd64 dsd; int transfer_length; } ;
struct TYPE_6__ {TYPE_2__ status0; } ;
struct ctio7_to_24xx {int dseg_count; TYPE_3__ u; } ;
struct TYPE_4__ {int bufflen; } ;


 int VAR_0 ;
 int FUNC_0 (struct dsd64**,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct qla_tgt_prm*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct qla_tgt_prm *VAR_1)
{
 int VAR_2;
 struct dsd64 *VAR_3;
 struct ctio7_to_24xx *VAR_4 = (struct ctio7_to_24xx *)VAR_1->pkt;

 VAR_4->u.status0.transfer_length = FUNC_2(VAR_1->cmd->bufflen);


 VAR_3 = &VAR_4->u.status0.dsd;


 if (VAR_1->seg_cnt)
  VAR_4->dseg_count = FUNC_1(VAR_1->seg_cnt);

 if (VAR_1->seg_cnt == 0) {

  VAR_3->address = 0;
  VAR_3->length = 0;
  return;
 }




 for (VAR_2 = 0;
     (VAR_2 < VAR_0) && VAR_1->seg_cnt;
     VAR_2++, VAR_1->seg_cnt--) {
  FUNC_0(&VAR_3, VAR_1->sg);
  VAR_1->sg = FUNC_4(VAR_1->sg);
 }

 FUNC_3(VAR_1);
}
