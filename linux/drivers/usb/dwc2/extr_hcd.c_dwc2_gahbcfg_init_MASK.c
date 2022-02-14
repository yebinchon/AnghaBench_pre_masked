
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int ahbcfg; int dma_desc_enable; scalar_t__ host_dma; } ;
struct TYPE_4__ {int arch; } ;
struct dwc2_hsotg {TYPE_1__ params; int dev; TYPE_2__ hw_params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct dwc2_hsotg*,int ) ;
 int FUNC_3 (struct dwc2_hsotg*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct dwc2_hsotg *VAR_4)
{
 u32 VAR_5 = FUNC_2(VAR_4, VAR_1);

 switch (VAR_4->hw_params.arch) {
 case 130:
  FUNC_1(VAR_4->dev, "External DMA Mode not supported\n");
  return -VAR_0;

 case 129:
  FUNC_0(VAR_4->dev, "Internal DMA Mode\n");
  if (VAR_4->params.ahbcfg != -1) {
   VAR_5 &= VAR_2;
   VAR_5 |= VAR_4->params.ahbcfg &
      ~VAR_2;
  }
  break;

 case 128:
 default:
  FUNC_0(VAR_4->dev, "Slave Only Mode\n");
  break;
 }

 if (VAR_4->params.host_dma)
  VAR_5 |= VAR_3;
 else
  VAR_4->params.dma_desc_enable = 0;

 FUNC_3(VAR_4, VAR_5, VAR_1);

 return 0;
}
