
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vnt_usb_send_context {int in_use; int buf_len; int data; struct urb* urb; } ;
struct vnt_private {TYPE_1__* usb; int flags; } ;
struct urb {int dummy; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (struct urb*,TYPE_1__*,int ,int ,int ,int ,struct vnt_usb_send_context*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (struct urb*,int ) ;
 int VAR_5 ;

int FUNC_5(struct vnt_private *VAR_6,
     struct vnt_usb_send_context *VAR_7)
{
 int VAR_8;
 struct urb *VAR_9 = VAR_7->urb;

 if (FUNC_1(VAR_0, &VAR_6->flags)) {
  VAR_7->in_use = 0;
  return VAR_4;
 }

 FUNC_2(VAR_9,
     VAR_6->usb,
     FUNC_3(VAR_6->usb, 3),
     VAR_7->data,
     VAR_7->buf_len,
     VAR_5,
     VAR_7);

 VAR_8 = FUNC_4(VAR_9, VAR_1);
 if (VAR_8) {
  FUNC_0(&VAR_6->usb->dev, "Submit Tx URB failed %d\n", VAR_8);

  VAR_7->in_use = 0;
  return VAR_2;
 }

 return VAR_3;
}
