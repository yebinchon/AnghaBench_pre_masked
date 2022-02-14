
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp1760_udc {int irqname; int irq; int gadget; int isp; } ;
struct isp1760_device {struct isp1760_udc udc; } ;


 int FUNC_0 (int ,struct isp1760_udc*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct isp1760_device *VAR_0)
{
 struct isp1760_udc *VAR_1 = &VAR_0->udc;

 if (!VAR_1->isp)
  return;

 FUNC_2(&VAR_1->gadget);

 FUNC_0(VAR_1->irq, VAR_1);
 FUNC_1(VAR_1->irqname);
}
