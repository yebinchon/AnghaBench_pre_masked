
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dma_desc_enable; } ;
struct dwc2_hsotg {int dev; TYPE_1__ params; } ;
struct dwc2_host_chan {scalar_t__ ep_type; int hc_num; scalar_t__ ep_is_in; int do_split; scalar_t__ error_state; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (struct dwc2_host_chan*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct dwc2_hsotg*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct dwc2_hsotg *VAR_8,
        struct dwc2_host_chan *VAR_9)
{
 u32 VAR_10 = VAR_2;





 if (!VAR_8->params.dma_desc_enable) {
  if (FUNC_1(VAR_9))
   FUNC_2(VAR_8->dev, "desc DMA disabled\n");
  VAR_10 |= VAR_1;
 } else {
  if (FUNC_1(VAR_9))
   FUNC_2(VAR_8->dev, "desc DMA enabled\n");
  if (VAR_9->ep_type == VAR_7)
   VAR_10 |= VAR_5;
 }

 if (VAR_9->error_state && !VAR_9->do_split &&
     VAR_9->ep_type != VAR_7) {
  if (FUNC_1(VAR_9))
   FUNC_2(VAR_8->dev, "setting ACK\n");
  VAR_10 |= VAR_0;
  if (VAR_9->ep_is_in) {
   VAR_10 |= VAR_3;
   if (VAR_9->ep_type != VAR_6)
    VAR_10 |= VAR_4;
  }
 }

 FUNC_3(VAR_8, VAR_10, FUNC_0(VAR_9->hc_num));
 if (FUNC_1(VAR_9))
  FUNC_2(VAR_8->dev, "set HCINTMSK to %08x\n", VAR_10);
}
