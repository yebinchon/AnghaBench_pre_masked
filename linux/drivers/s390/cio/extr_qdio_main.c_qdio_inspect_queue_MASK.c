
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qdio_q {int dummy; } ;
struct qdio_irq {struct qdio_q** output_qs; struct qdio_q** input_qs; } ;
struct ccw_device {TYPE_1__* private; } ;
struct TYPE_2__ {struct qdio_irq* qdio_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct qdio_q*,unsigned int*,unsigned int*) ;
 scalar_t__ FUNC_1 (struct qdio_q*) ;
 int FUNC_2 (struct qdio_q*) ;

int FUNC_3(struct ccw_device *VAR_1, unsigned int VAR_2, bool VAR_3,
         unsigned int *VAR_4, unsigned int *VAR_5)
{
 struct qdio_irq *VAR_6 = VAR_1->private->qdio_data;
 struct qdio_q *VAR_7;

 if (!VAR_6)
  return -VAR_0;
 VAR_7 = VAR_3 ? VAR_6->input_qs[VAR_2] : VAR_6->output_qs[VAR_2];

 if (FUNC_1(VAR_7))
  FUNC_2(VAR_7);

 return FUNC_0(VAR_7, VAR_4, VAR_5);
}
