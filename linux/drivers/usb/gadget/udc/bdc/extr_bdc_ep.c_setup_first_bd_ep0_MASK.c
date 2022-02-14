
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_7__ {int length; } ;
struct bdc_req {TYPE_2__ usb_req; TYPE_1__* ep; } ;
struct TYPE_10__ {int bRequestType; int wLength; int wValue; } ;
struct TYPE_9__ {TYPE_3__* ep0; } ;
struct bdc {int ep0_state; int zlp_needed; int dev; TYPE_5__ setup_pkt; TYPE_4__ gadget; } ;
struct TYPE_8__ {int maxpacket; } ;
struct TYPE_6__ {scalar_t__ dir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (int ,char*,int,int,int) ;
 int FUNC_1 (int ,char*,int ) ;
 int * VAR_5 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct bdc *VAR_6, struct bdc_req *VAR_7, u32 *VAR_8)
{
 u16 VAR_9;
 u32 VAR_10;

 VAR_7->ep->dir = 0;
 VAR_10 = VAR_7->usb_req.length;
 switch (VAR_6->ep0_state) {
 case 129:
  *VAR_8 |= VAR_1;
  if (VAR_6->setup_pkt.bRequestType & VAR_4)
   *VAR_8 |= VAR_0;


  VAR_9 = FUNC_2(VAR_6->setup_pkt.wValue);
  if ((VAR_9 > VAR_10) &&
    (VAR_10 % VAR_6->gadget.ep0->maxpacket == 0)) {
   FUNC_0(VAR_6->dev, "ZLP needed wVal:%d len:%d MaxP:%d\n",
     VAR_9, VAR_10,
     VAR_6->gadget.ep0->maxpacket);
   VAR_6->zlp_needed = 1;
  }
  break;

 case 128:
  *VAR_8 |= VAR_2;
  if (!FUNC_2(VAR_6->setup_pkt.wLength) ||
    !(VAR_6->setup_pkt.bRequestType & VAR_4))
   *VAR_8 |= VAR_0;
  break;
 default:
  FUNC_1(VAR_6->dev,
   "Unknown ep0 state for queueing bd ep0_state:%s\n",
   VAR_5[VAR_6->ep0_state]);
  return -VAR_3;
 }

 return 0;
}
