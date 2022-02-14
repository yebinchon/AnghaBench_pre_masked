
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_2__ {int coherent_dma_mask; int * dma_mask; struct TYPE_2__* parent; } ;
struct platform_device {unsigned int num_resources; TYPE_1__ dev; struct resource* resource; } ;
struct fsl_usb2_platform_data {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct platform_device* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*,struct fsl_usb2_platform_data*,int) ;
 int FUNC_5 (struct platform_device*,struct resource const*,unsigned int) ;
 struct platform_device* FUNC_6 (char const*,int) ;
 int FUNC_7 (struct platform_device*) ;

__attribute__((used)) static struct platform_device *FUNC_8(
     struct platform_device *VAR_1,
     struct fsl_usb2_platform_data *VAR_2,
     const char *VAR_3, int VAR_4)
{
 struct platform_device *VAR_5;
 const struct resource *VAR_6 = VAR_1->resource;
 unsigned int VAR_7 = VAR_1->num_resources;
 int VAR_8;

 VAR_5 = FUNC_6(VAR_3, VAR_4);
 if (!VAR_5) {
  VAR_8 = -VAR_0;
  goto error;
 }

 VAR_5->dev.parent = &VAR_1->dev;

 VAR_5->dev.coherent_dma_mask = VAR_1->dev.coherent_dma_mask;

 if (!VAR_5->dev.dma_mask)
  VAR_5->dev.dma_mask = &VAR_1->dev.coherent_dma_mask;
 else
  FUNC_2(&VAR_5->dev, FUNC_0(32));

 VAR_8 = FUNC_4(VAR_5, VAR_2, sizeof(*VAR_2));
 if (VAR_8)
  goto error;

 if (VAR_7) {
  VAR_8 = FUNC_5(VAR_5, VAR_6, VAR_7);
  if (VAR_8)
   goto error;
 }

 VAR_8 = FUNC_3(VAR_5);
 if (VAR_8)
  goto error;

 return VAR_5;

error:
 FUNC_7(VAR_5);
 return FUNC_1(VAR_8);
}
