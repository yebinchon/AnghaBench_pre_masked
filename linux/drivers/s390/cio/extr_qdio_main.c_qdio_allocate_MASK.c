
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct subchannel_id {int sch_no; } ;
struct qdr {int dummy; } ;
struct qdio_irq {struct qdr* qdr; scalar_t__ chsc_page; int setup_mutex; } ;
struct qdio_initialize {TYPE_2__* cdev; int no_output_qs; int no_input_qs; int output_sbal_addr_array; int input_sbal_addr_array; int output_handler; int input_handler; } ;
struct TYPE_4__ {TYPE_1__* private; } ;
struct TYPE_3__ {struct qdio_irq* qdio_data; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*,struct subchannel_id*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct qdio_initialize*,struct qdio_irq*) ;
 scalar_t__ FUNC_5 (struct qdio_irq*,int ,int ) ;
 int FUNC_6 (struct qdio_irq*) ;
 int FUNC_7 (struct qdio_irq*,int ) ;

int FUNC_8(struct qdio_initialize *VAR_6)
{
 struct subchannel_id VAR_7;
 struct qdio_irq *VAR_8;

 FUNC_1(VAR_6->cdev, &VAR_7);
 FUNC_0("qallocate:%4x", VAR_7.sch_no);

 if ((VAR_6->no_input_qs && !VAR_6->input_handler) ||
     (VAR_6->no_output_qs && !VAR_6->output_handler))
  return -VAR_0;

 if ((VAR_6->no_input_qs > VAR_5) ||
     (VAR_6->no_output_qs > VAR_5))
  return -VAR_0;

 if ((!VAR_6->input_sbal_addr_array) ||
     (!VAR_6->output_sbal_addr_array))
  return -VAR_0;


 VAR_8 = (void *) FUNC_2(VAR_3 | VAR_2);
 if (!VAR_8)
  goto out_err;

 FUNC_3(&VAR_8->setup_mutex);
 if (FUNC_4(VAR_6, VAR_8))
  goto out_rel;







 VAR_8->chsc_page = FUNC_2(VAR_3);
 if (!VAR_8->chsc_page)
  goto out_rel;


 VAR_8->qdr = (struct qdr *) FUNC_2(VAR_3 | VAR_2);
 if (!VAR_8->qdr)
  goto out_rel;

 if (FUNC_5(VAR_8, VAR_6->no_input_qs,
        VAR_6->no_output_qs))
  goto out_rel;

 VAR_6->cdev->private->qdio_data = VAR_8;
 FUNC_7(VAR_8, VAR_4);
 return 0;
out_rel:
 FUNC_6(VAR_8);
out_err:
 return -VAR_1;
}
