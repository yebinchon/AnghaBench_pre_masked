
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct resource {int flags; scalar_t__ start; scalar_t__ end; } ;
struct TYPE_2__ {int coherent_dma_mask; int * dma_mask; int * parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct bcma_device {int dev; scalar_t__ irq; } ;
typedef int hci_res ;


 int FUNC_0 (struct resource*) ;
 int VAR_0 ;
 struct platform_device* FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct resource*,int ,int) ;
 int FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*,void const*,size_t) ;
 int FUNC_5 (struct platform_device*,struct resource*,int ) ;
 struct platform_device* FUNC_6 (char const*,int ) ;
 int FUNC_7 (struct platform_device*) ;

__attribute__((used)) static struct platform_device *FUNC_8(struct bcma_device *VAR_3,
          const char *VAR_4, u32 VAR_5,
          const void *VAR_6,
          size_t VAR_7)
{
 struct platform_device *VAR_8;
 struct resource VAR_9[2];
 int VAR_10;

 FUNC_2(VAR_9, 0, sizeof(VAR_9));

 VAR_9[0].start = VAR_5;
 VAR_9[0].end = VAR_9[0].start + 0x1000 - 1;
 VAR_9[0].flags = VAR_2;

 VAR_9[1].start = VAR_3->irq;
 VAR_9[1].flags = VAR_1;

 VAR_8 = FUNC_6(VAR_4, 0);
 if (!VAR_8)
  return FUNC_1(-VAR_0);

 VAR_8->dev.parent = &VAR_3->dev;
 VAR_8->dev.dma_mask = &VAR_8->dev.coherent_dma_mask;

 VAR_10 = FUNC_5(VAR_8, VAR_9,
         FUNC_0(VAR_9));
 if (VAR_10)
  goto err_alloc;
 if (VAR_6)
  VAR_10 = FUNC_4(VAR_8, VAR_6, VAR_7);
 if (VAR_10)
  goto err_alloc;
 VAR_10 = FUNC_3(VAR_8);
 if (VAR_10)
  goto err_alloc;

 return VAR_8;

err_alloc:
 FUNC_7(VAR_8);
 return FUNC_1(VAR_10);
}
