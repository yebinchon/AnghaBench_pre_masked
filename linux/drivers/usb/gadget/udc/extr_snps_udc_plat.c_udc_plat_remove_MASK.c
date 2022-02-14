
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udc {int nb; int edev; int udc_phy; scalar_t__ drd_wq; int driver; int gadget; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct udc*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 struct udc* FUNC_8 (struct platform_device*) ;
 int FUNC_9 (struct platform_device*,int *) ;
 int FUNC_10 (struct udc*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_1)
{
 struct udc *VAR_2;

 VAR_2 = FUNC_8(VAR_1);

 FUNC_11(&VAR_2->gadget);

 if (FUNC_0(VAR_2->driver))
  return 0;


 FUNC_5(VAR_2);

 FUNC_10(VAR_2);

 FUNC_9(VAR_1, ((void*)0));

 if (VAR_2->drd_wq) {
  FUNC_4(VAR_2->drd_wq);
  FUNC_1(VAR_2->drd_wq);
 }

 FUNC_7(VAR_2->udc_phy);
 FUNC_6(VAR_2->udc_phy);
 FUNC_3(VAR_2->edev, VAR_0, &VAR_2->nb);

 FUNC_2(&VAR_1->dev, "Synopsys UDC platform driver removed\n");

 return 0;
}
