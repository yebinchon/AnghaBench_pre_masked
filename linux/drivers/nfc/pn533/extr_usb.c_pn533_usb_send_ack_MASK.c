
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pn533_usb_phy {TYPE_1__* ack_urb; scalar_t__ ack_buffer; } ;
struct pn533 {struct pn533_usb_phy* phy; } ;
typedef int gfp_t ;
typedef int ack ;
struct TYPE_2__ {int transfer_buffer_length; scalar_t__ transfer_buffer; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const*,int,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_2(struct pn533 *VAR_1, gfp_t VAR_2)
{
 struct pn533_usb_phy *VAR_3 = VAR_1->phy;
 static const u8 VAR_4[6] = {0x00, 0x00, 0xff, 0x00, 0xff, 0x00};


 if (!VAR_3->ack_buffer) {
  VAR_3->ack_buffer = FUNC_0(VAR_4, sizeof(VAR_4), VAR_2);
  if (!VAR_3->ack_buffer)
   return -VAR_0;
 }

 VAR_3->ack_urb->transfer_buffer = VAR_3->ack_buffer;
 VAR_3->ack_urb->transfer_buffer_length = sizeof(VAR_4);
 return FUNC_1(VAR_3->ack_urb, VAR_2);
}
