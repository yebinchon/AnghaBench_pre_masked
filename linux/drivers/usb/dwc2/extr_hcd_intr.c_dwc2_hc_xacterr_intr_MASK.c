
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dwc2_qtd {int complete_split; int error_count; TYPE_3__* urb; } ;
struct TYPE_4__ {scalar_t__ dma_desc_enable; } ;
struct dwc2_hsotg {TYPE_1__ params; int dev; } ;
struct dwc2_host_chan {int complete_split; int do_split; TYPE_2__* qh; int speed; int ep_is_in; } ;
typedef enum dwc2_halt_status { ____Placeholder_dwc2_halt_status } dwc2_halt_status ;
struct TYPE_6__ {int pipe_info; } ;
struct TYPE_5__ {int ping_state; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct dwc2_hsotg*,int,int ) ;
 int FUNC_2 (struct dwc2_hsotg*,struct dwc2_host_chan*,struct dwc2_qtd*,int) ;
 int FUNC_3 (struct dwc2_hsotg*,struct dwc2_host_chan*,struct dwc2_qtd*) ;
 int FUNC_4 (struct dwc2_hsotg*,struct dwc2_host_chan*,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct dwc2_hsotg*,struct dwc2_host_chan*,int,struct dwc2_qtd*) ;
 int FUNC_7 (struct dwc2_hsotg*,struct dwc2_host_chan*,int,struct dwc2_qtd*,int) ;
 int FUNC_8 (struct dwc2_hsotg*,struct dwc2_host_chan*,int,TYPE_3__*,struct dwc2_qtd*,int) ;

__attribute__((used)) static void FUNC_9(struct dwc2_hsotg *VAR_3,
     struct dwc2_host_chan *VAR_4, int VAR_5,
     struct dwc2_qtd *VAR_6)
{
 FUNC_0(VAR_3->dev,
  "--Host Channel %d Interrupt: Transaction Error--\n", VAR_5);

 FUNC_3(VAR_3, VAR_4, VAR_6);

 if (VAR_3->params.dma_desc_enable) {
  FUNC_4(VAR_3, VAR_4, VAR_5,
         VAR_0);
  goto handle_xacterr_done;
 }

 switch (FUNC_5(&VAR_6->urb->pipe_info)) {
 case 130:
 case 131:
  VAR_6->error_count++;
  if (!VAR_4->qh->ping_state) {
   FUNC_8(VAR_3, VAR_4, VAR_5, VAR_6->urb,
        VAR_6, VAR_0);
   FUNC_6(VAR_3, VAR_4, VAR_5, VAR_6);
   if (!VAR_4->ep_is_in && VAR_4->speed == VAR_2)
    VAR_4->qh->ping_state = 1;
  }





  FUNC_2(VAR_3, VAR_4, VAR_6, VAR_0);
  break;
 case 129:
  VAR_6->error_count++;
  if (VAR_4->do_split && VAR_4->complete_split)
   VAR_6->complete_split = 0;
  FUNC_2(VAR_3, VAR_4, VAR_6, VAR_0);
  break;
 case 128:
  {
   enum dwc2_halt_status VAR_7;

   VAR_7 = FUNC_7(VAR_3, VAR_4,
      VAR_5, VAR_6, VAR_0);
   FUNC_2(VAR_3, VAR_4, VAR_6, VAR_7);
  }
  break;
 }

handle_xacterr_done:
 FUNC_1(VAR_3, VAR_5, VAR_1);
}
