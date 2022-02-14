
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct subchannel_id {int sch_no; } ;
struct qdio_irq {int setup_mutex; int * debug_area; } ;
struct ccw_device {TYPE_1__* private; } ;
struct TYPE_2__ {struct qdio_irq* qdio_data; } ;


 int FUNC_0 (int ,struct qdio_irq*,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct ccw_device*,struct subchannel_id*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct qdio_irq*) ;

int FUNC_6(struct ccw_device *VAR_2)
{
 struct qdio_irq *VAR_3 = VAR_2->private->qdio_data;
 struct subchannel_id VAR_4;

 if (!VAR_3)
  return -VAR_1;

 FUNC_2(VAR_2, &VAR_4);
 FUNC_1("qfree:%4x", VAR_4.sch_no);
 FUNC_0(VAR_0, VAR_3, "dbf abandoned");
 FUNC_3(&VAR_3->setup_mutex);

 VAR_3->debug_area = ((void*)0);
 VAR_2->private->qdio_data = ((void*)0);
 FUNC_4(&VAR_3->setup_mutex);

 FUNC_5(VAR_3);
 return 0;
}
