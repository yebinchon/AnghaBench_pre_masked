
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int status; int actual_length; int transfer_buffer; struct pn533_usb_phy* context; } ;
struct sk_buff {int dummy; } ;
struct pn533_usb_phy {int priv; TYPE_1__* udev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct urb *VAR_1)
{
 struct pn533_usb_phy *VAR_2 = VAR_1->context;
 struct sk_buff *VAR_3 = ((void*)0);

 if (!VAR_1->status) {
  VAR_3 = FUNC_0(VAR_1->actual_length, VAR_0);
  if (!VAR_3) {
   FUNC_1(&VAR_2->udev->dev, "failed to alloc memory\n");
  } else {
   FUNC_3(VAR_3, VAR_1->transfer_buffer,
         VAR_1->actual_length);
  }
 }

 FUNC_2(VAR_2->priv, VAR_3, VAR_1->status);
}
