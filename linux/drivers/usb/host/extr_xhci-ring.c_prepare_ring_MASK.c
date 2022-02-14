
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct xhci_ring {unsigned int num_trbs_free; scalar_t__ type; int cycle_state; TYPE_2__* enq_seg; TYPE_3__* enqueue; } ;
struct xhci_hcd {int quirks; struct xhci_ring* cmd_ring; } ;
typedef int gfp_t ;
struct TYPE_5__ {int control; } ;
struct TYPE_7__ {TYPE_1__ link; } ;
struct TYPE_6__ {TYPE_3__* trbs; struct TYPE_6__* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (struct xhci_hcd*,struct xhci_ring*,unsigned int) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct xhci_hcd*,char*) ;
 int FUNC_6 (struct xhci_hcd*,int ,char*) ;
 int FUNC_7 (struct xhci_hcd*,char*) ;
 int FUNC_8 (struct xhci_hcd*) ;
 scalar_t__ FUNC_9 (struct xhci_hcd*,struct xhci_ring*,unsigned int,int ) ;
 int FUNC_10 (struct xhci_hcd*,char*) ;

__attribute__((used)) static int FUNC_11(struct xhci_hcd *VAR_8, struct xhci_ring *VAR_9,
  u32 VAR_10, unsigned int VAR_11, gfp_t VAR_12)
{
 unsigned int VAR_13;


 switch (VAR_10) {
 case 132:




  FUNC_10(VAR_8, "WARN urb submitted to disabled ep\n");
  return -VAR_1;
 case 131:
  FUNC_10(VAR_8, "WARN waiting for error on ep to be cleared\n");


  return -VAR_0;
 case 130:
  FUNC_5(VAR_8, "WARN halted endpoint, queueing URB anyway.\n");
 case 128:
 case 129:
  break;
 default:
  FUNC_7(VAR_8, "ERROR unknown endpoint state for ep\n");




  return -VAR_0;
 }

 while (1) {
  if (FUNC_2(VAR_8, VAR_9, VAR_11))
   break;

  if (VAR_9 == VAR_8->cmd_ring) {
   FUNC_7(VAR_8, "Do not support expand command ring\n");
   return -VAR_2;
  }

  FUNC_6(VAR_8, VAR_7,
    "ERROR no room on ep ring, try ring expansion");
  VAR_13 = VAR_11 - VAR_9->num_trbs_free;
  if (FUNC_9(VAR_8, VAR_9, VAR_13,
     VAR_12)) {
   FUNC_7(VAR_8, "Ring expansion failed\n");
   return -VAR_2;
  }
 }

 while (FUNC_3(VAR_9->enqueue)) {



  if (!FUNC_8(VAR_8) &&
      !(VAR_9->type == VAR_5 &&
        (VAR_8->quirks & VAR_6)))
   VAR_9->enqueue->link.control &=
    FUNC_0(~VAR_3);
  else
   VAR_9->enqueue->link.control |=
    FUNC_0(VAR_3);

  FUNC_4();
  VAR_9->enqueue->link.control ^= FUNC_0(VAR_4);


  if (FUNC_1(VAR_9->enqueue))
   VAR_9->cycle_state ^= 1;

  VAR_9->enq_seg = VAR_9->enq_seg->next;
  VAR_9->enqueue = VAR_9->enq_seg->trbs;
 }
 return 0;
}
