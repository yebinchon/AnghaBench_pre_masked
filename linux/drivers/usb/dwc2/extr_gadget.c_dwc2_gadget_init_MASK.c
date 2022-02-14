
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int lpm_capable; int is_otg; int * ep0; int ep_list; int name; int * ops; int max_speed; } ;
struct TYPE_4__ {scalar_t__ lpm; int g_rx_fifo_size; int g_np_tx_fifo_size; } ;
struct dwc2_hsotg {scalar_t__ dr_mode; int num_of_eps; int ctrl_req; TYPE_3__** eps_out; TYPE_2__ gadget; TYPE_3__** eps_in; struct device* dev; int irq; void* ep0_buff; void* ctrl_buff; int op_state; TYPE_1__ params; scalar_t__ remote_wakeup_allowed; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int ep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct device*,char*,int ) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*) ;
 void* FUNC_4 (struct device*,int ,int ) ;
 int FUNC_5 (struct device*,int ,int ,int ,int ,struct dwc2_hsotg*) ;
 int FUNC_6 (struct dwc2_hsotg*) ;
 int FUNC_7 (struct dwc2_hsotg*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int VAR_9 ;
 int FUNC_10 (struct dwc2_hsotg*) ;
 int FUNC_11 (struct dwc2_hsotg*,TYPE_3__*,int,int) ;
 int VAR_10 ;
 int FUNC_12 (struct device*,TYPE_2__*) ;
 scalar_t__ FUNC_13 (struct dwc2_hsotg*) ;

int FUNC_14(struct dwc2_hsotg *VAR_11)
{
 struct device *VAR_12 = VAR_11->dev;
 int VAR_13;
 int VAR_14;


 FUNC_1(VAR_12, "NonPeriodic TXFIFO size: %d\n",
  VAR_11->params.g_np_tx_fifo_size);
 FUNC_1(VAR_12, "RXFIFO size: %d\n", VAR_11->params.g_rx_fifo_size);

 VAR_11->gadget.max_speed = VAR_8;
 VAR_11->gadget.ops = &VAR_9;
 VAR_11->gadget.name = FUNC_3(VAR_12);
 VAR_11->remote_wakeup_allowed = 0;

 if (VAR_11->params.lpm)
  VAR_11->gadget.lpm_capable = 1;

 if (VAR_11->dr_mode == VAR_6)
  VAR_11->gadget.is_otg = 1;
 else if (VAR_11->dr_mode == VAR_7)
  VAR_11->op_state = VAR_5;

 VAR_14 = FUNC_10(VAR_11);
 if (VAR_14) {
  FUNC_2(VAR_11->dev, "Hardware configuration failed: %d\n", VAR_14);
  return VAR_14;
 }

 VAR_11->ctrl_buff = FUNC_4(VAR_11->dev,
   VAR_0, VAR_3);
 if (!VAR_11->ctrl_buff)
  return -VAR_2;

 VAR_11->ep0_buff = FUNC_4(VAR_11->dev,
   VAR_0, VAR_3);
 if (!VAR_11->ep0_buff)
  return -VAR_2;

 if (FUNC_13(VAR_11)) {
  VAR_14 = FUNC_6(VAR_11);
  if (VAR_14 < 0)
   return VAR_14;
 }

 VAR_14 = FUNC_5(VAR_11->dev, VAR_11->irq, VAR_10,
          VAR_4, FUNC_3(VAR_11->dev), VAR_11);
 if (VAR_14 < 0) {
  FUNC_2(VAR_12, "cannot claim IRQ for gadget\n");
  return VAR_14;
 }



 if (VAR_11->num_of_eps == 0) {
  FUNC_2(VAR_12, "wrong number of EPs (zero)\n");
  return -VAR_1;
 }



 FUNC_0(&VAR_11->gadget.ep_list);
 VAR_11->gadget.ep0 = &VAR_11->eps_out[0]->ep;



 VAR_11->ctrl_req = FUNC_8(&VAR_11->eps_out[0]->ep,
           VAR_3);
 if (!VAR_11->ctrl_req) {
  FUNC_2(VAR_12, "failed to allocate ctrl req\n");
  return -VAR_2;
 }


 for (VAR_13 = 0; VAR_13 < VAR_11->num_of_eps; VAR_13++) {
  if (VAR_11->eps_in[VAR_13])
   FUNC_11(VAR_11, VAR_11->eps_in[VAR_13],
       VAR_13, 1);
  if (VAR_11->eps_out[VAR_13])
   FUNC_11(VAR_11, VAR_11->eps_out[VAR_13],
       VAR_13, 0);
 }

 VAR_14 = FUNC_12(VAR_12, &VAR_11->gadget);
 if (VAR_14) {
  FUNC_9(&VAR_11->eps_out[0]->ep,
        VAR_11->ctrl_req);
  return VAR_14;
 }
 FUNC_7(VAR_11);

 return 0;
}
