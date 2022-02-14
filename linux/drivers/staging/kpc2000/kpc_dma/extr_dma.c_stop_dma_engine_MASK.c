
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kpc_dma_device {TYPE_1__* pldev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct kpc_dma_device*) ;
 int VAR_10 ;
 int FUNC_1 (struct kpc_dma_device*,int,int ) ;
 int FUNC_2 (struct kpc_dma_device*,int) ;
 int FUNC_3 (int *,char*) ;
 int VAR_11 ;
 scalar_t__ FUNC_4 (int,unsigned long) ;

void FUNC_5(struct kpc_dma_device *VAR_12)
{
 unsigned long VAR_13;


 FUNC_2(VAR_12, 0);


 VAR_13 = VAR_11 + (VAR_10 / 2);
 while (FUNC_0(VAR_12) & VAR_6) {
  if (FUNC_4(VAR_11, VAR_13)) {
   FUNC_3(&VAR_12->pldev->dev, "DMA_RUNNING still asserted!\n");
   break;
  }
 }


 FUNC_2(VAR_12, VAR_5);


 VAR_13 = VAR_11 + (VAR_10 / 2);
 while (FUNC_0(VAR_12) & (VAR_6 | VAR_5)) {
  if (FUNC_4(VAR_11, VAR_13)) {
   FUNC_3(&VAR_12->pldev->dev, "ENG_CTL_DMA_RESET_REQUEST still asserted!\n");
   break;
  }
 }


 FUNC_2(VAR_12, VAR_4);


 VAR_13 = VAR_11 + (VAR_10 / 2);
 while (FUNC_0(VAR_12) & VAR_4) {
  if (FUNC_4(VAR_11, VAR_13)) {
   FUNC_3(&VAR_12->pldev->dev, "DMA_RESET still asserted!\n");
   break;
  }
 }


 FUNC_1(VAR_12, (VAR_8 | VAR_2 | VAR_0 | VAR_3 | VAR_9 | VAR_1 | VAR_7), 0);




 FUNC_2(VAR_12, 0);
}
