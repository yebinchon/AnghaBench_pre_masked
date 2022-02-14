
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_media_dma_buf {scalar_t__ phys; int * virt; int len; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,int ,int *,scalar_t__) ;

void FUNC_1(struct device *VAR_0,
       struct imx_media_dma_buf *VAR_1)
{
 if (VAR_1->virt)
  FUNC_0(VAR_0, VAR_1->len, VAR_1->virt, VAR_1->phys);

 VAR_1->virt = ((void*)0);
 VAR_1->phys = 0;
}
