
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enable; } ;
struct sprd_spi {TYPE_1__ dma; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct sprd_spi*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1, struct sprd_spi *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3) {
  if (VAR_3 == -VAR_0)
   return VAR_3;

  FUNC_0(&VAR_1->dev,
    "failed to request dma, enter no dma mode, ret = %d\n",
    VAR_3);

  return 0;
 }

 VAR_2->dma.enable = 1;

 return 0;
}
