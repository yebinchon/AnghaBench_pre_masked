
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_pcibk_device {scalar_t__ evtchn_irq; int dev_lock; int * sh_info; int xdev; int op_work; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,struct xen_pcibk_device*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct xen_pcibk_device *VAR_1)
{
 FUNC_1(&VAR_1->dev_lock);

 if (VAR_1->evtchn_irq != VAR_0) {
  FUNC_3(VAR_1->evtchn_irq, VAR_1);
  VAR_1->evtchn_irq = VAR_0;
 }




 FUNC_0(&VAR_1->op_work);

 if (VAR_1->sh_info != ((void*)0)) {
  FUNC_4(VAR_1->xdev, VAR_1->sh_info);
  VAR_1->sh_info = ((void*)0);
 }
 FUNC_2(&VAR_1->dev_lock);
}
