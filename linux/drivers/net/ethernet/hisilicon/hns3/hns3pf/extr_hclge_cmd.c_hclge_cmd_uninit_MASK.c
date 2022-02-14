
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int lock; } ;
struct TYPE_7__ {int lock; } ;
struct TYPE_8__ {TYPE_1__ csq; TYPE_2__ crq; } ;
struct TYPE_9__ {TYPE_3__ cmq; } ;
struct hclge_dev {TYPE_4__ hw; int state; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct hclge_dev *VAR_1)
{
 FUNC_4(&VAR_1->hw.cmq.csq.lock);
 FUNC_3(&VAR_1->hw.cmq.crq.lock);
 FUNC_2(VAR_0, &VAR_1->state);
 FUNC_0(&VAR_1->hw);
 FUNC_5(&VAR_1->hw.cmq.crq.lock);
 FUNC_6(&VAR_1->hw.cmq.csq.lock);

 FUNC_1(&VAR_1->hw);
}
