
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dwc2_qtd {int dummy; } ;
struct TYPE_2__ {scalar_t__ host_dma; } ;
struct dwc2_hsotg {TYPE_1__ params; int dev; } ;
struct dwc2_host_chan {int halt_status; } ;


 scalar_t__ FUNC_0 (struct dwc2_host_chan*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct dwc2_hsotg*,struct dwc2_host_chan*,int,struct dwc2_qtd*) ;
 int FUNC_3 (struct dwc2_hsotg*,struct dwc2_host_chan*,int,struct dwc2_qtd*) ;
 int FUNC_4 (struct dwc2_hsotg*,struct dwc2_host_chan*,struct dwc2_qtd*,int ) ;

__attribute__((used)) static void FUNC_5(struct dwc2_hsotg *VAR_0,
    struct dwc2_host_chan *VAR_1, int VAR_2,
    struct dwc2_qtd *VAR_3)
{
 if (FUNC_0(VAR_1))
  FUNC_1(VAR_0->dev, "--Host Channel %d Interrupt: Channel Halted--\n",
    VAR_2);

 if (VAR_0->params.host_dma) {
  FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
 } else {
  if (!FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3))
   return;
  FUNC_4(VAR_0, VAR_1, VAR_3, VAR_1->halt_status);
 }
}
