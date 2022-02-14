
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dwc2_qtd {int dummy; } ;
struct TYPE_2__ {scalar_t__ dma_desc_enable; } ;
struct dwc2_hsotg {TYPE_1__ params; int dev; } ;
struct dwc2_host_chan {scalar_t__ ep_type; } ;
typedef enum dwc2_halt_status { ____Placeholder_dwc2_halt_status } dwc2_halt_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct dwc2_hsotg*,int,int ) ;
 int FUNC_2 (struct dwc2_hsotg*,struct dwc2_host_chan*,struct dwc2_qtd*,int) ;
 int FUNC_3 (struct dwc2_hsotg*,struct dwc2_host_chan*,struct dwc2_qtd*) ;
 int FUNC_4 (struct dwc2_hsotg*,struct dwc2_host_chan*,int,int) ;
 int FUNC_5 (struct dwc2_hsotg*,struct dwc2_qtd*,int ) ;
 int FUNC_6 (struct dwc2_hsotg*,struct dwc2_host_chan*,int,struct dwc2_qtd*,int) ;

__attribute__((used)) static void FUNC_7(struct dwc2_hsotg *VAR_4,
    struct dwc2_host_chan *VAR_5, int VAR_6,
    struct dwc2_qtd *VAR_7)
{
 FUNC_0(VAR_4->dev, "--Host Channel %d Interrupt: Babble Error--\n",
  VAR_6);

 FUNC_3(VAR_4, VAR_5, VAR_7);

 if (VAR_4->params.dma_desc_enable) {
  FUNC_4(VAR_4, VAR_5, VAR_6,
         VAR_0);
  goto disable_int;
 }

 if (VAR_5->ep_type != VAR_3) {
  FUNC_5(VAR_4, VAR_7, -VAR_1);
  FUNC_2(VAR_4, VAR_5, VAR_7, VAR_0);
 } else {
  enum dwc2_halt_status VAR_8;

  VAR_8 = FUNC_6(VAR_4, VAR_5, VAR_6,
      VAR_7, VAR_0);
  FUNC_2(VAR_4, VAR_5, VAR_7, VAR_8);
 }

disable_int:
 FUNC_1(VAR_4, VAR_6, VAR_2);
}
