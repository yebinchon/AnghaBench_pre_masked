
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xhci_virt_ep {int next_frame_id; struct xhci_ring* ring; } ;
struct xhci_virt_device {int out_ctx; struct xhci_virt_ep* eps; } ;
struct xhci_ring {int num_trbs_free; int num_trbs_free_temp; int td_list; } ;
struct xhci_hcd {int hcs_params2; TYPE_1__* run_regs; int hcc_params; struct xhci_virt_device** devs; } ;
struct xhci_ep_ctx {int dummy; } ;
struct urb {int number_of_packets; int start_frame; int interval; TYPE_2__* dev; } ;
typedef int gfp_t ;
struct TYPE_4__ {scalar_t__ speed; } ;
struct TYPE_3__ {int microframe_index; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct xhci_ep_ctx*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct xhci_hcd*,struct urb*,struct xhci_ep_ctx*) ;
 scalar_t__ FUNC_4 (struct urb*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct xhci_hcd*,struct xhci_ring*,scalar_t__,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,int) ;
 struct xhci_ep_ctx* FUNC_9 (struct xhci_hcd*,int ,unsigned int) ;
 int FUNC_10 (struct xhci_hcd*,int ,struct urb*,int,unsigned int) ;

int FUNC_11(struct xhci_hcd *VAR_4, gfp_t VAR_5,
  struct urb *VAR_6, int VAR_7, unsigned int VAR_8)
{
 struct xhci_virt_device *VAR_9;
 struct xhci_ring *VAR_10;
 struct xhci_ep_ctx *VAR_11;
 int VAR_12;
 int VAR_13, VAR_14, VAR_15;
 int VAR_16;
 struct xhci_virt_ep *VAR_17;
 int VAR_18;

 VAR_9 = VAR_4->devs[VAR_7];
 VAR_17 = &VAR_4->devs[VAR_7]->eps[VAR_8];
 VAR_10 = VAR_9->eps[VAR_8].ring;
 VAR_11 = FUNC_9(VAR_4, VAR_9->out_ctx, VAR_8);

 VAR_14 = 0;
 VAR_13 = VAR_6->number_of_packets;
 for (VAR_15 = 0; VAR_15 < VAR_13; VAR_15++)
  VAR_14 += FUNC_4(VAR_6, VAR_15);




 VAR_16 = FUNC_6(VAR_4, VAR_10, FUNC_0(VAR_11),
      VAR_14, VAR_5);
 if (VAR_16)
  return VAR_16;





 FUNC_3(VAR_4, VAR_6, VAR_11);


 if (FUNC_1(VAR_4->hcc_params) && !FUNC_5(&VAR_10->td_list)) {
  if (FUNC_0(VAR_11) == VAR_0) {
   VAR_6->start_frame = VAR_17->next_frame_id;
   goto skip_start_over;
  }
 }

 VAR_12 = FUNC_7(&VAR_4->run_regs->microframe_index);
 VAR_12 &= 0x3fff;




 VAR_18 = FUNC_2(VAR_4->hcs_params2) & 0x7;
 if (FUNC_2(VAR_4->hcs_params2) & (1 << 3))
  VAR_18 <<= 3;
 VAR_12 += VAR_18 + VAR_3;
 VAR_12 = FUNC_8(VAR_12, 8);





 if (VAR_6->dev->speed == VAR_2 ||
   VAR_6->dev->speed == VAR_1) {
  VAR_12 = FUNC_8(VAR_12, VAR_6->interval << 3);
  VAR_6->start_frame = VAR_12 >> 3;
 } else {
  VAR_12 = FUNC_8(VAR_12, VAR_6->interval);
  VAR_6->start_frame = VAR_12;
 }

skip_start_over:
 VAR_10->num_trbs_free_temp = VAR_10->num_trbs_free;

 return FUNC_10(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
}
