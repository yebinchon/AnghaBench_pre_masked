
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct dwc2_hsotg {int dev; struct dwc2_host_chan** hc_ptr_array; } ;
struct dwc2_host_chan {size_t xfer_buf; size_t xfer_count; int data_pid_start; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;




 size_t VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct dwc2_hsotg*,size_t,size_t) ;
 size_t FUNC_4 (struct dwc2_hsotg*,int ) ;

__attribute__((used)) static void FUNC_5(struct dwc2_hsotg *VAR_9)
{
 u32 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 struct dwc2_host_chan *VAR_15;

 if (FUNC_0())
  FUNC_2(VAR_9->dev, "--RxFIFO Level Interrupt--\n");

 VAR_10 = FUNC_4(VAR_9, VAR_0);
 VAR_11 = (VAR_10 & VAR_5) >> VAR_6;
 VAR_15 = VAR_9->hc_ptr_array[VAR_11];
 if (!VAR_15) {
  FUNC_1(VAR_9->dev, "Unable to get corresponding channel\n");
  return;
 }

 VAR_12 = (VAR_10 & VAR_1) >> VAR_2;
 VAR_13 = (VAR_10 & VAR_3) >> VAR_4;
 VAR_14 = (VAR_10 & VAR_7) >> VAR_8;


 if (FUNC_0()) {
  FUNC_2(VAR_9->dev, "    Ch num = %d\n", VAR_11);
  FUNC_2(VAR_9->dev, "    Count = %d\n", VAR_12);
  FUNC_2(VAR_9->dev, "    DPID = %d, chan.dpid = %d\n", VAR_13,
    VAR_15->data_pid_start);
  FUNC_2(VAR_9->dev, "    PStatus = %d\n", VAR_14);
 }

 switch (VAR_14) {
 case 129:

  if (VAR_12 > 0) {
   FUNC_3(VAR_9, VAR_15->xfer_buf, VAR_12);


   VAR_15->xfer_count += VAR_12;
   VAR_15->xfer_buf += VAR_12;
  }
  break;
 case 128:
 case 131:
 case 130:

  break;
 default:
  FUNC_1(VAR_9->dev,
   "RxFIFO Level Interrupt: Unknown status %d\n", VAR_14);
  break;
 }
}
