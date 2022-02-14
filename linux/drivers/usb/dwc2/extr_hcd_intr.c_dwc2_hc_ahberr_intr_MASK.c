
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dwc2_qtd {struct dwc2_hcd_urb* urb; } ;
struct TYPE_2__ {scalar_t__ dma_desc_enable; } ;
struct dwc2_hsotg {TYPE_1__ params; int dev; } ;
struct dwc2_host_chan {int speed; } ;
struct dwc2_hcd_urb {char* length; char* interval; scalar_t__ setup_dma; int setup_packet; scalar_t__ dma; int buf; int pipe_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;







 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (struct dwc2_hsotg*,int,int ) ;
 int FUNC_7 (struct dwc2_hsotg*,struct dwc2_host_chan*,int ) ;
 int FUNC_8 (struct dwc2_hsotg*,struct dwc2_host_chan*,struct dwc2_qtd*) ;
 int FUNC_9 (struct dwc2_hsotg*,struct dwc2_host_chan*,int,int ) ;
 char* FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *) ;
 int FUNC_16 (struct dwc2_hsotg*,struct dwc2_qtd*,int ) ;
 int FUNC_17 (struct dwc2_hsotg*,int ) ;

__attribute__((used)) static void FUNC_18(struct dwc2_hsotg *VAR_3,
    struct dwc2_host_chan *VAR_4, int VAR_5,
    struct dwc2_qtd *VAR_6)
{
 struct dwc2_hcd_urb *VAR_7 = VAR_6->urb;
 char *VAR_8, *VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;

 FUNC_4(VAR_3->dev, "--Host Channel %d Interrupt: AHB Error--\n",
  VAR_5);

 if (!VAR_7)
  goto handle_ahberr_halt;

 FUNC_8(VAR_3, VAR_4, VAR_6);

 VAR_10 = FUNC_17(VAR_3, FUNC_0(VAR_5));
 VAR_11 = FUNC_17(VAR_3, FUNC_2(VAR_5));
 VAR_12 = FUNC_17(VAR_3, FUNC_3(VAR_5));
 VAR_13 = FUNC_17(VAR_3, FUNC_1(VAR_5));

 FUNC_5(VAR_3->dev, "AHB ERROR, Channel %d\n", VAR_5);
 FUNC_5(VAR_3->dev, "  hcchar 0x%08x, hcsplt 0x%08x\n", VAR_10, VAR_11);
 FUNC_5(VAR_3->dev, "  hctsiz 0x%08x, hc_dma 0x%08x\n", VAR_12, VAR_13);
 FUNC_5(VAR_3->dev, "  Device address: %d\n",
  FUNC_10(&VAR_7->pipe_info));
 FUNC_5(VAR_3->dev, "  Endpoint: %d, %s\n",
  FUNC_11(&VAR_7->pipe_info),
  FUNC_15(&VAR_7->pipe_info) ? "IN" : "OUT");

 switch (FUNC_14(&VAR_7->pipe_info)) {
 case 133:
  VAR_8 = "CONTROL";
  break;
 case 134:
  VAR_8 = "BULK";
  break;
 case 132:
  VAR_8 = "INTERRUPT";
  break;
 case 131:
  VAR_8 = "ISOCHRONOUS";
  break;
 default:
  VAR_8 = "UNKNOWN";
  break;
 }

 FUNC_5(VAR_3->dev, "  Endpoint type: %s\n", VAR_8);

 switch (VAR_4->speed) {
 case 129:
  VAR_9 = "HIGH";
  break;
 case 130:
  VAR_9 = "FULL";
  break;
 case 128:
  VAR_9 = "LOW";
  break;
 default:
  VAR_9 = "UNKNOWN";
  break;
 }

 FUNC_5(VAR_3->dev, "  Speed: %s\n", VAR_9);

 FUNC_5(VAR_3->dev, "  Max packet size: %d (mult %d)\n",
  FUNC_12(&VAR_7->pipe_info),
  FUNC_13(&VAR_7->pipe_info));
 FUNC_5(VAR_3->dev, "  Data buffer length: %d\n", VAR_7->length);
 FUNC_5(VAR_3->dev, "  Transfer buffer: %p, Transfer DMA: %08lx\n",
  VAR_7->buf, (unsigned long)VAR_7->dma);
 FUNC_5(VAR_3->dev, "  Setup buffer: %p, Setup DMA: %08lx\n",
  VAR_7->setup_packet, (unsigned long)VAR_7->setup_dma);
 FUNC_5(VAR_3->dev, "  Interval: %d\n", VAR_7->interval);


 if (VAR_3->params.dma_desc_enable) {
  FUNC_9(VAR_3, VAR_4, VAR_5,
         VAR_0);
  goto handle_ahberr_done;
 }

 FUNC_16(VAR_3, VAR_6, -VAR_1);

handle_ahberr_halt:




 FUNC_7(VAR_3, VAR_4, VAR_0);

handle_ahberr_done:
 FUNC_6(VAR_3, VAR_5, VAR_2);
}
