
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qdio_q {int first_to_kick; int nr; TYPE_3__* irq_ptr; int (* handler ) (int ,int ,int ,int ,int,int ) ;int first_to_check; } ;
struct TYPE_5__ {int sch_no; } ;
struct qdio_irq {int int_parm; struct qdio_q** output_qs; scalar_t__ nr_output_qs; struct qdio_q** input_qs; scalar_t__ nr_input_qs; TYPE_2__ schid; } ;
struct ccw_device {TYPE_1__* private; } ;
struct TYPE_6__ {int cdev; } ;
struct TYPE_4__ {struct qdio_irq* qdio_data; } ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct qdio_irq*,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct ccw_device *VAR_2,
    unsigned long VAR_3, int VAR_4, int VAR_5)
{
 struct qdio_irq *VAR_6 = VAR_2->private->qdio_data;
 struct qdio_q *VAR_7;
 int VAR_8;

 FUNC_0("%4x ACT CHECK", VAR_6->schid.sch_no);
 FUNC_0("intp :%lx", VAR_3);
 FUNC_0("ds: %2x cs:%2x", VAR_5, VAR_4);

 if (VAR_6->nr_input_qs) {
  VAR_7 = VAR_6->input_qs[0];
 } else if (VAR_6->nr_output_qs) {
  VAR_7 = VAR_6->output_qs[0];
 } else {
  FUNC_1();
  goto no_handler;
 }

 VAR_8 = FUNC_5(VAR_7->first_to_check, VAR_7->first_to_kick);
 VAR_7->handler(VAR_7->irq_ptr->cdev, VAR_0,
     VAR_7->nr, VAR_7->first_to_kick, VAR_8, VAR_6->int_parm);
no_handler:
 FUNC_3(VAR_6, VAR_1);




 FUNC_2();
}
