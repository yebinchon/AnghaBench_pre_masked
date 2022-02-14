
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcifront_device {scalar_t__ irq; scalar_t__ evtchn; scalar_t__ gnt_ref; TYPE_1__* xdev; scalar_t__ sh_info; int op_work; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,struct pcifront_device*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (scalar_t__,int ,unsigned long) ;
 int FUNC_5 (struct pcifront_device*) ;
 int FUNC_6 (struct pcifront_device*) ;
 int FUNC_7 (scalar_t__,struct pcifront_device*) ;
 int FUNC_8 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct pcifront_device *VAR_2)
{
 FUNC_1(&VAR_2->xdev->dev, "freeing pdev @ 0x%p\n", VAR_2);

 FUNC_6(VAR_2);

 FUNC_0(&VAR_2->op_work);

 if (VAR_2->irq >= 0)
  FUNC_7(VAR_2->irq, VAR_2);

 if (VAR_2->evtchn != VAR_0)
  FUNC_8(VAR_2->xdev, VAR_2->evtchn);

 if (VAR_2->gnt_ref != VAR_1)
  FUNC_4(VAR_2->gnt_ref, 0 ,
       (unsigned long)VAR_2->sh_info);
 else
  FUNC_3((unsigned long)VAR_2->sh_info);

 FUNC_2(&VAR_2->xdev->dev, ((void*)0));

 FUNC_5(VAR_2);
}
