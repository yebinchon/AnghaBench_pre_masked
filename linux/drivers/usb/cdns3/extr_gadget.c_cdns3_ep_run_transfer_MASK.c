
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct usb_request {int num_sgs; int length; TYPE_4__* sg; int dma; } ;
struct cdns3_trb {int control; int length; int buffer; } ;
struct cdns3_request {int flags; int start_trb; int end_trb; struct cdns3_trb* trb; TYPE_2__* aligned_buf; } ;
struct TYPE_11__ {int maxpacket; TYPE_1__* desc; } ;
struct cdns3_endpoint {scalar_t__ type; int interval; int free_trbs; int flags; int enqueue; int num_trbs; int pcs; int name; int wa1_set; scalar_t__ trb_pool_dma; int dir; struct cdns3_trb* trb_pool; int trb_burst_size; TYPE_5__ endpoint; struct cdns3_device* cdns3_dev; } ;
struct TYPE_12__ {scalar_t__ speed; } ;
struct cdns3_device {scalar_t__ dev_ver; TYPE_3__* regs; TYPE_6__ gadget; } ;
typedef int dma_addr_t ;
struct TYPE_10__ {int length; int dma_address; } ;
struct TYPE_9__ {int ep_traddr; int ep_cmd; int ep_sts; int ep_cfg; } ;
struct TYPE_8__ {int dma; } ;
struct TYPE_7__ {int bEndpointAddress; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_4 (int) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_22 ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int FUNC_8 (struct cdns3_device*) ;
 int FUNC_9 (struct cdns3_endpoint*) ;
 int FUNC_10 (struct cdns3_device*,struct cdns3_endpoint*) ;
 int FUNC_11 (struct cdns3_device*,int) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (struct cdns3_device*,struct cdns3_endpoint*) ;
 int FUNC_14 (struct cdns3_endpoint*,struct cdns3_trb*) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (int *) ;
 struct cdns3_request* FUNC_17 (struct usb_request*) ;
 int FUNC_18 (int ,int) ;
 int FUNC_19 (struct cdns3_endpoint*,struct cdns3_trb*) ;
 int FUNC_20 (struct cdns3_endpoint*) ;
 int FUNC_21 () ;
 int FUNC_22 (int,int *) ;

int FUNC_23(struct cdns3_endpoint *VAR_25,
     struct usb_request *VAR_26)
{
 struct cdns3_device *VAR_27 = VAR_25->cdns3_dev;
 struct cdns3_request *VAR_28;
 struct cdns3_trb *VAR_29;
 dma_addr_t VAR_30;
 u32 VAR_31 = 1;
 int VAR_32 = 0;
 int VAR_33;
 int VAR_34;
 u32 VAR_35;
 int VAR_36;

 if (VAR_25->type == VAR_23)
  VAR_33 = VAR_25->interval;
 else
  VAR_33 = VAR_26->num_sgs ? VAR_26->num_sgs : 1;

 if (VAR_33 > VAR_25->free_trbs) {
  VAR_25->flags |= VAR_7;
  return -VAR_1;
 }

 VAR_28 = FUNC_17(VAR_26);
 VAR_34 = VAR_25->endpoint.desc->bEndpointAddress;

 VAR_25->flags |= VAR_5;


 if (VAR_28->flags & VAR_13)
  VAR_30 = VAR_28->aligned_buf->dma;
 else
  VAR_30 = VAR_26->dma;

 VAR_29 = VAR_25->trb_pool + VAR_25->enqueue;
 VAR_28->start_trb = VAR_25->enqueue;
 VAR_28->trb = VAR_29;

 FUNC_11(VAR_25->cdns3_dev, VAR_34);


