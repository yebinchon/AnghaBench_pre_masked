
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct dwc2_tt {TYPE_1__* usb_tt; } ;
struct TYPE_4__ {int * function; } ;
struct dwc2_qh {int ep_is_in; int maxp; int maxp_mult; int do_split; int dev_speed; int host_interval; int num_hs_transfers; scalar_t__ schedule_low_speed; int device_interval; void* device_us; void* host_us; scalar_t__ ep_type; struct dwc2_tt* dwc_tt; int ttport; int qh_list_entry; int qtd_list; int data_toggle; TYPE_2__ wait_timer; int unreserve_timer; struct dwc2_hsotg* hsotg; } ;
struct dwc2_hsotg {int dummy; } ;
struct dwc2_hcd_urb {int interval; int pipe_info; int priv; } ;
typedef int gfp_t ;
struct TYPE_3__ {scalar_t__ think_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int) ;







 int FUNC_2 (struct dwc2_hsotg*,struct dwc2_qh*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct dwc2_hsotg*,int ) ;
 struct dwc2_tt* FUNC_10 (struct dwc2_hsotg*,int ,int ,int *) ;
 scalar_t__ FUNC_11 (struct dwc2_hsotg*,int ) ;
 int FUNC_12 (struct dwc2_hsotg*,char*,struct dwc2_qh*,...) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_13 (TYPE_2__*,int ,int ) ;
 int FUNC_14 (int *,int ,int ) ;
 int FUNC_15 (int,int,int,int) ;

__attribute__((used)) static void FUNC_16(struct dwc2_hsotg *VAR_9, struct dwc2_qh *VAR_10,
    struct dwc2_hcd_urb *VAR_11, gfp_t VAR_12)
{
 int VAR_13 = FUNC_9(VAR_9, VAR_11->priv);
 u8 VAR_14 = FUNC_7(&VAR_11->pipe_info);
 bool VAR_15 = !!FUNC_8(&VAR_11->pipe_info);
 bool VAR_16 = (VAR_14 == 131);
 bool VAR_17 = (VAR_14 == 132);
 u32 VAR_18 = FUNC_11(VAR_9, VAR_2);
 u32 VAR_19 = (VAR_18 & VAR_4) >> VAR_5;
 bool VAR_20 = (VAR_19 == VAR_3 &&
    VAR_13 != 129);
 int VAR_21 = FUNC_5(&VAR_11->pipe_info);
 int VAR_22 = FUNC_6(&VAR_11->pipe_info);
 int VAR_23 = VAR_22 * VAR_21;
 char *VAR_24, *VAR_25;


 VAR_10->hsotg = VAR_9;
 FUNC_14(&VAR_10->unreserve_timer, VAR_7, 0);
 FUNC_13(&VAR_10->wait_timer, VAR_0, VAR_6);
 VAR_10->wait_timer.function = &VAR_8;
 VAR_10->ep_type = VAR_14;
 VAR_10->ep_is_in = VAR_15;

 VAR_10->data_toggle = VAR_1;
 VAR_10->maxp = VAR_21;
 VAR_10->maxp_mult = VAR_22;
 FUNC_0(&VAR_10->qtd_list);
 FUNC_0(&VAR_10->qh_list_entry);

 VAR_10->do_split = VAR_20;
 VAR_10->dev_speed = VAR_13;

 if (VAR_17 || VAR_16) {

  int VAR_26 = VAR_20 ? 129 : VAR_13;
  struct dwc2_tt *VAR_27 = FUNC_10(VAR_9, VAR_11->priv,
              VAR_12,
              &VAR_10->ttport);
  int VAR_28;

  VAR_10->dwc_tt = VAR_27;

  VAR_10->host_us = FUNC_1(FUNC_15(VAR_26, VAR_15,
           VAR_16, VAR_23));
  VAR_28 = FUNC_15(VAR_13, VAR_15,
           VAR_16, VAR_23);

  if (VAR_20 && VAR_27)
   VAR_28 += VAR_27->usb_tt->think_time;
  VAR_10->device_us = FUNC_1(VAR_28);

  VAR_10->device_interval = VAR_11->interval;
  VAR_10->host_interval = VAR_11->interval * (VAR_20 ? 8 : 1);






  VAR_10->schedule_low_speed = VAR_19 != VAR_3 ||
      VAR_27;

  if (VAR_20) {

   VAR_10->num_hs_transfers = -1;
  } else if (VAR_13 == 129) {
   VAR_10->num_hs_transfers = 1;
  } else {
   VAR_10->num_hs_transfers = 0;
  }


 }

 switch (VAR_13) {
 case 128:
  VAR_24 = "low";
  break;
 case 130:
  VAR_24 = "full";
  break;
 case 129:
  VAR_24 = "high";
  break;
 default:
  VAR_24 = "?";
  break;
 }

 switch (VAR_10->ep_type) {
 case 131:
  VAR_25 = "isochronous";
  break;
 case 132:
  VAR_25 = "interrupt";
  break;
 case 133:
  VAR_25 = "control";
  break;
 case 134:
  VAR_25 = "bulk";
  break;
 default:
  VAR_25 = "?";
  break;
 }

 FUNC_12(VAR_9, "QH=%p Init %s, %s speed, %d bytes:\n", VAR_10, VAR_25,
       VAR_24, VAR_23);
 FUNC_12(VAR_9, "QH=%p ...addr=%d, ep=%d, %s\n", VAR_10,
       FUNC_3(&VAR_11->pipe_info),
       FUNC_4(&VAR_11->pipe_info),
       VAR_15 ? "IN" : "OUT");
 if (VAR_17 || VAR_16) {
  FUNC_12(VAR_9,
        "QH=%p ...duration: host=%d us, device=%d us\n",
        VAR_10, VAR_10->host_us, VAR_10->device_us);
  FUNC_12(VAR_9, "QH=%p ...interval: host=%d, device=%d\n",
        VAR_10, VAR_10->host_interval, VAR_10->device_interval);
  if (VAR_10->schedule_low_speed)
   FUNC_12(VAR_9, "QH=%p ...low speed schedule=%p\n",
         VAR_10, FUNC_2(VAR_9, VAR_10));
 }
}
