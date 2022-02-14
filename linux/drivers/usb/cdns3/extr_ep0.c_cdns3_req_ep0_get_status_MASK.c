
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct usb_ctrlrequest {int bRequestType; int wIndex; } ;
struct cdns3_endpoint {int flags; } ;
struct TYPE_3__ {int speed; } ;
struct cdns3_device {int setup_dma; scalar_t__ setup_buf; TYPE_2__* regs; struct cdns3_endpoint** eps; int u2_allowed; int u1_allowed; TYPE_1__ gadget; int wake_up_flag; int is_selfpowered; } ;
typedef int __le16 ;
struct TYPE_4__ {int ep_sts; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct cdns3_device*,struct usb_ctrlrequest*) ;
 int FUNC_3 (struct cdns3_device*,int ,int,int,int ) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (struct cdns3_device*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct cdns3_device *VAR_9,
        struct usb_ctrlrequest *VAR_10)
{
 struct cdns3_endpoint *VAR_11;
 __le16 *VAR_12;
 u16 VAR_13 = 0;
 u32 VAR_14;
 u8 VAR_15;

 VAR_14 = VAR_10->bRequestType & VAR_7;

 switch (VAR_14) {
 case 130:

  if (VAR_9->is_selfpowered)
   VAR_13 = FUNC_0(VAR_3);

  if (VAR_9->wake_up_flag)
   VAR_13 |= FUNC_0(VAR_2);

  if (VAR_9->gadget.speed != VAR_8)
   break;

  if (VAR_9->u1_allowed)
   VAR_13 |= FUNC_0(VAR_4);

  if (VAR_9->u2_allowed)
   VAR_13 |= FUNC_0(VAR_5);

  break;
 case 128:
  return FUNC_2(VAR_9, VAR_10);
 case 129:
  VAR_15 = FUNC_4(VAR_10->wIndex);
  VAR_11 = VAR_9->eps[VAR_15];


  FUNC_5(VAR_9, VAR_10->wIndex);
  if (FUNC_1(FUNC_7(&VAR_9->regs->ep_sts)) ||
      (VAR_11->flags & VAR_1))
   VAR_13 = FUNC_0(VAR_6);
  break;
 default:
  return -VAR_0;
 }

 VAR_12 = (__le16 *)VAR_9->setup_buf;
 *VAR_12 = FUNC_6(VAR_13);

 FUNC_3(VAR_9, VAR_9->setup_dma,
          sizeof(*VAR_12), 1, 0);
 return 0;
}
