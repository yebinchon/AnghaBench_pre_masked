
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct xhci_virt_ep {scalar_t__ next_frame_id; scalar_t__ use_extended_tbc; struct xhci_ring* ring; } ;
struct xhci_td {int start_seg; int first_trb; TYPE_5__* last_trb; int td_list; } ;
struct xhci_ring {int cycle_state; int num_trbs_free_temp; int num_trbs_free; int enq_seg; TYPE_5__* enqueue; } ;
struct xhci_hcd {int hci_version; int quirks; int hcc_params; TYPE_7__** devs; } ;
struct xhci_generic_trb {int dummy; } ;
struct urb_priv {struct xhci_td* td; } ;
struct urb {int number_of_packets; int transfer_flags; int interval; TYPE_2__* dev; int stream_id; scalar_t__ start_frame; TYPE_4__* ep; TYPE_3__* iso_frame_desc; struct urb_priv* hcpriv; scalar_t__ transfer_dma; } ;
typedef int gfp_t ;
struct TYPE_14__ {struct xhci_virt_ep* eps; } ;
struct TYPE_8__ {scalar_t__ bandwidth_isoc_reqs; } ;
struct TYPE_13__ {TYPE_1__ self; } ;
struct TYPE_12__ {struct xhci_generic_trb generic; } ;
struct TYPE_11__ {int desc; } ;
struct TYPE_10__ {int length; scalar_t__ offset; } ;
struct TYPE_9__ {int bus; } ;


 unsigned int FUNC_0 (int,unsigned int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct urb*,int) ;
 int FUNC_13 (struct xhci_hcd*,int,unsigned int,int ,int,struct xhci_generic_trb*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (struct xhci_hcd*,TYPE_7__*,unsigned int,int ,int,struct urb*,int,int ) ;
 int FUNC_17 (struct xhci_hcd*,struct xhci_ring*,int,int ,int ,int,int) ;
 int FUNC_18 (struct xhci_hcd*,struct xhci_ring*,struct xhci_td*,int) ;
 int FUNC_19 (scalar_t__) ;
 int FUNC_20 () ;
 unsigned int FUNC_21 (int *) ;
 int FUNC_22 (int ,struct urb*) ;
 scalar_t__ FUNC_23 (struct urb*) ;
 int FUNC_24 (struct xhci_hcd*,char*) ;
 int FUNC_25 (struct xhci_hcd*,char*) ;
 unsigned int FUNC_26 (struct xhci_hcd*,struct urb*,unsigned int) ;
 int FUNC_27 (struct xhci_hcd*,struct urb*,int) ;
 unsigned int FUNC_28 (struct xhci_hcd*,struct urb*,unsigned int) ;
 int FUNC_29 (struct xhci_hcd*,int,int,int,struct urb*,int) ;
 TYPE_6__* FUNC_30 (struct xhci_hcd*) ;

__attribute__((used)) static int FUNC_31(struct xhci_hcd *VAR_11, gfp_t VAR_12,
  struct urb *VAR_13, int VAR_14, unsigned int VAR_15)
{
 struct xhci_ring *VAR_16;
 struct urb_priv *VAR_17;
 struct xhci_td *VAR_18;
 int VAR_19, VAR_20;
 struct xhci_generic_trb *VAR_21;
 bool VAR_22;
 int VAR_23;
 u32 VAR_24, VAR_25;
 int VAR_26, VAR_27, VAR_28, VAR_29, VAR_30;
 u64 VAR_31, VAR_32;
 int VAR_33, VAR_34;
 bool VAR_35;
 struct xhci_virt_ep *VAR_36;
 int VAR_37;

 VAR_36 = &VAR_11->devs[VAR_14]->eps[VAR_15];
 VAR_16 = VAR_11->devs[VAR_14]->eps[VAR_15].ring;

 VAR_19 = VAR_13->number_of_packets;
 if (VAR_19 < 1) {
  FUNC_24(VAR_11, "Isoc URB with zero packets?\n");
  return -VAR_0;
 }
 VAR_31 = (u64) VAR_13->transfer_dma;
 VAR_21 = &VAR_16->enqueue->generic;
 VAR_23 = VAR_16->cycle_state;

 VAR_17 = VAR_13->hcpriv;

 for (VAR_33 = 0; VAR_33 < VAR_19; VAR_33++) {
  unsigned int VAR_38, VAR_39;
  unsigned int VAR_40, VAR_41;
  u32 VAR_42;

  VAR_22 = 1;
  VAR_26 = 0;
  VAR_32 = VAR_31 + VAR_13->iso_frame_desc[VAR_33].offset;
  VAR_28 = VAR_13->iso_frame_desc[VAR_33].length;
  VAR_29 = VAR_28;
  VAR_39 = FUNC_21(&VAR_13->ep->desc);
  VAR_38 = FUNC_0(VAR_28, VAR_39);


  if (VAR_38 == 0)
   VAR_38++;
  VAR_40 = FUNC_26(VAR_11, VAR_13, VAR_38);
  VAR_41 = FUNC_28(VAR_11,
       VAR_13, VAR_38);

  VAR_20 = FUNC_12(VAR_13, VAR_33);

  VAR_30 = FUNC_16(VAR_11, VAR_11->devs[VAR_14], VAR_15,
    VAR_13->stream_id, VAR_20, VAR_13, VAR_33, VAR_12);
  if (VAR_30 < 0) {
   if (VAR_33 == 0)
    return VAR_30;
   goto cleanup;
  }
  VAR_18 = &VAR_17->td[VAR_33];


  VAR_42 = VAR_7;
  if (!(VAR_13->transfer_flags & VAR_8) &&
      FUNC_1(VAR_11->hcc_params)) {
   VAR_37 = FUNC_27(VAR_11, VAR_13, VAR_33);
   if (VAR_37 >= 0)
    VAR_42 = FUNC_3(VAR_37);
  }





  VAR_24 = FUNC_10(VAR_4) |
   FUNC_9(VAR_41) |
   VAR_42 |
   (VAR_33 ? VAR_16->cycle_state : !VAR_23);


  if (!VAR_36->use_extended_tbc)
   VAR_24 |= FUNC_6(VAR_40);


  for (VAR_34 = 0; VAR_34 < VAR_20; VAR_34++) {
   u32 VAR_43 = 0;


   if (!VAR_22)
    VAR_24 = FUNC_10(VAR_6) |
     VAR_16->cycle_state;


   if (FUNC_23(VAR_13))
    VAR_24 |= VAR_5;


   if (VAR_34 < VAR_20 - 1) {
    VAR_35 = 1;
    VAR_24 |= VAR_2;
   } else {
    VAR_35 = 0;
    VAR_18->last_trb = VAR_16->enqueue;
    VAR_24 |= VAR_3;

    if (VAR_11->hci_version >= 0x100 &&
        !(VAR_11->quirks & VAR_10) &&
        VAR_33 < VAR_19 - 1)
     VAR_24 |= VAR_1;
   }

   VAR_27 = FUNC_2(VAR_32);
   if (VAR_27 > VAR_29)
    VAR_27 = VAR_29;


   VAR_43 = FUNC_29(VAR_11, VAR_26,
         VAR_27, VAR_28,
         VAR_13, VAR_35);

   VAR_25 = FUNC_5(VAR_27) |
    FUNC_4(0);


   if (VAR_22 && VAR_36->use_extended_tbc)
    VAR_25 |= FUNC_8(VAR_40);
   else
    VAR_25 |= FUNC_7(VAR_43);
   VAR_22 = 0;

   FUNC_17(VAR_11, VAR_16, VAR_35,
    FUNC_15(VAR_32),
    FUNC_19(VAR_32),
    VAR_25,
    VAR_24);
   VAR_26 += VAR_27;

   VAR_32 += VAR_27;
   VAR_29 -= VAR_27;
  }


  if (VAR_26 != VAR_28) {
   FUNC_25(VAR_11, "ISOC TD length unmatch\n");
   VAR_30 = -VAR_0;
   goto cleanup;
  }
 }


 if (FUNC_1(VAR_11->hcc_params))
  VAR_36->next_frame_id = VAR_13->start_frame + VAR_19 * VAR_13->interval;

 if (FUNC_30(VAR_11)->self.bandwidth_isoc_reqs == 0) {
  if (VAR_11->quirks & VAR_9)
   FUNC_20();
 }
 FUNC_30(VAR_11)->self.bandwidth_isoc_reqs++;

 FUNC_13(VAR_11, VAR_14, VAR_15, VAR_13->stream_id,
   VAR_23, VAR_21);
 return 0;
cleanup:


 for (VAR_33--; VAR_33 >= 0; VAR_33--)
  FUNC_14(&VAR_17->td[VAR_33].td_list);






 VAR_17->td[0].last_trb = VAR_16->enqueue;

 FUNC_18(VAR_11, VAR_16, &VAR_17->td[0], 1);


 VAR_16->enqueue = VAR_17->td[0].first_trb;
 VAR_16->enq_seg = VAR_17->td[0].start_seg;
 VAR_16->cycle_state = VAR_23;
 VAR_16->num_trbs_free = VAR_16->num_trbs_free_temp;
 FUNC_22(FUNC_11(VAR_13->dev->bus), VAR_13);
 return VAR_30;
}
