
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ host_dma; } ;
struct dwc2_hsotg {int dev; TYPE_1__ params; } ;
struct dwc2_host_chan {int hc_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct dwc2_host_chan*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct dwc2_hsotg*,struct dwc2_host_chan*) ;
 int FUNC_3 (struct dwc2_hsotg*,struct dwc2_host_chan*) ;
 int FUNC_4 (struct dwc2_hsotg*,int ) ;
 int FUNC_5 (struct dwc2_hsotg*,int,int ) ;

__attribute__((used)) static void FUNC_6(struct dwc2_hsotg *VAR_3,
    struct dwc2_host_chan *VAR_4)
{
 u32 VAR_5;

 if (VAR_3->params.host_dma) {
  if (FUNC_0(VAR_4))
   FUNC_1(VAR_3->dev, "DMA enabled\n");
  FUNC_2(VAR_3, VAR_4);
 } else {
  if (FUNC_0(VAR_4))
   FUNC_1(VAR_3->dev, "DMA disabled\n");
  FUNC_3(VAR_3, VAR_4);
 }


 VAR_5 = FUNC_4(VAR_3, VAR_2);
 VAR_5 |= 1 << VAR_4->hc_num;
 FUNC_5(VAR_3, VAR_5, VAR_2);
 if (FUNC_0(VAR_4))
  FUNC_1(VAR_3->dev, "set HAINTMSK to %08x\n", VAR_5);


 VAR_5 = FUNC_4(VAR_3, VAR_0);
 VAR_5 |= VAR_1;
 FUNC_5(VAR_3, VAR_5, VAR_0);
 if (FUNC_0(VAR_4))
  FUNC_1(VAR_3->dev, "set GINTMSK to %08x\n", VAR_5);
}
