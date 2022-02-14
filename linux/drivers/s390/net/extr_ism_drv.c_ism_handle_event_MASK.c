
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smcd_event {int dummy; } ;
struct ism_dev {int ieq_idx; int smcd; TYPE_2__* ieq; } ;
struct TYPE_3__ {int idx; } ;
struct TYPE_4__ {struct smcd_event* entry; TYPE_1__ header; } ;


 scalar_t__ FUNC_0 (struct smcd_event*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,struct smcd_event*,int) ;
 int VAR_0 ;
 int FUNC_3 (int ,struct smcd_event*) ;

__attribute__((used)) static void FUNC_4(struct ism_dev *VAR_1)
{
 struct smcd_event *VAR_2;

 while ((VAR_1->ieq_idx + 1) != FUNC_1(VAR_1->ieq->header.idx)) {
  if (++(VAR_1->ieq_idx) == FUNC_0(VAR_1->ieq->entry))
   VAR_1->ieq_idx = 0;

  VAR_2 = &VAR_1->ieq->entry[VAR_1->ieq_idx];
  FUNC_2(VAR_0, 2, VAR_2, sizeof(*VAR_2));
  FUNC_3(VAR_1->smcd, VAR_2);
 }
}
