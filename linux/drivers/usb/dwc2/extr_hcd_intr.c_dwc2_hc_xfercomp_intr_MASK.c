
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dwc2_qtd {int control_phase; int isoc_split_pos; scalar_t__ complete_split; struct dwc2_hcd_urb* urb; } ;
struct TYPE_4__ {scalar_t__ host_dma; scalar_t__ dma_desc_enable; } ;
struct dwc2_hsotg {int dev; TYPE_2__ params; } ;
struct dwc2_host_chan {int ep_type; scalar_t__ ep_is_in; TYPE_1__* qh; } ;
struct dwc2_hcd_urb {int status; int length; int pipe_info; } ;
typedef enum dwc2_halt_status { ____Placeholder_dwc2_halt_status } dwc2_halt_status ;
struct TYPE_3__ {scalar_t__ do_split; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 scalar_t__ FUNC_0 (struct dwc2_host_chan*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct dwc2_hsotg*,int,int ) ;
 int FUNC_4 (struct dwc2_hsotg*,struct dwc2_host_chan*,int,struct dwc2_qtd*,int) ;
 int FUNC_5 (struct dwc2_hsotg*,struct dwc2_host_chan*,int,struct dwc2_qtd*,int) ;
 int FUNC_6 (struct dwc2_hsotg*,struct dwc2_host_chan*,int,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct dwc2_hsotg*,struct dwc2_host_chan*,int,struct dwc2_qtd*) ;
 int FUNC_9 (struct dwc2_hsotg*,struct dwc2_qtd*,int ) ;
 int FUNC_10 (struct dwc2_hsotg*,struct dwc2_host_chan*,int,struct dwc2_qtd*,int) ;
 int FUNC_11 (struct dwc2_hsotg*,struct dwc2_host_chan*,int,struct dwc2_hcd_urb*,struct dwc2_qtd*) ;
 scalar_t__ FUNC_12 (struct dwc2_hsotg*,struct dwc2_host_chan*,int,struct dwc2_qtd*) ;

__attribute__((used)) static void FUNC_13(struct dwc2_hsotg *VAR_5,
      struct dwc2_host_chan *VAR_6, int VAR_7,
      struct dwc2_qtd *VAR_8)
{
 struct dwc2_hcd_urb *VAR_9 = VAR_8->urb;
 enum dwc2_halt_status VAR_10 = VAR_1;
 int VAR_11;
 int VAR_12;

 if (FUNC_0(VAR_6))
  FUNC_2(VAR_5->dev,
    "--Host Channel %d Interrupt: Transfer Complete--\n",
    VAR_7);

 if (!VAR_9)
  goto handle_xfercomp_done;

 VAR_11 = FUNC_7(&VAR_9->pipe_info);

 if (VAR_5->params.dma_desc_enable) {
  FUNC_6(VAR_5, VAR_6, VAR_7, VAR_10);
  if (VAR_11 == 128)

   return;
  goto handle_xfercomp_done;
 }


 if (VAR_6->qh->do_split) {
  if (VAR_6->ep_type == 128 && VAR_6->ep_is_in &&
      VAR_5->params.host_dma) {
   if (VAR_8->complete_split &&
       FUNC_12(VAR_5, VAR_6, VAR_7,
       VAR_8))
    goto handle_xfercomp_done;
  } else {
   VAR_8->complete_split = 0;
  }
 }


 switch (VAR_11) {
 case 130:
  switch (VAR_8->control_phase) {
  case 133:
   if (VAR_9->length > 0)
    VAR_8->control_phase = 134;
   else
    VAR_8->control_phase = 132;
   FUNC_2(VAR_5->dev,
     "  Control setup transaction done\n");
   VAR_10 = VAR_1;
   break;
  case 134:
   VAR_12 = FUNC_11(VAR_5, VAR_6,
             VAR_7, VAR_9, VAR_8);
   if (VAR_12) {
    VAR_8->control_phase = 132;
    FUNC_2(VAR_5->dev,
      "  Control data transfer done\n");
   } else {
    FUNC_8(VAR_5, VAR_6, VAR_7,
         VAR_8);
   }
   VAR_10 = VAR_1;
   break;
  case 132:
   FUNC_2(VAR_5->dev, "  Control transfer complete\n");
   if (VAR_9->status == -VAR_3)
    VAR_9->status = 0;
   FUNC_9(VAR_5, VAR_8, VAR_9->status);
   VAR_10 = VAR_2;
   break;
  }

  FUNC_4(VAR_5, VAR_6, VAR_7, VAR_8,
      VAR_10);
  break;
 case 131:
  FUNC_2(VAR_5->dev, "  Bulk transfer complete\n");
  VAR_12 = FUNC_11(VAR_5, VAR_6, VAR_7, VAR_9,
            VAR_8);
  if (VAR_12) {
   FUNC_9(VAR_5, VAR_8, VAR_9->status);
   VAR_10 = VAR_2;
  } else {
   VAR_10 = VAR_1;
  }

  FUNC_8(VAR_5, VAR_6, VAR_7, VAR_8);
  FUNC_4(VAR_5, VAR_6, VAR_7, VAR_8,
      VAR_10);
  break;
 case 129:
  FUNC_2(VAR_5->dev, "  Interrupt transfer complete\n");
  VAR_12 = FUNC_11(VAR_5, VAR_6, VAR_7, VAR_9,
            VAR_8);





  if (VAR_12) {
   FUNC_9(VAR_5, VAR_8, VAR_9->status);
   VAR_10 = VAR_2;
  } else {
   VAR_10 = VAR_1;
  }

  FUNC_8(VAR_5, VAR_6, VAR_7, VAR_8);
  FUNC_5(VAR_5, VAR_6, VAR_7, VAR_8,
         VAR_10);
  break;
 case 128:
  if (FUNC_1())
   FUNC_2(VAR_5->dev, "  Isochronous transfer complete\n");
  if (VAR_8->isoc_split_pos == VAR_0)
   VAR_10 = FUNC_10(VAR_5, VAR_6,
       VAR_7, VAR_8,
       VAR_1);
  FUNC_5(VAR_5, VAR_6, VAR_7, VAR_8,
         VAR_10);
  break;
 }

handle_xfercomp_done:
 FUNC_3(VAR_5, VAR_7, VAR_4);
}
