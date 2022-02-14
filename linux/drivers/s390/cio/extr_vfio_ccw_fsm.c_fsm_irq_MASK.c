
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfio_ccw_private {scalar_t__ completion; int io_work; int irb; TYPE_1__* sch; } ;
struct irb {int dummy; } ;
typedef enum vfio_ccw_event { ____Placeholder_vfio_ccw_event } vfio_ccw_event ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct irb*,int) ;
 int FUNC_4 (int ,int *) ;
 struct irb* FUNC_5 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_6(struct vfio_ccw_private *VAR_2,
      enum vfio_ccw_event VAR_3)
{
 struct irb *VAR_4 = FUNC_5(&VAR_0);

 FUNC_0(6, "IRQ");
 FUNC_0(6, FUNC_2(&VAR_2->sch->dev));

 FUNC_3(&VAR_2->irb, VAR_4, sizeof(*VAR_4));

 FUNC_4(VAR_1, &VAR_2->io_work);

 if (VAR_2->completion)
  FUNC_1(VAR_2->completion);
}
