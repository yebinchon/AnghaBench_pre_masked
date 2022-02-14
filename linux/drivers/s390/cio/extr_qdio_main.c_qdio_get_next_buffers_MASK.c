
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qdio_q {TYPE_2__* irq_ptr; } ;
struct qdio_irq {struct qdio_q** input_qs; } ;
struct ccw_device {TYPE_1__* private; } ;
struct TYPE_4__ {scalar_t__ state; } ;
struct TYPE_3__ {struct qdio_irq* qdio_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct qdio_q*,int*,int*) ;
 scalar_t__ FUNC_1 (struct qdio_q*) ;
 int FUNC_2 (struct qdio_irq*) ;
 int FUNC_3 (struct qdio_q*) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct ccw_device *VAR_3, int VAR_4, int *VAR_5,
     int *VAR_6)
{
 struct qdio_q *VAR_7;
 struct qdio_irq *VAR_8 = VAR_3->private->qdio_data;

 if (!VAR_8)
  return -VAR_1;
 VAR_7 = VAR_8->input_qs[VAR_4];





 if (FUNC_1(VAR_7))
  FUNC_3(VAR_7);

 FUNC_2(VAR_8);


 if (FUNC_4(VAR_7->irq_ptr->state != VAR_2))
  return -VAR_0;

 return FUNC_0(VAR_7, VAR_5, VAR_6);
}
