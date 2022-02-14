
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; int data; } ;
struct pn533_usb_phy {TYPE_1__* out_urb; struct pn533* priv; } ;
struct pn533 {scalar_t__ protocol_type; struct pn533_usb_phy* phy; } ;
struct TYPE_3__ {int transfer_buffer_length; int transfer_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct pn533_usb_phy*,int ) ;
 int FUNC_1 (struct pn533_usb_phy*,int ) ;
 int FUNC_2 (char*,int ,int,int,int ,int ,int) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct pn533 *VAR_4,
    struct sk_buff *VAR_5)
{
 struct pn533_usb_phy *VAR_6 = VAR_4->phy;
 int VAR_7;

 if (VAR_6->priv == ((void*)0))
  VAR_6->priv = VAR_4;

 VAR_6->out_urb->transfer_buffer = VAR_5->data;
 VAR_6->out_urb->transfer_buffer_length = VAR_5->len;

 FUNC_2("PN533 TX: ", VAR_0, 16, 1,
        VAR_5->data, VAR_5->len, 0);

 VAR_7 = FUNC_3(VAR_6->out_urb, VAR_1);
 if (VAR_7)
  return VAR_7;

 if (VAR_4->protocol_type == VAR_3) {

  VAR_7 = FUNC_1(VAR_6, VAR_1);
  if (VAR_7)
   goto error;
 } else if (VAR_4->protocol_type == VAR_2) {

  VAR_7 = FUNC_0(VAR_6, VAR_1);
  if (VAR_7)
   goto error;
 }

 return 0;

error:
 FUNC_4(VAR_6->out_urb);
 return VAR_7;
}
