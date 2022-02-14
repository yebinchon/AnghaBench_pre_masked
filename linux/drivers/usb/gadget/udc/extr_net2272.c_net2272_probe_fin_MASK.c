
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net2272 {int irq; int dev; int gadget; int chiprev; int base_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int ,...) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ,struct net2272*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_7 (struct net2272*) ;
 int FUNC_8 (struct net2272*,int ) ;
 int FUNC_9 (struct net2272*) ;
 int FUNC_10 (struct net2272*) ;
 int FUNC_11 (int ,int ,unsigned int,int ,struct net2272*) ;
 int FUNC_12 (int ,int *,int ) ;

__attribute__((used)) static int
FUNC_13(struct net2272 *VAR_8, unsigned int VAR_9)
{
 int VAR_10;


 if (FUNC_7(VAR_8)) {
  FUNC_2(VAR_8->dev, "2272 not found!\n");
  VAR_10 = -VAR_1;
  goto err;
 }

 FUNC_10(VAR_8);
 FUNC_9(VAR_8);

 VAR_10 = FUNC_11(VAR_8->irq, VAR_7, VAR_9, VAR_4, VAR_8);
 if (VAR_10) {
  FUNC_0(VAR_8->dev, "request interrupt %i failed\n", VAR_8->irq);
  goto err;
 }

 VAR_8->chiprev = FUNC_8(VAR_8, VAR_0);


 FUNC_1(VAR_8->dev, "%s\n", VAR_3);
 FUNC_1(VAR_8->dev, "irq %i, mem %p, chip rev %04x, dma %s\n",
  VAR_8->irq, VAR_8->base_addr, VAR_8->chiprev,
  FUNC_5());
 FUNC_1(VAR_8->dev, "version: %s\n", VAR_5);

 VAR_10 = FUNC_3(VAR_8->dev, &VAR_2);
 if (VAR_10)
  goto err_irq;

 VAR_10 = FUNC_12(VAR_8->dev, &VAR_8->gadget,
   VAR_6);
 if (VAR_10)
  goto err_add_udc;

 return 0;

err_add_udc:
 FUNC_4(VAR_8->dev, &VAR_2);
 err_irq:
 FUNC_6(VAR_8->irq, VAR_8);
 err:
 return VAR_10;
}
