
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * field; } ;
union xhci_trb {TYPE_1__ generic; } ;
typedef int u32 ;
struct xhci_virt_ep {int dummy; } ;
struct xhci_virt_device {int out_ctx; } ;
struct xhci_transfer_event {int transfer_len; int flags; } ;
struct xhci_td {int urb_length_set; TYPE_2__* urb; } ;
struct xhci_hcd {struct xhci_virt_device** devs; } ;
struct xhci_ep_ctx {int dummy; } ;
struct TYPE_4__ {int transfer_buffer_length; int actual_length; } ;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

 int FUNC_2 (int ) ;



 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (struct xhci_hcd*,struct xhci_td*,struct xhci_transfer_event*,struct xhci_virt_ep*,int*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct xhci_hcd*,char*,...) ;
 struct xhci_ep_ctx* FUNC_8 (struct xhci_hcd*,int ,int) ;
 int FUNC_9 (struct xhci_hcd*,struct xhci_ep_ctx*,int) ;
 int FUNC_10 (struct xhci_hcd*,char*,...) ;

__attribute__((used)) static int FUNC_11(struct xhci_hcd *VAR_1, struct xhci_td *VAR_2,
 union xhci_trb *VAR_3, struct xhci_transfer_event *VAR_4,
 struct xhci_virt_ep *VAR_5, int *VAR_6)
{
 struct xhci_virt_device *VAR_7;
 unsigned int VAR_8;
 int VAR_9;
 struct xhci_ep_ctx *VAR_10;
 u32 VAR_11;
 u32 VAR_12, VAR_13;
 u32 VAR_14;

 VAR_14 = FUNC_2(FUNC_6(VAR_3->generic.field[3]));
 VAR_8 = FUNC_4(FUNC_6(VAR_4->flags));
 VAR_7 = VAR_1->devs[VAR_8];
 VAR_9 = FUNC_3(FUNC_6(VAR_4->flags)) - 1;
 VAR_10 = FUNC_8(VAR_1, VAR_7->out_ctx, VAR_9);
 VAR_11 = FUNC_1(FUNC_6(VAR_4->transfer_len));
 VAR_13 = VAR_2->urb->transfer_buffer_length;
 VAR_12 = FUNC_0(FUNC_6(VAR_4->transfer_len));

 switch (VAR_11) {
 case 132:
  if (VAR_14 != 128) {
   FUNC_10(VAR_1, "WARN: Success on ctrl %s TRB without IOC set?\n",
      (VAR_14 == 131) ? "data" : "setup");
   *VAR_6 = -VAR_0;
   break;
  }
  *VAR_6 = 0;
  break;
 case 137:
  *VAR_6 = 0;
  break;
 case 133:
  if (VAR_14 == 131 || VAR_14 == 130)
   VAR_2->urb->actual_length = VAR_12;
  else
   FUNC_10(VAR_1, "WARN: Stopped Short Packet on ctrl setup or status TRB\n");
  goto finish_td;
 case 135:
  switch (VAR_14) {
  case 129:
   VAR_2->urb->actual_length = 0;
   goto finish_td;
  case 131:
  case 130:
   VAR_2->urb->actual_length = VAR_13 - VAR_12;
   goto finish_td;
  case 128:
   VAR_2->urb->actual_length = VAR_13;
   goto finish_td;
  default:
   FUNC_10(VAR_1, "WARN: unexpected TRB Type %d\n",
      VAR_14);
   goto finish_td;
  }
 case 134:
  goto finish_td;
 default:
  if (!FUNC_9(VAR_1,
             VAR_10, VAR_11))
   break;
  FUNC_7(VAR_1, "TRB error %u, halted endpoint index = %u\n",
    VAR_11, VAR_9);

 case 136:

  if (VAR_14 == 131 || VAR_14 == 130)
   VAR_2->urb->actual_length = VAR_13 - VAR_12;
  else if (!VAR_2->urb_length_set)
   VAR_2->urb->actual_length = 0;
  goto finish_td;
 }


 if (VAR_14 == 129)
  goto finish_td;





 if (VAR_14 == 131 ||
  VAR_14 == 130) {
  VAR_2->urb_length_set = 1;
  VAR_2->urb->actual_length = VAR_13 - VAR_12;
  FUNC_7(VAR_1, "Waiting for status stage event\n");
  return 0;
 }


 if (!VAR_2->urb_length_set)
  VAR_2->urb->actual_length = VAR_13;

finish_td:
 return FUNC_5(VAR_1, VAR_2, VAR_4, VAR_5, VAR_6);
}
