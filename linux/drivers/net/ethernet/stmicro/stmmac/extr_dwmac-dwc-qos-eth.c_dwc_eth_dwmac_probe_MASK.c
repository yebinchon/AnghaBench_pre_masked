
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_resources {scalar_t__ irq; int wol_irq; void* addr; int mac; } ;
struct platform_device {int dev; } ;
typedef void plat_stmmacenet_data ;
struct dwc_eth_dwmac_data {int (* remove ) (struct platform_device*) ;void* (* probe ) (struct platform_device*,void*,struct stmmac_resources*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *,char*,int) ;
 void* FUNC_3 (struct platform_device*,int ) ;
 int FUNC_4 (struct platform_device*,void*) ;
 int FUNC_5 (struct stmmac_resources*,int ,int) ;
 struct dwc_eth_dwmac_data* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct platform_device*,int ) ;
 int FUNC_8 (int *,void*,struct stmmac_resources*) ;
 void* FUNC_9 (struct platform_device*,int *) ;
 int FUNC_10 (struct platform_device*,void*) ;
 void* FUNC_11 (struct platform_device*,void*,struct stmmac_resources*) ;
 int FUNC_12 (struct platform_device*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_1)
{
 const struct dwc_eth_dwmac_data *VAR_2;
 struct plat_stmmacenet_data *VAR_3;
 struct stmmac_resources VAR_4;
 void *VAR_5;
 int VAR_6;

 VAR_2 = FUNC_6(&VAR_1->dev);

 FUNC_5(&VAR_4, 0, sizeof(struct stmmac_resources));





 VAR_4.irq = FUNC_7(VAR_1, 0);
 if (VAR_4.irq < 0)
  return VAR_4.irq;
 VAR_4.wol_irq = VAR_4.irq;

 VAR_4.addr = FUNC_3(VAR_1, 0);
 if (FUNC_0(VAR_4.addr))
  return FUNC_1(VAR_4.addr);

 VAR_3 = FUNC_9(VAR_1, &VAR_4.mac);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_5 = VAR_2->probe(VAR_1, VAR_3, &VAR_4);
 if (FUNC_0(VAR_5)) {
  VAR_6 = FUNC_1(VAR_5);

  if (VAR_6 != -VAR_0)
   FUNC_2(&VAR_1->dev, "failed to probe subdriver: %d\n",
    VAR_6);

  goto remove_config;
 }

 VAR_6 = FUNC_4(VAR_1, VAR_3);
 if (VAR_6)
  goto remove;

 VAR_6 = FUNC_8(&VAR_1->dev, VAR_3, &VAR_4);
 if (VAR_6)
  goto remove;

 return VAR_6;

remove:
 VAR_2->remove(VAR_1);
remove_config:
 FUNC_10(VAR_1, VAR_3);

 return VAR_6;
}
