
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ snpsid; } ;
struct TYPE_3__ {scalar_t__ host_dma; } ;
struct dwc2_hsotg {int wkp_timer; int phy_reset_work; scalar_t__ wq_otg; int wf_otg; TYPE_2__ hw_params; struct dwc2_host_chan* status_buf; int status_buf_dma; int dev; TYPE_1__ params; struct dwc2_host_chan** hc_ptr_array; int periodic_sched_queued; int periodic_sched_assigned; int periodic_sched_ready; int periodic_sched_inactive; int non_periodic_sched_active; int non_periodic_sched_waiting; int non_periodic_sched_inactive; } ;
struct dwc2_host_chan {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,int ,struct dwc2_host_chan*,int ) ;
 int FUNC_5 (struct dwc2_hsotg*,int *) ;
 int FUNC_6 (struct dwc2_hsotg*,int ) ;
 int FUNC_7 (struct dwc2_hsotg*,int ,int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct dwc2_host_chan*) ;

__attribute__((used)) static void FUNC_10(struct dwc2_hsotg *VAR_8)
{
 u32 VAR_9;
 u32 VAR_10;
 int VAR_11;

 FUNC_3(VAR_8->dev, "DWC OTG HCD FREE\n");


 FUNC_5(VAR_8, &VAR_8->non_periodic_sched_inactive);
 FUNC_5(VAR_8, &VAR_8->non_periodic_sched_waiting);
 FUNC_5(VAR_8, &VAR_8->non_periodic_sched_active);
 FUNC_5(VAR_8, &VAR_8->periodic_sched_inactive);
 FUNC_5(VAR_8, &VAR_8->periodic_sched_ready);
 FUNC_5(VAR_8, &VAR_8->periodic_sched_assigned);
 FUNC_5(VAR_8, &VAR_8->periodic_sched_queued);


 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
  struct dwc2_host_chan *VAR_12 = VAR_8->hc_ptr_array[VAR_11];

  if (VAR_12) {
   FUNC_3(VAR_8->dev, "HCD Free channel #%i, chan=%p\n",
    VAR_11, VAR_12);
   VAR_8->hc_ptr_array[VAR_11] = ((void*)0);
   FUNC_9(VAR_12);
  }
 }

 if (VAR_8->params.host_dma) {
  if (VAR_8->status_buf) {
   FUNC_4(VAR_8->dev, VAR_3,
       VAR_8->status_buf,
       VAR_8->status_buf_dma);
   VAR_8->status_buf = ((void*)0);
  }
 } else {
  FUNC_9(VAR_8->status_buf);
  VAR_8->status_buf = ((void*)0);
 }

 VAR_9 = FUNC_6(VAR_8, VAR_4);


 VAR_9 &= ~VAR_5;
 FUNC_7(VAR_8, VAR_9, VAR_4);
 FUNC_7(VAR_8, 0, VAR_6);

 if (VAR_8->hw_params.snpsid >= VAR_2) {
  VAR_10 = FUNC_6(VAR_8, VAR_0);
  VAR_10 |= VAR_1;
  FUNC_7(VAR_8, VAR_10, VAR_0);
 }

 if (VAR_8->wq_otg) {
  if (!FUNC_0(&VAR_8->wf_otg))
   FUNC_8(VAR_8->wq_otg);
  FUNC_2(VAR_8->wq_otg);
 }

 FUNC_0(&VAR_8->phy_reset_work);

 FUNC_1(&VAR_8->wkp_timer);
}