 if ((VAR_25->enqueue + VAR_33) >= (VAR_25->num_trbs - 1)) {
  struct cdns3_trb *VAR_37;
  int VAR_38, VAR_39;
  u32 VAR_40 = 0;

  VAR_38 = !!(FUNC_16(&VAR_27->regs->ep_cmd) & VAR_3);
  VAR_39 = FUNC_10(VAR_27, VAR_25);


  if (VAR_38 && VAR_39 == VAR_25->num_trbs - 1) {
   VAR_25->flags |= VAR_4;
   return -VAR_1;
  }


  VAR_37 = VAR_25->trb_pool + (VAR_25->num_trbs - 1);
  if (VAR_25->type == VAR_23 ||
      VAR_14 > 2)
   VAR_40 = VAR_15;

  VAR_37->control = ((VAR_25->pcs) ? VAR_16 : 0) |
        FUNC_7(VAR_19) | VAR_22 | VAR_40;
 }

 if (VAR_27->dev_ver <= VAR_0)
  VAR_31 = FUNC_14(VAR_25, VAR_29);


 VAR_35 = VAR_25->pcs ? 0 : VAR_16;

 do {
  u32 VAR_41;
  u16 VAR_42 = 0;


  VAR_35 |= FUNC_7(VAR_20);
  VAR_29->buffer = FUNC_2(VAR_26->num_sgs == 0
    ? VAR_30 : VAR_26->sg[VAR_32].dma_address);

  if (FUNC_15(!VAR_26->num_sgs))
   VAR_41 = VAR_26->length;
  else
   VAR_41 = VAR_26->sg[VAR_32].length;

  if (FUNC_15(VAR_27->dev_ver >= VAR_0))
   VAR_42 = FUNC_0(VAR_41,
            VAR_25->endpoint.maxpacket);

  VAR_29->length = FUNC_3(VAR_25->trb_burst_size) |
     FUNC_4(VAR_41);
  if (VAR_27->gadget.speed == VAR_24)
   VAR_29->length |= FUNC_6(VAR_42);
  else
   VAR_35 |= FUNC_5(VAR_42);

  VAR_36 = VAR_25->pcs ? VAR_16 : 0;





  if (VAR_32 != 0)
   VAR_35 |= VAR_36;

  if (VAR_25->type == VAR_23 && !VAR_25->dir) {
   VAR_35 |= VAR_17 | VAR_18;
  } else {

   if (VAR_32 == (VAR_33 - 1) && VAR_32 != 0)
    VAR_35 |= VAR_36 | VAR_17 | VAR_18;
  }

  if (VAR_32)
   VAR_29->control = VAR_35;
  else
   VAR_28->trb->control = VAR_35;

  VAR_35 = 0;
  ++VAR_32;
  VAR_28->end_trb = VAR_25->enqueue;
  FUNC_9(VAR_25);
  VAR_29 = VAR_25->trb_pool + VAR_25->enqueue;
 } while (VAR_32 < VAR_33);

 VAR_29 = VAR_28->trb;

 VAR_28->flags |= VAR_12;

 if (VAR_32 == 1)
  VAR_29->control |= VAR_17 | VAR_18;




 FUNC_21();


 if (VAR_31)
  VAR_29->control = VAR_29->control ^ 1;

 if (VAR_27->dev_ver <= VAR_0)
  FUNC_13(VAR_27, VAR_25);

 FUNC_19(VAR_25, VAR_28->trb);





 FUNC_21();





 if (VAR_25->flags & VAR_11) {





  if (VAR_25->type == VAR_23 && !VAR_25->dir &&
      !(VAR_25->flags & VAR_6)) {
   VAR_25->flags |= VAR_6;
   FUNC_12(&VAR_27->regs->ep_cfg,
            VAR_2);
  }

  FUNC_22(FUNC_1(VAR_25->trb_pool_dma +
     VAR_28->start_trb * VAR_21),
     &VAR_27->regs->ep_traddr);

  VAR_25->flags &= ~VAR_11;
 }

 if (!VAR_25->wa1_set && !(VAR_25->flags & VAR_8)) {
  FUNC_20(VAR_25);

  FUNC_22(VAR_10 | VAR_9, &VAR_27->regs->ep_sts);
  FUNC_22(VAR_3, &VAR_27->regs->ep_cmd);
  FUNC_18(VAR_25->name,
      FUNC_16(&VAR_27->regs->ep_traddr));
 }


 FUNC_8(VAR_27);

 return 0;
}
