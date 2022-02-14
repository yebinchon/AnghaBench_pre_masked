
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dwc2_qtd {struct dwc2_hcd_urb* urb; } ;
struct TYPE_3__ {scalar_t__ dma_desc_enable; } ;
struct dwc2_hsotg {TYPE_1__ params; int dev; } ;
struct dwc2_host_chan {TYPE_2__* qh; } ;
struct dwc2_hcd_urb {int pipe_info; } ;
struct TYPE_4__ {scalar_t__ data_toggle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct dwc2_hsotg*,int,int ) ;
 int FUNC_2 (struct dwc2_hsotg*,struct dwc2_host_chan*,struct dwc2_qtd*,int ) ;
 int FUNC_3 (struct dwc2_hsotg*,struct dwc2_host_chan*,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct dwc2_hsotg*,struct dwc2_qtd*,int ) ;

__attribute__((used)) static void FUNC_6(struct dwc2_hsotg *VAR_6,
          struct dwc2_host_chan *VAR_7, int VAR_8,
          struct dwc2_qtd *VAR_9)
{
 struct dwc2_hcd_urb *VAR_10 = VAR_9->urb;
 int VAR_11;

 FUNC_0(VAR_6->dev, "--Host Channel %d Interrupt: STALL Received--\n",
  VAR_8);

 if (VAR_6->params.dma_desc_enable) {
  FUNC_3(VAR_6, VAR_7, VAR_8,
         VAR_0);
  goto handle_stall_done;
 }

 if (!VAR_10)
  goto handle_stall_halt;

 VAR_11 = FUNC_4(&VAR_10->pipe_info);

 if (VAR_11 == VAR_4)
  FUNC_5(VAR_6, VAR_9, -VAR_1);

 if (VAR_11 == VAR_3 ||
     VAR_11 == VAR_5) {
  FUNC_5(VAR_6, VAR_9, -VAR_1);







  VAR_7->qh->data_toggle = 0;
 }

handle_stall_halt:
 FUNC_2(VAR_6, VAR_7, VAR_9, VAR_0);

handle_stall_done:
 FUNC_1(VAR_6, VAR_8, VAR_2);
}
