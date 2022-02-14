
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct musb {int xceiv; scalar_t__ dma_controller; int controller; int lock; int mregs; int deassert_reset_work; int finish_resume_work; int irq_work; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct musb* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,int ) ;
 int FUNC_3 (struct musb*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct musb*) ;
 int FUNC_6 (struct musb*) ;
 int FUNC_7 (struct musb*) ;
 int FUNC_8 (struct musb*) ;
 int * VAR_1 ;
 int FUNC_9 (struct musb*) ;
 int FUNC_10 (struct musb*) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (int *,unsigned long) ;
 int FUNC_18 (int ) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_2)
{
 struct device *VAR_3 = &VAR_2->dev;
 struct musb *VAR_4 = FUNC_1(VAR_3);
 unsigned long VAR_5;






 FUNC_5(VAR_4);

 FUNC_0(&VAR_4->irq_work);
 FUNC_0(&VAR_4->finish_resume_work);
 FUNC_0(&VAR_4->deassert_reset_work);
 FUNC_14(VAR_4->controller);
 FUNC_8(VAR_4);
 FUNC_7(VAR_4);

 FUNC_9(VAR_4);
 FUNC_16(&VAR_4->lock, VAR_5);
 FUNC_3(VAR_4);
 FUNC_11(VAR_4->mregs, VAR_0, 0);
 FUNC_17(&VAR_4->lock, VAR_5);
 FUNC_10(VAR_4);

 FUNC_13(VAR_4->controller);
 FUNC_15(VAR_4->controller);
 FUNC_12(VAR_4->controller);
 VAR_1 = ((void*)0);
 if (VAR_4->dma_controller)
  FUNC_4(VAR_4->dma_controller);
 FUNC_18(VAR_4->xceiv);
 FUNC_6(VAR_4);
 FUNC_2(VAR_3, 0);
 return 0;
}
