
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_local {int base; scalar_t__ dma_chan; } ;
struct resource {int start; } ;
struct platform_device {int dummy; } ;
struct net_device {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 struct smc_local* FUNC_4 (struct net_device*) ;
 struct net_device* FUNC_5 (struct platform_device*) ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 struct resource* FUNC_7 (struct platform_device*,int ,char*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct platform_device*,struct net_device*) ;
 int FUNC_10 (struct platform_device*,struct net_device*) ;
 int FUNC_11 (struct net_device*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_2)
{
 struct net_device *VAR_3 = FUNC_5(VAR_2);
 struct smc_local *VAR_4 = FUNC_4(VAR_3);
 struct resource *VAR_5;

 FUNC_11(VAR_3);

 FUNC_1(VAR_3->irq, VAR_3);





 FUNC_3(VAR_4->base);

 FUNC_10(VAR_2,VAR_3);
 FUNC_9(VAR_2,VAR_3);

 VAR_5 = FUNC_7(VAR_2, VAR_0, "smc91x-regs");
 if (!VAR_5)
  VAR_5 = FUNC_6(VAR_2, VAR_0, 0);
 FUNC_8(VAR_5->start, VAR_1);

 FUNC_2(VAR_3);

 return 0;
}
